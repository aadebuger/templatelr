#include <functional>
#include <iostream>
class A {
public:
    A() { std::cout<<"A="<<std::endl;}
    ~A() { std::cout<<"~A="<<std::endl;}
    
};
A&& func()
{
    return std::move(A());
}
int main()
{
    auto f = [ ] (int &i){ return ++i;};
    int x=1;
    auto f1 = std::bind( f, x);
    f1();
    std::cout<<"x="<<x<<std::endl;
    auto f2 = std::bind( f, std::ref(x));
    f2();
    std::cout<<"x="<<x<<std::endl;
    A &&a =func();
    
    int &&i = std::move(1);
    std::cout << i << std::endl;
    i = 2;
    std::cout << i << std::endl;
}
