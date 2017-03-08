#include <iostream>
#include <vector>
#include <algorithm>
#include <stdio.h>
#include <type_traits>
#include <vector>
#include <map>
#include <utility>  
#include  <functional>
#include <mutex>
#include <conditonal_variable>


class Task {
public:
    Task();
    virtual void operation() =0;
};
class TaskRunner {
    static Vecotr(Task *) taskv;
    TaskRunner() {};
    TaskRunner & operator= ( TaskRunner &);
    TaskRunner( const TaskRunner &);
    static TaskRunner tr ;
    
};
//https://juanchopanzacpp.wordpress.com/2013/02/24/simple-observer-pattern-implementation-c11/
template <class T>
class  Queue
{
    std::queue<T> queue_;
    std::mutex  mutex_;
    std::condition_variable cond_;
    
    T pop();
    void push( const T&m);
}

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
    


