#include <iostream>

using namespace std;
int main() 
{
    int i,j,rows,columns;
    
    cout<<"Enter the number of rows\n";
    cin>>rows;

    cout<<"Enter the number of columns\n";
    cin>>columns;

    

    cout<<"\n";
    for(i=1; i<=rows; i++)
    {
        for(j=1; j<=rows-i; j++)
        {
        cout<<"  ";
        }
            for(j=1; j<=columns; j++)
             {
                 cout<<"*";
             }
        cout<<"\n";
    }
    return 0;
}