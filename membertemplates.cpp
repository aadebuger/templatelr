#include <iostream>
#include <vector>
#include <algorithm>

struct Printer
{
    std::ostream &os;
    Printer( std::ostream &os):os(os) {}
    template <typename T>
    void operator()(const T& obj) { os <<obj << " ";}
    
};
struct A {
    template <class T> struct B;
    template <class T> struct B<T*> {};
   // template <> struct B<int> {};
};
template <> struct A::B<int> {};

template <typename T1>
struct string {
    template <typename T2>
    int compare(const T2 &);
    template<typename T3>
    string(const std::basic_string<T3> &s)  { }
};
int main()
{
    std::vector<int> av={1,2,3};
    std::for_each( av.begin(),av.end(),Printer(std::cout));
    std::string str="123";
    std::for_each(str.begin(),str.end(),Printer(std::cout));
    
}
