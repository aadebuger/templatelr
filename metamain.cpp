#include <iostream>
#include <vector>
#include <algorithm>
#include <stdio.h>


template < unsigned long  N> struct
binary
{
    static  unsigned const value = binary<N/10><<1 | N %10 ;
};

template < int N > struct Factoral 
{
    static const int result =  N* Factoral<N-1>::result;
}
template <>  struct Factoral<0>
{
    static const int result = 1;
};
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
