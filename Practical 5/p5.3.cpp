#include <iostream>
#include <conio.h>

using namespace std;

class person {

    char name[30];
    int age;
    public:
    void get_pdata(){

        cout << "Enter the person's name: " << endl;
        cin >> name;
        cout << "Enter the person's ahe: " << endl;
        cin >> age ;
    }
    void put_pdata(){
        cout << "Name of Person: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class student : private person{
    int roll_no;
    float per;
    public:
    void get_sdata(){
        get_pdata();

        cout << "Enter roll number: " << endl;
        cin >> roll_no;
        cout << "Enter percentage: " << endl;
        cin >> per;
    }
    void put_sdata(){
        put_pdata();
        cout << "Roll number : " << roll_no << endl;
        cout << "Percentage : " << per << endl;
    }
};

class faculty : private person{
    char dept_name[30];
    float salary;
    public:
    void get_fdata(){
        get_pdata();
        cout << "Enter dept name: " << endl;
        cin >> dept_name;
        cout << "Enter dept salary: " << endl;
        cin >> salary;
    }
    void put_fdata(){
        put_pdata();
        cout << "Name of dept : " << dept_name << endl;
        cout << "Salary : " << salary << endl;
    }
};

int main(){
    student s;
    faculty f;
    s.get_sdata();
    s.put_sdata();
    f.get_fdata();
    f.put_fdata();
    getch();
    return 0;
}