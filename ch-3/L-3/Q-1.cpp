#include <iostream>
#include <string.h>
using namespace std;

class Compnysystem
{
    int com_id;
    char com_name[20];
    int com_staff_quantity;
    double com_revenue;
    int com_import_raw_diamonds;
    int com_export_diamonds;
    char com_ceo_name[20];

public:
    void Setcompnyldata()
    {
        cout << "ENTER COMPNY ID = ";
        cin >> this->com_id;
        fflush(stdin);
        cout << "ENTER COMPNY NAME = ";
        gets(this->com_name);
        cout << "ENTER COMPNY STAFF QUNTITY = ";
        cin >> this->com_staff_quantity;
        cout << "ENTER COMPNY REVENUE= ";
        cin >> this->com_revenue;
        cout << "ENTER COMPNY IMPORT ROW DIMOND = ";
        cin >> this->com_import_raw_diamonds;
        cout << "ENTER COMPNY EXPORT DIMOND = ";
        cin >> this->com_export_diamonds;
        fflush(stdin);
        cout << "ENTER COMPONY CEO NAME = ";
        gets(this->com_ceo_name);
    }
    void getcomponydata()
    {
        cout << endl
             << " ----------------------------------------|" << endl
             << " |COMPNY ID\t\t|=" << this->com_id << endl
             << " ----------------------------------------|" << endl
             << " |COMPNY NAME\t\t|=" << this->com_name << endl
             << " ----------------------------------------|" << endl
             << " |COMPNY STAFF QUNTITY\t\t|=" << this->com_staff_quantity << endl
             << " ----------------------------------------|" << endl
             << " |COMPNY REVANUE\t\t|=" << this->com_revenue << endl
             << " ----------------------------------------|" << endl
             << " |COMPNY IMPORT ROW DIMOND |=" << this->com_import_raw_diamonds << endl
             << " ----------------------------------------|" << endl
             << " |COMPNY EXPORT DIMOND\t|=" << this->com_export_diamonds << endl
             << " ----------------------------------------|" << endl
             << " |COMPONY CEO NAME\t|=" << this->com_ceo_name << endl
             << " ----------------------------------------|" << endl;
    }
};

int main()
{
    int C;

    cout << "            |-------------------------|";
    cout << endl
         << "            |  !!ENTER COMPNY DATA!!  |";
    cout << endl
         << "            |-------------------------|";
    cout << endl
         << "ENTER NUMBER OF COMPNY= ";
    cin >> C;

    Compnysystem compny[C];
    for (int i = 0; i < C; i++)
    {
        compny[i].Setcompnyldata();
    }

    for (int i = 0; i < C; i++)
    {
        compny[i].getcomponydata();
    }
}