#include <iostream>
using namespace std;

int main()
{
    char name[5];
    cout << "ENTER NAME= ";
    cin >> name;
    for (int i = 0; i < 5; i++)
    {
        if (name[i] >= 65 && name[i] <= 90)
        {
            name[i] = name[i] + 32;
        }
        else if (name[i] >= 97 && name[i] <= 122)
        {
            name[i] -= 32;
        }
    }
    cout << "TOGEEL CASE= " << name;
}