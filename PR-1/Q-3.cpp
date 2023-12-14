#include <iostream>
using namespace std;
#include <string>

class Data
{
public:
    string name;
    int age;
};

int main()
{

    Data person;

    person.name = "Person 1";
    person.age = 19;

    cout << "RAJU=" << person.name << "  |RAJU Age=" << person.age << endl;
    person.name = "Person 2";
    person.age = 45;
    cout << "KAJU=" << person.name << "  |KAJU Age=" << person.age << endl;
}