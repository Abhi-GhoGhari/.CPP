#include <iostream>
using namespace std;

class A
{
public:
    virtual void a()
    {
        cout << "Class A" << endl;
    }
};

class B : public virtual A
{
public:
    void b()
    {
        cout << "class B" << endl;
    }
};

class c : public B
{
public:
    void C()
    {
        cout << "CLASS C" << endl;
    }
};

int main()
{
    c obj;

    obj.a();
    obj.b();
    obj.C();

    return 0;
}