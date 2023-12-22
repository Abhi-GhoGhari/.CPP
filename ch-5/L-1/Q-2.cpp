#include<iostream>
using namespace std;

class Cricket
{
	
	protected: 
		        int M;
};

class TestMatch : public Cricket
{
	public: 
            void get_Total_over_data(int M)
            {
                cout <<endl << "|----------------------|";
                cout <<endl << "|TEST-MATCH OVER'S= " << M;
                cout <<endl << "|----------------------|";
            }
};

class T20Match : public Cricket
{
	public: 
            void get_Total_over_data(int M)
            {
                cout << endl <<endl <<endl << "|--------------------|";
                cout <<endl                << "|T20-MATCH OVER'S= " << M;
                cout <<endl                << "|--------------------|";
            }
};

int main()
{

	TestMatch o1;
	T20Match o2;
	
	o1.get_Total_over_data(200);	
	o2.get_Total_over_data(20);
}