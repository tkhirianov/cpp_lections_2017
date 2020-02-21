#include <iostream>
template<typename T>
T absolute(T x);

int main()
{
    int8_t x8 = -1;
    int16_t x16 = -1;
    int32_t x32 = -1;
    int64_t x64 = -1;
    double xd = -1.1;
    float xf = -1.1;
    std::cout << absolute(x8) << std::endl;
    std::cout << absolute(x16) << std::endl;
    std::cout << absolute(x32) << std::endl;
    std::cout << absolute(x64) << std::endl;
    std::cout << absolute(xd) << std::endl;
    std::cout << absolute(xf) << std::endl;
    std::cout << absolute<int32_t>(-8.3) << std::endl;

    return 0;
}

template<typename T>
T absolute(T x)
{
    return (x < 0)? -x: x;
}
