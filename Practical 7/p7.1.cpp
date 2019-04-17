#include <iostream.h>
#include <conio.h>
#include <string.h>

void stringlength(){
    char a[20] = "Hello";
    cout << "The String is " << a << endl;
    int len = strlen(a);
    cout << "The Length of String is : " << len;
    
}

int main(){
    
    stringlength();
    getch();
    return 0;
}
