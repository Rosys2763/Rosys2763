#include<iostream>
using namespace std;
int main(){
    
    int a=0, b=0, n;
    cin>>n;
    for( int i=0; i<n; i++){            //O(N)
        for(int i=0; i<n; i++){         //O(N)  SO O(N^2) for this loops 
            cout<<"Hi1\n";
        }
    }

    for( int i=0; i<n; i++){          //O(N)
        cout<<"hi2\n";
    }
    return 0;
} 