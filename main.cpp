#include <iostream>
#include <vector>
#include <algorithm>
#include <stdio.h>
#include <type_traits>




//void f(auto (auto::*)(auto ));
template< typename T,typename U, typename V> void f( T ( U::*)(V));

using flags = std::ios_base::fmtflags;
flags l1;
flags l= std::ios_base::dec;
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
    return 0;
}
