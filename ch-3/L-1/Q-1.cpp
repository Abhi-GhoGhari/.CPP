#include <iostream>
#include <string.h>
using namespace std;

class StudentData
{

private:
    int std_id;
    char std_name[20];
    int std_age;
    char std_course[20];
    char std_city[20];
    char std_email[20];
    char std_college[20];

public:
    void setter()
    {
        cout << "            !!ENTER SUDENT DATA!!";
        cout << endl
             << "ENTER YOUR ID=";
        cin >> this->std_id;
        fflush(stdin);
        cout << "ENTER YOUR NAME=";
        gets(this->std_name);
        cout << "ENTER YOUR AGE=";
        cin >> this->std_age;
        fflush(stdin);
        cout << "ENTER YOUR COURSE=";
        gets(this->std_course);
        cout << "ENTER YOUR CITY=";
        cin >> this->std_city;
        cout << "ENTER YOR EMAIL=";
        cin >> this->std_email;
        fflush(stdin);
        cout << "ENTER YOUR COLLEGE NAME=";
        gets(this->std_college);
    }

    void getter()
    {
        cout << endl
             << " |STUDENT ID\t\t|=" << this->std_id << endl
             << " |STUDENT NAME\t\t|=" << this->std_name << endl
             << " |STUDENT AGE\t\t|=" << this->std_age << endl
             << " |STUDENT COURSE\t|=" << this->std_course << endl
             << " |STUDENT CITY\t\t|=" << this->std_city << endl
             << " |STUDENT EMAIL\t\t|=" << this->std_email << endl
             << " |STUDENT COLLAGE\t|=" << this->std_college << endl;
    }
};

int main()
{

    StudentData std1, std2, std3, std4, std5;
    std1.setter();
    std2.setter();
    std3.setter();
    std4.setter();
    std5.setter();

    std1.getter();
    std2.getter();
    std3.getter();
    std4.getter();
    std5.getter();
}