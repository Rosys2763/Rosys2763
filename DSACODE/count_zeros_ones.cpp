#include<iostream>
using namespace std;
int main(){
//     int [];
//     int size  = 8;
//     int key= 0;
//     int ki= 1;
     
//      bool ans = find(arr, size, key,ki);
//      if (ans == true)
//      cout<<" find "<<endl;

//      else
//      cout<< " Not found "<<endl;

// }
// int arr[]= {1,2,3,4,5,6,7,0,1,0,1}
// int size = 11;
// int c = 0, Q = 0;

// for( int i=0; i<8; i++){

//     if( arr[i]= 0|| arr[i]= 1){
//         c++;
//         Q++;
//         cout<< " count of zero is:"<<c;
//         cout<< " count of one is :"<<Q;
//     }
//  }
// }


//PROGRAM TO COUNT NUMBER OF 2S
int arr[]= { 1,2,3,2,2,4,2};
int size = 7;
int c= 0 ;

for( int i= 0; i<7; i++){
     
     if( arr[i] == 2){
        c++;
     }
}
     cout<<" number of 2s "<< c<< endl;
}