#include <iostream>
#include <string>


struct Student{
    int8_t age;
    int16_t group;
    std::string name;
};

void student_print(const Student &x);

int main()
{
    Student *p_student = new Student;
    p_student->age = 17;
    p_student->group = 649;
    p_student->name = "Vasya Ivanov";

    student_print(*p_student);

    return 0;
}


void student_print(const Student &x)
{
    std::cout << x.name << " " << int(x.age)
              << " " << x.group << std::endl;
//    x->group++;
}
