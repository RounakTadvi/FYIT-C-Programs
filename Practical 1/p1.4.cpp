#include <iostream.h>
#include <conio.h>

class circle{
    float area , radius;
    public:
    void read();
    void compute();
    void display();
};

void circle :: read(){
    cout << "Enter Radius of Circle: " << endl;
     cin >> radius;
}
void circle :: compute(){
    area = 3.14 * radius * radius;
}
void circle :: display(){
    cout << "Area of Circle: " << area;
}

int main(){
    circle c;
    c.read();
    c.compute();
    c.display();
    getch();
    return 0;
}
