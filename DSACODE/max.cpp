#include<iostream>
using namespace std;
int findmax(int num1, int num2, int num3){
    if(num1 > num2 && num1 > num3){
        return num1;
    }
    else if(num2 > num1 && num2 > num3){
        return num2;
    }
    else{
        return num3;
    }
}
int main()
 {
        int num1,num2,num3;
        cout<<"Enter the value of num1"<<endl;
        cin>> num1;
        cout<<"enter the value of  num2 "<< endl;
        cin>> num2;
        cout<< "enter the value of num3 "<< endl;
        cin >> num3;
        int comp= findmax(num1,num2,num3);
        cout<<" 3 numbercomp is: " <<comp;
 }

