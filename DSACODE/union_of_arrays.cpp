#include<iostream>
#include<vector>

using namespace std;
int main(){

    int arr[] = {1, 3, 5, 7};
    int sizea = 4;
    
    int brr[] = {2, 4};
    int sizeb = 2;

    vector<int>ans;


    for(int i= 0; i<sizea; i++){
        ans.push_back(arr[i]);
    }

    for( int i= 0; i<sizeb; i++){
        ans.push_back(brr[i]);
    }
      cout<<" printing union of elements";
      for( int i= 0; i<ans.size(); i++){
        cout<< ans[i] << " ";
      }


    
    }
