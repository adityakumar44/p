#include <iostream>
using namespace std;
int main()
{
    int rows,i,j,k;
    cout<<"Enter the number of rows :";
    cin>>rows;
    cout<<"Here your pyramid pattern\n";
    for(i=1; i<=rows; i++)
    {
        for(j=1; j<=rows-i; j++)
        {
        cout<<" ";
        }
    for(k=1; k<=i; k++){
       cout<<k; 
       cout<<" ";
    }
    cout<<"\n";
    }
    return 0;
}