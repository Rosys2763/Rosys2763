#include<iostream>
using namespace std;
int main(){

    int arr[] =  { 1,2,3};

    int sizea = 3;
    int brr[] = {4, 5, 6};
    int sizeb = 3;
    int ans[3];


    for( int i = 0; i< sizea; i++)
    {
        ans = arr[i]+brr[i]; 
    }
    cout<<" sum: "ans;
}

}