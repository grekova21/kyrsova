#include "Person.h"

Person::Person(const string &c_Full_name, const unsigned int &c_age, const unsigned int &c_height, string basicString)
{
    Full_Name = c_Full_name;
    age = c_age;
    height = c_height;
}

void Person::Info() const
{
    cout << " Введите ФИО: " << Full_Name << endl;
    cout << " Введите свой возраст: "  << age << endl;
    cout << " Введите свой рост: " << height << endl;
    cout << '\n';
}