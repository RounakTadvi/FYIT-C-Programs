#include <iostream>
#include <conio.h>

using namespace std;

class Base {

    public:
    void show(){
        cout << "Show Base class" << endl;
    }
    virtual void dispay(){
        cout << "Display Base class" << endl;
    }
};

class Derived : public Base{

    public:
    void show(){
        cout << "Show Derived class" << endl;
    }
     void dispay(){
        cout << "Display Derived class" << endl;
    }
};

int main(){

    Base b;
    Derived d;
    Base *bptr;
    cout << "Base pointer pointing to Base class" << endl;
    bptr = &b;
    bptr->show();
    bptr->dispay();
    cout << "Base pointer pointing to Derived class" << endl;
    bptr = &d;
    bptr->show();
    bptr->dispay();

    getch();
    return 0;
}