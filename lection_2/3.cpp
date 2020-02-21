#include <iostream>

double get_x()
{
    return 5.2;
}


int main()
{
    auto x = get_x();

    std::cout << x << std::endl;

    return 0;
}
