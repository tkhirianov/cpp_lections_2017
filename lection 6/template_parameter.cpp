#include <iostream>

template<int number>
void self_counter()
{
    static int32_t counter = 0;
    counter++;
    std::cout << "called (number=" << number
              <<") " << counter << " times\n";
}

int main()
{
    self_counter<1>();
    self_counter<1>();
    self_counter<1>();
    self_counter<2>();
    self_counter<2>();
//    self_counter();

    return 0;
}
