#include<iostream>
#include<vector>
using namespace std;

int main(){

    int arr[] = {1, 2, 3,3, 4, 5};
    int brr[] = {3,3,4, 5}; 

    vector< int > ans;
    for( int i = 0; i< arr.size; i++)   
    int element =arr[0];

    for(int j = 0; j< brr.size; j++){
        if(element == brr[j]){
            brr[j] = -1;
            ans.push_back(element);

        }
    }
}
// print ans
for(auto value: ans){
    cout<< value <<" ";
}
