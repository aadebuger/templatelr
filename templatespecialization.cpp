
#include <iostream>
template <class T>
struct S
{
    void print( T) {};
};
template <>
struct S<int>
{
    void print( int ) {};
    
};
template <class T>
struct s_t: std::false_type
{
    
};
template <>
struct s_t<void>: std::true_type
{
    
};
namespace N {
    template <class T> class X {};
    template <> class X<int> {};
}
N::X<int> xx;

template <class T> class MyVector
{
private:
    T *vector_data;
    int size;
    int length;
};
int main()
{
}
