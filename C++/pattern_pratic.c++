#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a,j;
    cout<<"enter value => ";
    cin>> a ;
    
    for (int i = 0; i <= a; i++)
    {
        for ( j = 0; j <=a-i; j++)
        {
            cout<<"*";
        }
        
        cout<<endl;
    }
    
    return 0;

}