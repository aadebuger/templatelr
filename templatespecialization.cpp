
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
int main()
{
}
