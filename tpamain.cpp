#include <iostream>

template <class T> class Array {
    
};
template <class T,class C, template<typename> typename D= Array >
class Vecotr
{
    D<T> key1;
    D<T> value1 ;
   // C &get();
    
};
template <class T > void f(T)
{
    std::cout<<"f:"<<std::endl;
    
    return ;
}


template <int  I> void f3( int )
{
       std::cout<<"f: int "<<std::endl;
    return ;
}

template <class I> void f1( int )
{
    return ;
}
template <const int *pci> struct X {};

int ai[10];
X<ai> x;
struct Y {};
template < const Y &b > struct Z {};

void g()
{
    f1<int>( 2);
    
    f<int>(2);
  //  f3<int>(1);
}
template <int N>
struct S { int  c[N];};

template <const char *N>
struct S2 {};
template <
 char c,
 int ( &lv)[5],
  int ( *p)(int),
int (S<10>::*c )[10]
>
 struct  complicated
{
    
};

int main()
{
    g();
}
