#include <iostream>
#include <string>

const int group_max_size = 10;

struct Student{
    int8_t age;
    int16_t group;
    std::string name;
};

void student_print(const Student &x);

int main()
{
    Student *my_group = new Student[group_max_size];

    for (int k = 0; k < group_max_size; k++)
    {
        my_group[k].age = 17 + k;
        my_group[k].group = 643;
        std::cin >> my_group[k].name;
    }

    for (int k = 0; k < group_max_size; k++)
        student_print(my_group[k]);

    return 0;
}


void student_print(const Student &x)
{
    std::cout << x.name << " " << int(x.age)
              << " " << x.group << std::endl;
//    x->group++;
}
