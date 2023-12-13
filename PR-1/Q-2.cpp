#include <iostream>
using namespace std;

class time
{
public:
    int hour;
    int minute;
    int second;
    int n;
};

int main()
{
    time obj;

    cout << "ENTER SECOND= ";
    cin >> obj.n;

    obj.hour = obj.n / 3600;
    obj.minute = (obj.n % 3600) / 60;
    obj.second = obj.n % 60;

    cout << "TIME IN HH:MM:SS FORMATE=  " << obj.hour << "= " << obj.minute << "= " << obj.second;
}