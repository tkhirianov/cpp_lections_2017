#include <iostream>

int8_t absolute(int8_t x);
int16_t absolute(int16_t x);
int32_t absolute(int32_t x);

 int64_t absolute(int64_t x);
/*double absolute(double x);
float absolute(float x);
*/
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

    return 0;
}


int8_t absolute(int8_t x)
{
    std::cout << "8"<< std::endl;
    return (x < 0)? -x: x;
}

int16_t absolute(int16_t x)
{
    std::cout << "16"<< std::endl;
    return (x < 0)? -x: x;
}
int32_t absolute(int32_t x)
{
    std::cout << "32"<< std::endl;
    return (x < 0)? -x: x;
}
int64_t absolute(int64_t x)
{
    std::cout << "64"<< std::endl;
    return (x < 0)? -x: x;
}
/*double absolute(double x)
{
    std::cout << "d"<< std::endl;
    return (x < 0.)? -x: x;
}
float absolute(float x)
{
    std::cout << "f"<< std::endl;
    return (x < 0.)? -x: x;
}
*/
