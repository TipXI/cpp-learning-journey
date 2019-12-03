#include<iostream>

using namespace std;

void dividing_2_numbers (float &a, float &b);
int main()
{
    float x, y;
    cout<<"Enter the first number "<< endl;
    cin>> x;
    cout<<"Enter the second number "<< endl;
    cin>> y;
    dividing_2_numbers (x,y);
}
void dividing_2_numbers (float &a, float &b)
{
    if (a!= 0)
        cout<< b/a;
    else
        cout<< "The second number cannot be divided by 0"<< endl;
}
