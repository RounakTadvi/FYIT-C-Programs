#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

void stringlength(){
    char a[20] = "Hello";
    cout << "The String is " << a << endl;
    int len = strlen(a);
    cout << "The Length of String is : " << len << endl;

}

void stringconcat(){
    char s1[20] , s2[20];
    cout << "Enter First String" << endl;
    cin >> s1;
    cout << "Enter Second String" << endl;
    cin >> s2;
    strcat(s1,s2);
    cout << "Concatenated String : " << s1 << endl;
}
int main(){
    
    stringlength();
    stringconcat();
    getch();
    return 0;
}