#include <iostream>
#include <conio.h>
#include <string.h>
#include <cstdio>
#include <cstring>

using namespace std;

int main(){

    char s1[20] , s2[20];
    cout << "Enter First String" << endl;
    cin >> s1;
    cout << "Enter Second String" << endl;
    cin >> s2;
    if(strcmp(s2,s1) == 0){
        cout << "Strings are same" << endl;
    }
    else
    {
       cout << "Strings are not same" << endl;
    }
    getch();
    return 0;
}