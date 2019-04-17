#include <iostream>
#include <conio.h>

using namespace std;

class Demo{
    private:
    int n;
    void readNo(){
        cout << "Enter the number" << endl;
        cin >> n;
    }
    public:
    void factorial(){
        cout << "Factorial: " << endl;
        readNo();
        int i, fact = 1;
        for(i = 1; i <= n; i++){
            fact*= i;
        }
        cout << "Factorial of entered Number is " << fact << endl;
    }
    int reverseNo(){

        readNo();
        int temp = n;
        int rev = 0;
        int rem;

        while(temp != 0){
           
           rem = temp % 10;
           rev = (rev * 10) + rem;
           temp = temp / 10;
        }
        cout << "Reverse of Number: " << rev << endl;
        return rev;
    }
    void isPalindrome(){
        
        int p = reverseNo();
        cout << "Palindrome: " << endl;
        if(n == p){
            cout << "The Number is Palindrome" << endl;
        }else{
            cout << "The Number is not Palindrome" << endl;
        }

    }
    void isArmstrong(){
        cout << "Armstrong:" << endl;
        readNo();
        int rem;
        int temp = n;
        int sum = 0;
        while(temp != 0){
            rem = temp % 10;
            sum = sum + (rem * rem * rem);
            temp = temp / 10; 
        }
        if (sum == n){
            cout << "Entered Number is a Armstrong number ";
        }else{
            cout << "Not a Armstrong number ";
        }

    }
};

int main(){

    Demo d;
    d.factorial();
    d.reverseNo();
    d.isPalindrome();
    getch();
    return 0;
}