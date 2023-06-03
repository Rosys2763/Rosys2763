#include <iostream>
using namespace std;
int main(){

    int i, j, sum;
    int row, col;
    cout<<" Enter rows and columns:";
    cin>> row>>col;
    int arr[row][col];
    cout<< " enter elements in an array:";

    for(int i = 0;i<row; i++)
    {
        for(int j = 0; j<col; j++)
        cin>>arr[i][j]<<endl;
    }
}

    int sum = 0;
     for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            sum += arr[i][j];
        }
        cout << sum << endl;
    }
}