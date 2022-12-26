//  Write a C++ program to swap two numbers with the help of a third variable.


#include<iostream>
using namespace std;
int main(){
    int firstNumber , secondNumber, tempNumber; 
    cout<<"--------------------------------------------\n";
    cout<<"Enter a first number: ";
    cin>>firstNumber;
    cout<<"--------------------------------------------\n";
    cout<<"Enter a second number: ";
    cin>>secondNumber;
    cout<<"--------------------------------------------\n";
    tempNumber = secondNumber;
    secondNumber = firstNumber;
    firstNumber = tempNumber;
    cout<<firstNumber<<endl;
    cout<<secondNumber<<endl;
    cout<<"--------------------------------------------\n";
    return 0 ;
}