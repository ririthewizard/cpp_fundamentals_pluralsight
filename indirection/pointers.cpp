#include <iostream>

int main(){

    //references reference the original variable and changes made to the reference are reflected in the original variable as well.
    int b = 5;
    std::cout << "b is " << b << std::endl;

    int& rB = b;
    rB = 9;
    std::cout << "b is " << b << std::endl;

    //pointers
    int* pB = &b;
    *pB = 4;
    std::cout << "b is " << b << std::endl;


    int c = 100;
    pB = &c;
    (*pB)++;
    std::cout << "b is " << b << ", *pB " << *pB << std::endl;
}