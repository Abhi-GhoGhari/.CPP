#include <iostream>
#include <string.h>
using namespace std;

class Supermarket
{
private:
    int item_number;
    char item_name[20];
    int quantity;
    double price;
    double discount;

public:
    void setdatsupermarket()
    {
        cout << endl << endl << "ENTER ITEM NUMBER=";
        cin >> this->item_number;
        fflush(stdin);
        cout << "ENTER ITEM NAME=";
        gets(this->item_name);
        cout << "ENTER ITEM QUANTITY=";
        cin >> this->quantity;
        cout << "ENTER ITEM PRICE=";
        cin >> this->price;
        cout << "ENTER ITEM DISCONT=";
        cin >> this->discount;
    }
    void getdatsupermarket()
    {
        cout << endl
             << " |ITEM NUMBER\t\t|=" << this->item_number << endl
             << " |ITEM NAME\t\t|=" << this->item_name << endl
             << " |ITEM QUANTITY\t\t|=" << this->quantity << endl
             << " |ITEM PRICE\t|=" << this->price << endl
             << " |ITEM DISCOUNT\t\t|=" << this->discount << endl;
    }
};

int main()
{
    Supermarket s1,s2,s3;

    s1.setdatsupermarket();
    s2.setdatsupermarket();
    s3.setdatsupermarket();

    s1.getdatsupermarket();
    s2.getdatsupermarket();
    s3.getdatsupermarket();
}