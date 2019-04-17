#include <iostream>
#include <conio.h>
using namespace std;
class employee {

    private:
    char name[30];
    int age;
    float salary;
    void getInfo() {
         cout << "Enter the employee's name";
         cin >> name;
         cout << "Enter age";
         cin >> age;
         cout << "Enter Salary";
         cin >> salary;
    }

    public:
    void displayInfo(){
        getInfo();    // calling the private method in public method
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main(){

    employee e;
    e.displayInfo();
    getch();
    return 0;
}
