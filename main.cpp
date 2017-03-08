#include <iostream>
#include <vector>
#include <algorithm>
#include <stdio.h>
#include <type_traits>
#include <functional>
#include <map>


// primary template
template < class T>  struct ptemplate : std::false_type
{
    
};
template <> struct ptemplate<void>: std::true_type
{
    
};
namespace N{
    template <class T> class X
    {
        
    };
    template <> class X<int> {};
    template <> class X<double> {};
    
    X<float> myx;
}
//http://en.cppreference.com/w/cpp/language/template_specialization

template <class T> class Y : public N::X<double>
{
    
};
class String {};
template <class T> class Array {};
template <class T> void sort(Array<T> &v) {};
void sort(Array<String> &v)
{
    
}
void sort(Array<int> &v)
{
    
}
template <class T> class X1;
template<>  class X1<int> ;
X1<int> *p;
// X1<int> x;


template< class T> struct  XX
{
    int  itype;
    struct B  {};
    
    template <class Y> struct C  {};
};
template <> struct XX<int>
{
    void f(int);
    
};
void XX<int>::f(int )
{
    
}
template <> struct XX<char>
{
    void f();
};
void XX<char>::f()
{
    
}


template<>
template<class Y> struct XX<double>::C
{
    void f();
};

typedef std::function<void(void)>  voidfunc;
using voidfunc1 = std::function<void(void)>;
std::map<std::string ,voidfunc1> mymap;
class myhelper {
    enum  { aa,bb}  mytest;
};
template <class T> class mytest
{
    mytest();
};
template <class T> int mytestfunc( T v1, T v2)
{
    return 1;
}
/*
void inc( int &r)
{
    ++r;
    std::cout<<"inc & i="<<r<<std::endl;
    
}
 */
template <class T, class U>
auto add(T const& t, U const& u) -> decltype(t+u) {
    return t+u;
}

#define EULER_NUMBER 2.71828

template <class T>
T sigmoid(T n) {
    return (1 / (1 + pow(EULER_NUMBER, -n)));
}


void inc( int && r)
{
    ++r;
    std::cout<<"inc && i="<<r<<std::endl;
}
template <class traits>
class basic_mime;

namespace name
{
    template <class T> class MyClass { void func() {} };
}

struct A
{
    template <class T> class B;
  //  template <class T> struct B<T*> {};
 //    template<> struct B<int*> { };
    
};
template <class T>
struct mytest1 : std::false_type
{
    
};
template <> struct mytest1<void> : std::false_type
{
    
};


template <class T>
void  sort( T arr[], int size)
{
    return ;
}
template <> void sort<char>( char arr[], int size)
{
    return 0;
}
template <int n>struct funStruct
{
    enum { val = 2* funStruct<n-1>::val };
};
template <> struct funStruct<0>
{
    enum {num=1};
};


template <typename A,typename C=char > class Aclas
{
public:
    A x;
    C  y;
    
};

template <typename T> class Test
{
private:
    T Val;
public:
    static int count;
    Test()
    {
        count ++;
        
    }
};


template <typename T> void fun( const T&n)
{
    static int i =10;
    std::cout<<i++;
    return ;
}
template <class T> int myfunc( int )
{
    return 1;
}

//void f(auto (auto::*)(auto ));
template< typename T,typename U, typename V> void f( T ( U::*)(V));

// c++14
//template<int N> void f(Array<auto,N>*);
//template<C1 T,C2 U> void g1( const T*,U&);
template < typename T>
void fun(T s)
{
    T a;
    return ;
};
char *p=0;

template<typename T1,
typename T2,
typename T3 = int,
typename T4 = std::string>
class C { /*...*/ };

typedef C<bool, short, long> Phil;

template<class T> T g(T x=&p) { return x;}
template <> int g<int>(int);
template < class T>
//typedef int g<int>(int) gd;

//using gal= typename int g(int);
//auto p = g<int>(int);

//typedef  int g<int>(int)  func1;

using flags = std::ios_base::fmtflags;
//flags l1;
//flags l= std::ios_base::dec;
using func = void (*)( int ,int );
void example(int, int)
{
    
}
func f1 = example;
template <class T>
using ptr = T *;

ptr<int> x;
template <class T>
struct container { using value_type=T;
};
template <typename Container>
void g( const Container &c) { typename Container::value_type n;}
template <typename T>
using Invoke = typename T::type;
template <typename Condition>
using EnableIf=Invoke<std::enable_if<Condition::value>>;
template< typename T, typename = EnableIf<std::is_polymorphic<T>>>
int fpoly_only(T t) { return 1;}
struct S { virtual ~S() {} };




template <class ... Types> struct Tuple {};

struct Printer {
    std::ostream &os;
    Printer( std::ostream &os):os(os)
    {
        
    }
    
};
struct Entity {
    
};
struct  CollisonEvent
{
    const Entity & obj1,obj2;
    CollisonEvent( Entity obj1,Entity obj2)
    :obj1(obj1),obj2(obj2)
    {
        
    }
};
template <class T, int size>
class StaticArray
{
private:
    T m_arrays[size];
public:
     T* getArray()
    {
        return m_arrays;
    }
    T & operator [] (int index )
    {
        return m_arrays[index];
    }
};


template <class T> class Storage
{
private:
    T m_value;
public:
       Storage( T value )
    {
        m_value =value;
    }
    ~Storage()
    {
        
    }
    void print()
    {
        std::cout<<m_value<<std::endl;
    }
    
};

template <>
void Storage<double>::print()
{
    std::cout << std::scientific << m_value << '\n';
}

template <class T >
class Storage<T*>
{
private:
    T* m_value;
    
};

template <class T> void f( const T  & t)
{
    
}
template
void f<int>(int  const&);
template <class t > class extemplate
{
    public:
    extemplate();
    ~extemplate();
};
template <class t >
extemplate<t>::extemplate()
{
    
}
template <class t >
extemplate<t>::~extemplate()
{
    
}
class mytemplate : extemplate<mytemplate>
{
    
};

int main( void )
{
    std::vector<int> v = {7, 5, 16, 8};

    v.push_back( 25 );
    v.push_back( 13 );

    auto it = v.cbegin();
    while ( it != v.cend() ) {
        std::cout << '\t' << *it;
        ++it;
    }
    std::cout << "\n";

    std::sort( v.begin(), v.end(), [](int x, int y){ return x<y; } );

    for( int n : v ) {
        std::cout << '\t' << n;
    }
    std::cout << "\n";

    // getchar();
    inc(1);
    int b=1;
  //  inc(b);
    std::cout<<"b="<<b<<std::endl;
    
    return 0;
}
