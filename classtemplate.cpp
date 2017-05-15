namespace N {
    template <class T> class Y { void mf() {}};
    
}
using N::Y;
template class N::Y<char *>;
template void N::Y<double>::mf();

template <class T> struct Z
{
    void f() {};
    void g();
};
template struct Z<double>;
Z<int> z1;
Z<char *> z2;

template <class T> class X;
// error
//X<char> Xchar;

int main()
{
}
