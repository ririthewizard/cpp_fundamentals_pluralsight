#include <iostream>

int main(){
    int i = 4;

    int const ci = 4;

    i = 5;

    int& ri = i;
    ri = 6;
    std::cout << i << std::endl;
    
}