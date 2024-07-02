#include <iostream>
#include <string>

using std::endl;
using std::string;

template <class T>
T max(T const& t1, T const& t2)
{
    return t1 < t2 ? t2: t1;
}

int main()
{
    std::cout << max(33, 44);
}