#include<bits/stdc++.h>
using namespace std;
class Test
{ public:
int x;
void show()
{
x=10;
cout<<x;
}
};
int main()
{
Test t;
Test *ptr;
ptr=&t; //pointer to object
int Test::*p=&Test::x; //pointer to member
t.show();
ptr->*p=15;
t.*p=15;
return 0;
}

