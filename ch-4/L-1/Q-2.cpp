#include<iostream>
#include<string.h>
using namespace std;

class P
{
	protected :
		        float temp;

	void Celcs()
    {
		cout << "ENTER TEMPRETURE = ";
		cin >> this->temp;
	}
};

class Q : public P
{
	public:
	        int fer;
	
	void Fehrenhit()
    {
	    fer=()+32;
		cout << endl << "CELCUS CONVERTED TO THE FERNHEIT=  " << fer << endl;
	}
};

class R : public Q
{
	public:
   			int kel;
	
	void Kelvin()
	{	
	    
		cout << endl << "FEHRENHIT CONVERTED INTO KELVIN= " << kel << endl;     	
	}
};

int main(){
	R o;
	o.Fehrenhit();
	o.Kelvin();
}