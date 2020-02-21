#include<iostream>

class Student
{
private:
    std::string name;
    int age;
public:
    Student(std::string x, int a)
    {
        age = a;
        name = x;
    }
    // Setter
    void set_age(int a)
    {
        if(a > 0 && a > age) age = a;
    }

    void aging()
    {
        age++;
        std::cout << "BIRTHDAY!" << std::endl;
    }

    // Getter
    int get_age() const // See description
    {
        return age;
    }
};

int main()
{
    Student a("Vasya", 17);
    // a.age = 17   // Won't work, in private section
    const Student& c = a;
    std::cout << c.get_age();   // Call const method
}
