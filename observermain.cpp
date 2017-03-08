#include <iostream>
#include <vector>
#include <algorithm>
#include <stdio.h>
#include <type_traits>
#include <vector>
#include <map>
#include <utility>  
#include  <functional>
//https://juanchopanzacpp.wordpress.com/2013/02/24/simple-observer-pattern-implementation-c11/
class Observer;

enum class Event { RED, GREEN, BLUE, ORANGE, MAGENTA, CYAN };
class Subject
{
public:
    template <typename Observer>
    void registerObserver( const Event &event, const Observer &observer)
    {
        observers_[event].push_back(std::forward<Observer>(observer));
    }
    void notify( const Event &event) const
    {
        for ( const auto &obs : observers_.at(event)) obs();
        
    }
  

private:
    std::map<Event,std::vector<std::function<void()>>> observers_;
    std::vector<std::function<void()>> testvector;
    
};


void foo(int i)
{
    std::cout << "foo( " <<  i << " )\n";
}

void bar() {
    std::cout << "bar()\n";
}
template <typename Event>
class Subject1
{
public:
    /*
    template <typename Observer>
    void registerObserver(const Event& event, Observer&& observer)
    {
        std::cout<<"r0"<<std::endl;
        
        observers_[event].push_back(std::forward<Observer>(observer));
    }
    */
    template <typename Observer>
    void registerObserver(Event&& event, Observer&& observer)
    {
         std::cout<<"r1"<<std::endl;
        observers_[std::move(event)].push_back(observer);
    }
    
    void notify(const Event& event) const
    {
        for (const auto& obs : observers_.at(event)) obs();
    }
    
private:
    std::map<Event, std::vector<std::function<void()>>> observers_;
};

int main()
{
    Subject s;
      s.registerObserver(Event::GREEN, bar);
    Subject1<std::string> s1;
    s1.registerObserver("GREEN", bar);
    s1.registerObserver("ORANGE", std::bind(foo, 42));
    const std::string msg("Hello, RED!");
    s1.registerObserver("RED", [&msg]{std::cout << msg << std::endl;});
    
    s1.notify("GREEN");
    s1.notify("RED");
    s1.notify("ORANGE");
}
    


