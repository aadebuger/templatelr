#include <cmath>
#include <functional>
#include <iostream>
#include <map>
int main()
{
    std::cout<<std::endl;
    
    std::map< const char , std::function<double( double,double)>> dispTable{{
        '+',[] (double a, double b) { return a+b; }
    }
    };
}
