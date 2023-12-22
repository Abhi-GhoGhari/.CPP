#include<iostream>
using namespace std;

class x{
		protected :
				int p;
				int q;
				int r;
};

class y : public x{
				public :
						void setp()
						{
							cout << "ENTER p= ";
							cin >> p;
							cout << "ENTER Q= ";
							cin >> q;
							cout << "ENTER R= ";
							cin >> r;
						}
	
						void getp()
						{
                            cout << endl << "|-------------------";
							cout << endl << "|SUM = " << (p*p*p)+(q*q*q)+(r*r*r);
                            cout << endl << "|-------------------";	
						}
};

int main()
{
	y o1;
	o1.setp();
	o1.getp();	
}