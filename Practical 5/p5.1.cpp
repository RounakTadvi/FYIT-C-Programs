#include <iostream>
#include <conio.h>

using namespace std;

class Base {
    private:
    int a;
    public:
    int b;
    void get_ab(){
        a = 5;
        b = 10;
    }
    int get_a(){
        return(a);
    }
    void show_a(){
        cout << "The value of a is " << a << endl;
         
    }
};

class Derived : public Base{
    private:
    int c;
    public:
    void mul(){
        c = b * get_a();
    }
    void display(){
        cout << "The value of a is " << get_a() << endl;
        cout << "The value of b is " << b << endl;
        cout << " a * b = " << c << endl;
    }
};

int main(){
    Derived d;
    d.get_ab();
    d.get_a();
    d.show_a();
    d.mul();
    d.display();
    d.b = 20;
    d.mul();
    d.display();
    getch();
    return 0;
}