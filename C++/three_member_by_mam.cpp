//greatest of the three classes
#include<iostream>

using namespaces std;
class pqr;
class uvw;
class abc{
int a;
pubic:
void geta(){
cin>>a;
}
friend int get(abc,pqr,uvw);
};
class pqr{
int b;
pubic:
void getb(){
cin>>b;
}
friend int get(abc,pqr,uvw);

};
class uvw{
int c;
public:
void getc(){
cin>>c;
}
friend int get(abc,pqr,uvw);
};
int get(abc A,pqr B,uvw C){
if(A.a>B.b && A.a>C.c){
return a;
}
else
if(B.b>A.a && B.b>C.c){
return b;
}
else
return a;
}
int main()
{
abc A;
pqr B;
uvw C;
A.geta();
B.getb();
C.getc();
get(A,B,C);
return 0;
}
