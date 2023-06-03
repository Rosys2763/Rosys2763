#include<iostream>
using namespace std;
char getgrade(int marks)
{
    switch(marks/10)
    {
        case 9 : return 'A';
        break;
        case 8 : return 'B';
        break;
        case 7 : return 'C';
        break;
        case 6 : return 'D';
        break;
        default: return 'E'; 
    }
}
int main()
{
    for(int i=1;i<=100;i++)
    {
        char ans = getgrade(i);
        cout<<"grade for marks="<< i << ans << endl;
    }
    return 0;
}