#include <iostream.h>
#include <conio.h>

class student{
    private:
    char name[30];
    int roll_no;
    void getData(){
        cout << "Enter Student name:" << endl;
        cin >> name;
        cout << "Enter Roll Number:" << endl;
        cin >> roll_no;
    }
    public:
    void displayData(){
        getData();
        cout << "Student Name:" << name << endl;
        cout << "Roll Number:" << roll_no << endl;
    }
};

int main(){
    student s;
    s.displayData();
    getch();
    return 0;
}
