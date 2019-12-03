#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;
int main()
{
	float num1,num2,a,b,c,d,q=1,numofquestions=0,correct=0,incorrect=0,answer,answer1,per1,per2;
	int num3;
	char Continue= 'y';
	
	srand (time(0));
	while (Continue =='y' || Continue =='Y')
	{
		cout<< "Question "<< q<< endl;
		num1= rand () % 10+1;
	    num2= rand () % 10+1;
     	num3= rand () % 3+1;
		switch (num3)
		{
			case 1:
			    a= (num1+num2)-1;
                b= num1+num2;
                c= (num1+num2)+2;
                d= (num1+num2)+1; 
				answer1= b;
			    cout<< "What is "<< num1<< " + "<< num2<< " ?"<< endl;
		        cout<< "a)"<< a<< endl;
                cout<< "b)"<< b<< endl;
                cout<< "c)"<< c<< endl;
                cout<< "d)"<< d<< endl;
                cout<< "Enter yout answer: "<< endl;
                cin>> answer;
    
                if (answer == answer1)
                {
				
                    cout<< "Correct";
                    correct= correct+1;
                }
	            else if (answer!=answer1) 
			    { 
                    cout<< "Incorrect";
                    incorrect= incorrect+1;
                }
                break;
            case 2:	      
		    	cout<< "What is ";
				if (num1< num2)
				{
				
				    a=num2-num1;
			     	b=num2-num1+2;
				    c=num2-num1+1;
				    d=num2-num1+3;
				    answer1=a;
				    cout<< num2<< " - "<< num1<< " ?"<< endl; 
			    }
			    else
				{ 
			        a=num1-num2;
				    b=num1-num2+2;
				    c=num1-num2+1;
				    d=num1-num2+3;
			    	answer1=b;
			        cout<< num1<< " - "<< num2<< " ?"<< endl;
		        }
		        cout<< "a)"<< a<< endl;
                cout<< "b)"<< b<< endl;
                cout<< "c)"<< c<< endl;
                cout<< "d)"<< d<< endl;
                cout<< "Enter yout answer: "<< endl;
                cin>> answer;
        
                if (answer == answer1)
                {
                    cout<< "Correct";
                    correct= correct+1;
                }
	            else if  (answer!=answer1)  
				{
                    cout<< "Incorrect";
                    incorrect= incorrect+1;
                }
                break;
            case 3:
			    a= (num1*num2)-num1;
                b= num1*num2;
                c= (num1*num2)+num2;
                d= (num1*num2)+num1;
                answer1=b;
			    cout<< "What is "<< num1<< " * "<<num2<< " ?"<< endl;
		        cout<< "a)"<< a<< endl;
                cout<< "b)"<< b<< endl;
                cout<< "c)"<< c<< endl;
                cout<< "d)"<< d<< endl;
                cout<< "Enter yout answer: "<< endl;
                cin>> answer;
    
                if (answer == answer1)
                {
                    cout<< "Correct";
                    correct= correct+1;
                }
	            else if (answer!=answer1)
				{
                    cout<< "Incorrect";
                    incorrect= incorrect+1;
                }
                break;
		}
		cout<< " "<< endl;
	    cout<< "Would like to continue? y/n:"<< endl;
	    cin>> Continue;
	    q= q+1;
	    numofquestions= numofquestions+1;
	}
	cout<< "The summery is thet "<< endl;
	per1= (correct*100)/numofquestions;
	per2= (incorrect*100)/numofquestions;
	cout<< "You got "<< correct<< " correct answers out of "<< numofquestions<< endl;
    cout<< "The percentage of correct answers is "<< per1<<"%"<< endl;
    cout<< "The percentage of incorrect answers is "<< per2<<"%"<< endl;
    return 0;
}
