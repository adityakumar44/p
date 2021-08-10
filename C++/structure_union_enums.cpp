 #include <iostream>
 using namespace std;

 typedef struct student
 {
   char name;
     int rollno;
     int marks;
     char favchar;
 }as;

 int main()
 {
     as s1;
     s1.name = 'f';
     s1.rollno = 1;
     s1.marks =65;
     s1.favchar='f';
     cout << s1.name << endl;
     cout << s1.rollno << endl;
     cout << s1.marks << endl;
      cout << s1.favchar << endl;
     return 0;
 }