#include <iostream.h>
#include <conio.h>

class Base {

    public:
    virtual void show() = 0;
};

class Derived : public Base{

    public:
    void show(){
        int a,b;
        cout << "Enter a number" << endl;
        cin >> a;
        cout << "Enter another number" << endl;
        cin >> b;

        if(a > b){
            cout << a << " is Greater";
        }else{
            cout << b << " is Smaller";   
        }
    }
};

int main(){

    Base *bptr;
    Derived d;
    bptr = &d;
    bptr->show();
    getch();
    return 0;
}
