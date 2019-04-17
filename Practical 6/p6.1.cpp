#include <iostream>
#include <conio.h>

using namespace std;

class Base{

    protected:
    int a,b;

    public:
    void read(){
        cout << "Enter value of a: " << endl;
        cin >> a;
        cout << "Enter value of b: " << endl;
        cin >> b;
    }
    
    void display(){
        cout << "The value of a is " << a << endl;;
         cout << "The value of b is " << b << endl;
    }
};

class Derived : public Base{
    protected:
    int c,d;
    public:
    void read(){
        cout << "Enter the values of a ,b , c , d" << endl;
        cin >> a >> b >> c >> d;
     }
     void display(){
         cout << "The values of four variaibles are " << a << b << c << d << endl;
     }
};

void main(){
    Derived d;
    d.read();
    d.display();
    getch();
}