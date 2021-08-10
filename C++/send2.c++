#include <iostream>
using namespace std;

class Search{
    public:
      int arr[10] = {10,20,30,40,50,60,70,80,90,100};

    int binarySearch(int arr[], int a, int b, int c) {
  
  while (b <= c) {
    int mid = b + (c - b) / 2;

    if (arr[mid] == a)
      return mid;

    if (arr[mid] < a)
      b = mid + 1;

    else
      c = mid - 1;
  }

  return 0;
}
};

int main(void) {
  Search s;
  int x;
  cout<<"Enter the value of x: ";
  cin>>x;
  int num = sizeof(s.arr) / sizeof(s.arr[0]);
  
  int result = s.binarySearch(s.arr, x, 0, num - 1);
  if (result == -1)
    cout<<"Not found"<<endl;
  else
    cout<<"Element is found at index: "<<result;
}