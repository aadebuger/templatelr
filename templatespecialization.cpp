
template <class T>
struct S
{
    void print( T) {};
};
template <>
struct S<int>
{
    void print( int ) {};
    
}
int main()
{
}
