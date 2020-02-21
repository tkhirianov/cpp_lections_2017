#include<iostream>

struct Student
{
  int age;
  std::string name;

  void init(int _age, const std::string& _name)
  {
      this->name = _name;
      // Alternatively, we can write
      name = _name;
      this->age = _age;
  }

  void aging()
  {
      age++;
      std::cout << name << ": I'm now " << age << " years old" << "\n";
  }

  void print() const    // We cannot change the object itself
  {
      std::cout << name << "-" << age << "\n";
  }
};

int main()
{
    Student a, b;
    //a.init(17, "Vasya");	// Won't work
    // "Vasya" is char*[], but not std::string
    a.init(17, std::string("Vasya"));
    b = a;  // Dangerous!
    a.print();
    b.print();
}
