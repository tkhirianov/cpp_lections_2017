#include <iostream>


int main()
{
    bool A, B;

    A = false;
    B = true;

    std::cout << (not A) << std::endl;
    std::cout << (A and B) << std::endl;
    std::cout << (A or B) << std::endl;

    return 0;
}
