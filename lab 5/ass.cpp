#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;
int main()
{
	int num1,num2,a,b,c,d,answer,answer1;
	
	srand(time(0));
    num1=rand()%10+1;
    num2=rand()%10+1;
    
    a= (num1*num2)-num2;
    b= num1*num2;
    c= (num1*num2)+num2+num2;
    d= (num1*num2)+num1;
    answer1= b;
    
    cout << "what is the multiplication " << num1<<"*"<< num2 << endl;
    cout << "a)"<<a <<endl;
    cout << "b)"<<b <<endl;
    cout << "c)"<<c <<endl;
    cout << "d)"<<d <<endl;
    cout << "answer is "<<endl;
	cin>> answer;

	if (answer == answer1)
        cout << "correct answer ";
    else if (answer!=answer1)
        cout << "wrong answer";
        
	return 0;
}

