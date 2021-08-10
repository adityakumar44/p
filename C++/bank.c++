#include<iostream>
#include<string>
using namespace std;
class bank
{
string customer_name;
int customer_no,dob,balance;
public:
bank(string cname,int cno,int d,int bal)
{
customer_name=cname;
customer_no=cno;
dob=d;
balance=bal;
}
void toshow()
{
cout<<"Name of the customer:-"<<customer_name<<endl;
cout<<"Acc Number of the customer:-"<<customer_no<<endl;
cout<<"Dob of the customer:-"<<dob<<endl;
cout<<"BAlance of the customer:-"<<balance<<endl;

}
~bank()
{
cout<<"Clearing the memory "<<endl;
}
};
int main(){
bank b1("Kuldeep",122,12345,10);
b1.toshow();


return 0;
}