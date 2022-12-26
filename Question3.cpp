//  Write a C++ program to take length and breadth of a rectangle and print its area.

#include<iostream>
using namespace std;
int main(){
    int length , breadth, area; 
    cout<<"--------------------------------------------\n";
    cout<<"Enter a length: ";
    cin>>length;
    cout<<"--------------------------------------------\n";
    cout<<"Enter a breadth: ";
    cin>>breadth;
    cout<<"--------------------------------------------\n";
    cout<<"The area of rectangle is "<< length*breadth<<endl;
    cout<<"--------------------------------------------\n";
    return 0 ;
}