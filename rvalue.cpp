#include <iostream>
using namespace std;
string getName()
{
    return "hello";
}
template <class T>
void swap( T &a, T &b)
{
    T tmp(a);
    a=b;
    b=tmp;
}
template <class T>
void swap1(T &a, T &b)
{
    T tmp( std::move(a));
    a=std::move(b);
    b= std::move( tmp );
    
}
int main()
{
    const int &m1=1 ;
    int &&m=1;
    string name = getName();
     const string &name1 = getName();
    string &&name2 = getName();
    
    string testname ="hello";
   // string && ref1 = testname;
    string && ref2  = move( testname);
    
    
}
