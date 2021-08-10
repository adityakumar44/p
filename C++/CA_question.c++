/*Rahul created a file and he saved some points from his
 notes to that file but while saving the points he added
  some n characters as hints at the end. Now he wants to 
  create a new file in which he wants to copy that hints 
  from file 1 to a new file so he can use that new file for exam preparation.

Write a program to complete the Rahul's task.*/

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string line;
    ifstream ini_file {"original.txt"};
    ofstream out_file {"newcopy.txt"};

    if(ini_file && out_file)
    {
        while(getline(ini_file,line))
        {
            out_file << line << "\n";
        }
    } 
    else 
    {
        cout<<"Cannot read File";
    }

    ini_file.close();
    out_file.close();

    return 0;
}

