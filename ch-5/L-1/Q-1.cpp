#include<iostream>
using namespace std;
class Implementing
{
	public: 
            void operations(int P,int Q)
            {
                cout <<endl << "|--------|";
                cout <<endl << "|DIVISION|= " << (P/Q);
                cout <<endl<< "|--------|";
            }
            
            void operations(int P,int Q,int R)
            {
                cout <<endl <<endl << "|------------|";
                cout <<endl        << "|SUBSTECTTION|= " << (P-Q-R);
                cout <<endl        << "|------------|";
            }
            
            void operations(int P,int Q, int R,int S)
            {
                cout <<endl <<endl << "|--------------|";
                cout <<endl        << "|MULTIPLICATION|= " << (P*Q*R*S);
                cout <<endl        << "|--------------|";
            }
            
            void operations(int P,int Q,int R,int S,int T)
            {
                cout <<endl <<endl << "|--------|";
                cout << endl       << "|ADDITION|= " << (P+Q+R+S+T);
                cout <<endl        << "|--------|";
            }
};

main()
{
	Implementing P1;
	
	P1.operations(85,14);	
	P1.operations(50,40,30);
	P1.operations(10,20,30,40);
	P1.operations(9,8,7,6,5);
}