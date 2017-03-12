
#include <iostream>
#include <array>
template <class T>
void fun( T s)
{
    std::cout<<s<<std::endl;
    
}
template void fun<double>(double);
template void fun<int>(int);
template void fun<>(char);
template void fun( float);
char *p=0;
template <class T>  T void g( T = &p) { return T;)
    

template <typename T ,typename U ,typename V> void fun( T (U::*)(V));
template < int N> void f(std::array<int,N>*);

template < int N ,typename T> void f(std::array<T,N> *);

//void f(auto (auto::*)(auto));

int main()
{
    
}
