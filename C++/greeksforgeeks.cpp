#include<iostream>
using namespace std;

int sum_element(int arr[],int n)
{
    int sum;
    sum=0;
    for (int i=0; i<n;i++)
    {
        sum = sum + arr[i];
    }
    cout<<sum<<endl;

}

int main(void)
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n;i++)
        cin>>arr[i];
    cout<<sum_element(arr,n)<<endl;
    return 0;
}