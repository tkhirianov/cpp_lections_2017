#include <iostream>

int main()
{
    int i;
    short int si;
    long int li;
    long long int lli;

    unsigned long long int ulli;

    int8_t x8;
    int16_t x16;
    int32_t x32;
    int64_t x64;

    std::cout << sizeof(i) << std::endl;
    std::cout << sizeof(li) << std::endl;
    std::cout << sizeof(lli) << std::endl;
    std::cout << sizeof(ulli) << std::endl;
    std::cout << sizeof(si) << std::endl;
    std::cout << sizeof(x8) << std::endl;
    std::cout << sizeof(x16) << std::endl;
    std::cout << sizeof(x32) << std::endl;
    std::cout << sizeof(x64) << std::endl;

}
