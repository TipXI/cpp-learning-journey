#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int main()
{
	int num1,num2,num3,num4,choice1,choice2,choice3,choice4,q=1;
	float numofquestions=0,correct=0,incorrect=0,add=0,correctadd=0,sub=0,correctsub=0,mul=0,correctmul=0,per1,per2,per3,per4,per5;
	char Continue= 'y',a,A,b,B,c,C,d,D,answer,trueanswer;
	srand (time(0));
	while (Continue =='y' || Continue =='Y')
	{
		cout<< "Question "<< q<< endl;
		num1= (rand () % 10)+1;
	    num2= (rand () % 10)+1;
     	num3= (rand () % 3)+1;
     	num4= (rand () % 4)+1;
		switch (num3)
		{
			case 1:
				choice1= (num1+num2)-1;
                choice2= (num1+num2)+3;
                choice3= (num1+num2)+2;
                choice4= (num1+num2)+1;
			    cout<< "What is "<< num1<< " + "<< num2<< " ?"<< endl;
			    switch (num4)
			    { 
			    	case 1:
                        choice1= num1+num2;
			        	trueanswer= 'a';
					break;
					case 2:
					    choice2= num1+num2;
						trueanswer= 'b';						
					break;
					case 3:
					    choice3= num1+num2;
						trueanswer= 'c';												                        
			    	break;
					case 4:
					    choice4= num1+num2;
						trueanswer= 'd';						                        
			    	break;		
				}
				cout<< "a)"<< choice1<< endl;
                cout<< "b)"<< choice2<< endl;
                cout<< "c)"<< choice3<< endl;
                cout<< "d)"<< choice4<< endl;
                cout<< "Enter yout answer: a/b/c/d "<< endl;
                cin>> answer;
			    if (answer == trueanswer)
                {
                    cout<< "Correct";
                    correct++;
                    correctadd++;
                }
	            else
			    { 
                    cout<< "Incorrect";
                    incorrect++;
                }
                add++;
            break;   
            case 2:
		    	cout<< "What is ";
				if (num1< num2)
				{
					cout<< num2<< " - "<< num1<< " ?"<< endl;
            		choice1=num2-num1+3;
            	    choice2=num2-num1+4;
			    	choice3=num2-num1+1;
				    choice4=num2-num1+2;
            		switch (num4)
            		{
            			case 1:
                            choice1= num2-num1;
			             	trueanswer= 'a';			        	
				    	break;
					    case 2:
					        choice2= num2-num1;
			        	    trueanswer= 'b';
					    break;
					    case 3:
					        choice3= num2-num1;
						    trueanswer= 'c';                          
			        	break;
					    case 4:
					        choice4= num2-num1;
						    trueanswer= 'd';							                        
			    	    break;								
					}
					cout<< "a)"<< choice1<< endl;
                    cout<< "b)"<< choice2<< endl;
                    cout<< "c)"<< choice3<< endl;
                    cout<< "d)"<< choice4<< endl;
                    cout<< "Enter yout answer: a/b/c/d  "<< endl;
                    cin>> answer;
                    if (answer == trueanswer)
                    {
                        cout<< "Correct";
                        correct++;
                        correctsub++;
                    }
	                else 
				    {
                        cout<< "Incorrect";
                        incorrect++;
                    }
				}
			    else 
			    {
			    	cout<< num1<< " - "<< num2<< " ?"<< endl;
			    	choice1=num1-num2+3;
			    	choice2=num1-num2+4;
				    choice3=num1-num2+1;
				    choice4=num1-num2+2;
                    switch (num4)
            		{
            			case 1:
                            choice1= num1-num2;
			        	    trueanswer= 'a';
					    break;
					    case 2:
					        choice2= num1-num2;
						    trueanswer= 'b';
					    break;
					    case 3:
					        choice3= num1-num2;
						    trueanswer= 'c';	                        
			    	    break;
					    case 4:
					        choice4= num1-num2;
						    trueanswer= 'd';                      
			    	    break;							
					}
					cout<< "a)"<< choice1<< endl;
                    cout<< "b)"<< choice2<< endl;
                    cout<< "c)"<< choice3<< endl;
                    cout<< "d)"<< choice4<< endl;
                    cout<< "Enter yout answer: a/b/c/d  "<< endl;
                    cin>> answer;
                    if (answer == trueanswer)
                    {
                        cout<< "Correct";
                        correct++;
                        correctsub++;
                    }
	                else 
				    {
                        cout<< "Incorrect";
                        incorrect++;
                    }
				}
				sub++;
            break;       
            case 3:
			    choice1= (num1*num2)-num1;
                choice2= (num1*num2)-num2;
                choice3= (num1*num2)+num1;
                choice4= (num1*num2)+num2;
			    cout<< "What is "<< num1<< " * "<<num2<< " ?"<< endl;
			    switch (num4)
			    {
			    	case 1:
                        choice1= num1*num2;
			        	trueanswer= 'a';			        	
					break;
					case 2:
					    choice2= num1*num2;
						trueanswer= 'b';						
					break;
					case 3:
					    choice3= num1*num2;
						trueanswer= 'c';							                        
			    	break;
					case 4:
					    choice4= num1*num2;
						trueanswer= 'd';						                        
			    	break;
			    }
				cout<< "a)"<< choice1<< endl;
                cout<< "b)"<< choice2<< endl;
                cout<< "c)"<< choice3<< endl;
                cout<< "d)"<< choice4<< endl;
                cout<< "Enter yout answer: a/b/c/d "<< endl;
                cin>> answer;
                if (answer == trueanswer)
                {
                    cout<< "Correct";
                    correct++;
                    correctmul++;
                }
	            else
				{
                    cout<< "Incorrect";
                    incorrect++;
                }		
                mul++;
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
	per3= (correctadd*100)/add;
	per4= (correctsub*100)/sub;
	per5= (correctmul*100)/mul;
	cout<< "You got "<< correct<< " correct answers out of "<< numofquestions<< " which is "<< per1<< " % "<< endl;
	cout<< "You got "<< correctadd<< " addition correct answers out of "<< add<< " which is "<< per3<< " % "<< endl;
	if (per3==100)
	    cout<< "Perfect you got all addtition questions correct "<< endl;
	else if (per3>= 90)
	    cout<< "You are excellant at addtition "<< endl;
	else if (per3>= 75)
	    cout<< "You are very good at addtition "<< endl;
	else if (per3> 50)
	    cout<< "You are good at addtition "<< endl;
	else if (per3<= 50)
	    cout<< "You need to work harder on addtition "<< endl;  
	cout<< "You got "<< correctsub<< " subtraction correct answers out of "<< sub<< " which is "<< per4<< " % "<< endl;
	if (per4==100)
	    cout<< "Perfect you got all subtraction questions correct"<< endl;
	else if (per4>= 90)
	    cout<< "You are excellant at subtraction"<< endl;
	else if (per4>= 75)
	    cout<< "You are very good at subtraction"<< endl;
	else if (per4> 50)
	    cout<< "You are good at subtraction"<< endl;
	else if (per4<= 50)
	    cout<< "You need to work harder on subtraction"<< endl;  
	cout<< "You got "<< correctmul<< " multiplication correct answers out of "<< mul<< " which is "<< per5<< " % "<< endl;
	if (per5==100)
	    cout<< "Perfect you got all multiplication questions correct "<< endl;
	else if (per5>= 90)
	    cout<< "You are excellant at multiplication "<< endl;
	else if (per5>= 75)
	    cout<< "You are very good at multiplication "<< endl;
	else if (per5> 50)
	    cout<< "You are good at multiplication "<< endl;
	else if (per5<= 50)
	    cout<< "You need to work harder on multiplication "<< endl;
    return 0;
}
