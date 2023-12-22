#include <iostream>
#include <stdio.h>
using namespace std;

class Shape
{
    protected:
                double width;
                double hight;

    public :
            void set_the_Shapedata()
            {
                    cout << endl <<"ENTER HIGHT =";
                    cin >> hight;
                    cout << "ENTER WIDTH =";
                    cin >> width;
            }	
};

class Tringle : public Shape
{
	
	public:
            void get_the_Tringledata()
            {
                        cout << endl << "|-------|";
                        cout << endl << "|TRINGLE|" << 1/2*width*hight;
                        cout << endl << "|-------|";
            }           
};

class Rectangle : public Shape
{
	public: 
            void get_the_Rectangledata()
            {
                        cout << endl << "|---------|";
                        cout << endl << "|RECTANGLE|====>  " << width*hight;
                        cout << endl << "|---------|";
            }
};

int main()
{
	
	Tringle o1;
                o1.set_the_Shapedata();
                o1.get_the_Tringledata();

	Rectangle o2;
                o2.set_the_Shapedata();
                o2.get_the_Rectangledata();
};
