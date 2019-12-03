#include <iostream>
#include <cstring>
using namespace std;

int main()
{
int *p;
char *name;
string *str;
p= new int;
cout<< "*p = "<< *p<< endl;
*p= 28;
cout<< "*p = "<< *p<< endl;
name= new char[5];
cout<< "name = "<< name<< endl;
strcpy(name, "john");
cout<< "name = "<< name<< endl;
str= new string;
cout<< "str = "<< *str<< endl;
*str= "sunnyy day";
cout<< "str = "<< *str<< endl;
}
