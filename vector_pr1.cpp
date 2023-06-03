#include<iostream>
#include<vector>
using namespace std;

int main(){

    //create vector
    vector< char >arr;

    int ans = ( sizeof(arr)/ sizeof( char));
    cout << ans << endl;

    cout << arr.size() << endl;
    cout<< arr.capacity() << endl;  //example there are 8 block  nd 4 memory are filled as 1, 2 ,3 ,4 then rest 8 is called AS CAPACITY and 4 number is counted under size
    
    //insert
    arr.push_back(5);
    arr.push_back(7);
    
    //print
    for( int i= 0; i< arr.size(); i++)
    cout << arr[i] << " ";
}
cout << endl; 

//REMOVE ELEMENT 
arr.pop_back();

    for( int i= 0; i< arr..size(); i++){
    cout << arr[i] << " ";
    }
    cout << endl;

    //ANOTHER VECTOR CREATED
    vector< int >brr[10 , 6];
    cout << "Size of b :"<< brr.size() << endl;
    cout << " Capacity of b "<< brr.capacity() << endl;

    for( int i = 0; i < brr.size(); i++){
      cout << brr[i] << endl;
    }
    cout << endl;

    vector< int >drr; 
    cout<<" vector crr is empty or not"<<crr.empty()<< endl;

    return 0;

//capaacity tells number of an eleemnt in an array 
//size tells numbers of element in an array
