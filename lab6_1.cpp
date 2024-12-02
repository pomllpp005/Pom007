#include<iostream>
using namespace std;

int main(){
    int integer[]={};
    int i=0;
    int x;
    int y=0;
    while(x != 0){
    cout << "Enter an integer: ";
    cin >> x;
    integer[i]=x;
  
    i++;
    }
   
    cout << "#Even numbers = ";
    cout << "#Odd numbers = ";
    return 0;
}