#include<iostream>
using namespace std;

class Number
{
	protected: 
		        int A;
		
	public :
            void set_the_numberdata()
            {
                cout << endl << endl << "ENTER ANY NUMBER= ";
                cin >> A; 
            }
};

class Squar : public Number
{	
	public :
            void get_the_Squardtda()
            {
                cout << endl << "|----------------------------------------------";
                cout << endl << "|ANS. THE SQUARE OF THE NUMBER ENTERED BY YOU= " << A*A << endl;
                cout  << "|----------------------------------------------";
            }
};

class Cube : public Number
{	
	public :
            void get_the_Cubedata()
            {
                cout << endl << "|----------------------------------------------";
                cout << endl <<  "ANS. THE CUBE OF THE NUMBER ENTERED BY YOU= " << A*A*A << endl;
                cout  << "|----------------------------------------------";
            }
};

main()
{
	
	Squar o1;
	Cube o2;
	
	o1.set_the_numberdata();
	o1.get_the_Squardtda();
	
	o2.set_the_numberdata();
	o2.get_the_Cubedata();
}