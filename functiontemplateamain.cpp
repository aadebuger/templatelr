
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
template < typename To, typename From> To convertfrom( From fr);

template <class T> void f( T t);
template <class X> void g( const X x);
template <class Z> void h( Z z, Z * zp);
template <typename T1,typename T2> void f(T1,T2);
    template <typename T> void f(T);
    template <typename T> void f(T*);

    tempalte <class T>  void func( T a)
    {
        
    }
    template <> void func( int a )
    {
        
    }
int main()
{
    double d;
    int i = convertfrom<int>( d);
    char  c = convertfrom(d );
    int (*ptr)( int) = convertfrom;
}
