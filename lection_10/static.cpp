#include<iostream>

class SelfCounter
{
private:
    static int counter;
public:
    SelfCounter()
    { counter++;}

    ~SelfCounter()
    { counter--;}

    static int get_counter()
    {
        return counter;
    }
};

void foo()
{
    SelfCounter a;
    for(int i = 0; i < 3; i++)
    {
        SelfCounter b;
    }
    std::cout << b.get_counter();
}

int main()
{
    std::cout << SelfCounter::get_counter();    // See description
    SelfCounter x;
    foo();
}
