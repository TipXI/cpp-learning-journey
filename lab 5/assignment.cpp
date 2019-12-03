#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;
int main()
{
	float num1,num2,choice1,choice2,choice3,choice4,q=1,numofquestions=0,correct=0,incorrect=0,per1,per2;
	int num3,num4;
	char Continue= 'y',a,A,b,B,c,C,d,D,answer,answer1;
	
	srand (time(0));
	while (Continue =='y' || Continue =='Y')
	{
		cout<< "Question "<< q<< endl;
		num1= rand () % 10+1;
	    num2= rand () % 10+1;
     	num3= rand () % 3+1;
     	num4= rand () % 4+1;
		switch (num3)
		{
			case 1:
				choise1= (num1+num2)-1;
                choice2= (num1+num2)+3;
                choice3= (num1+num2)+2;
                choice4= (num1+num2)+1;
			    cout<< "What is "<< num1<< " + "<< num2<< " ?"<< endl;
			    switch (num4)
			    { 
			    	case 1:
                        A= num1+num2;
			        	answer1= 'a';
					break;
					case 2:
					    B= num1+num2;
						answer1= 'b';						
					break;
					case 3:
					    C= num1+num2;
						answer1= 'c';												                        
			    	break;
					case 4:
					    D= num1+num2;
						answer1= 'd';						                        
			    	break;		
				}
				cout<< "a)"<< A<< endl;
                cout<< "b)"<< B<< endl;
                cout<< "c)"<< C<< endl;
                cout<< "d)"<< D<< endl;
                cout<< "Enter yout answer: a/b/c/d "<< endl;
                cin>> answer;
			    if (answer == answer1)
                {
                    cout<< "Correct";
                    correct= correct+1;
                }
	            else
			    { 
                    cout<< "Incorrect";
                    incorrect= incorrect+1;
                }
                break;
            case 2:
		    	cout<< "What is ";
				if (num1< num2)
				{
					cout<< num2<< " - "<< num1<< " ?"<< endl;
            		A=num2-num1+3;
            	    B=num2-num1+4;
			    	C=num2-num1+1;
				    D=num2-num1+2;
            		switch (num4)
            		{
            			case 1:
                        A= num2-num1;
			        	answer1= 'a';
		                cout<< "a)"<< A<< endl;
                        cout<< "b)"<< B<< endl;
                        cout<< "c)"<< C<< endl;
                        cout<< "d)"<< D<< endl;
                        cout<< "Enter yout answer: a/b/c/d  "<< endl;
                        cin>> answer;
                        if (answer == answer1)
                        {
                            cout<< "Correct";
                            correct= correct+1;
                        }
	                    else 
				        {
                            cout<< "Incorrect";
                            incorrect= incorrect+1;
                        }			        	
					break;
					case 2:
					    B= num2-num1;
			        	answer1= 'b';
		                cout<< "a)"<< A<< endl;
                        cout<< "b)"<< B<< endl;
                        cout<< "c)"<< C<< endl;
                        cout<< "d)"<< D<< endl;
                        cout<< "Enter yout answer: a/b/c/d  "<< endl;
                        cin>> answer;
                        if (answer == answer1)
                        {
                            cout<< "Correct";
                            correct= correct+1;
                        }
	                    else 
				        {
                            cout<< "Incorrect";
                            incorrect= incorrect+1;
                        }
					break;
					case 3:
					    C= num2-num1;
						answer1= 'c';	
		                cout<< "a)"<< A<< endl;
                        cout<< "b)"<< B<< endl;
                        cout<< "c)"<< C<< endl;
                        cout<< "d)"<< D<< endl;
                        cout<< "Enter yout answer: a/b/c/d  "<< endl;
                        cin>> answer;
                        if (answer == answer1)
                        {
                            cout<< "Correct";
                            correct= correct+1;
                        }
	                    else 
				        {
                            cout<< "Incorrect";
                            incorrect= incorrect+1;
                        }                        
			    	break;
					case 4:
					    D= num2-num1;
						answer1= 'd';
		                cout<< "a)"<< A<< endl;
                        cout<< "b)"<< B<< endl;
                        cout<< "c)"<< C<< endl;
                        cout<< "d)"<< D<< endl;
                        cout<< "Enter yout answer: a/b/c/d  "<< endl;
                        cin>> answer;
                        if (answer == answer1)
                        {
                            cout<< "Correct";
                            correct= correct+1;
                        }
	                    else 
				        {
                            cout<< "Incorrect";
                            incorrect= incorrect+1;
                        }							                        
			    	break;		
					}
				}
			    else 
			    {
			    	cout<< num1<< " - "<< num2<< " ?"<< endl;
			    	A=num1-num2+3;
			    	B=num1-num2+1;
				    C=num1-num2+2;
				    D=num1-num2+3;
                    switch (num4)
            		{
            			case 1:
                        A= num1-num2;
			        	answer1= 'a';
		                cout<< "a)"<< A<< endl;
                        cout<< "b)"<< B<< endl;
                        cout<< "c)"<< C<< endl;
                        cout<< "d)"<< D<< endl;
                        cout<< "Enter yout answer: a/b/c/d  "<< endl;
                        cin>> answer;
                        if (answer == answer1)
                        {
                            cout<< "Correct";
                            correct= correct+1;
                        }
	                    else 
				        {
                            cout<< "Incorrect";
                            incorrect= incorrect+1;
                        }			        	
					break;
					case 2:
					    B= num1-num2;
						answer1= 'b';
		                cout<< "a)"<< A<< endl;
                        cout<< "b)"<< B<< endl;
                        cout<< "c)"<< C<< endl;
                        cout<< "d)"<< D<< endl;
                        cout<< "Enter yout answer: a/b/c/d  "<< endl;
                        cin>> answer;
                        if (answer == answer1)
                        {
                            cout<< "Correct";
                            correct= correct+1;
                        }
	                    else 
				        {
                            cout<< "Incorrect";
                            incorrect= incorrect+1;
                        }						
					break;
					case 3:
					    C= num1-num2;
						answer1= 'c';
		                cout<< "a)"<< A<< endl;
                        cout<< "b)"<< B<< endl;
                        cout<< "c)"<< C<< endl;
                        cout<< "d)"<< D<< endl;
                        cout<< "Enter yout answer: a/b/c/d  "<< endl;
                        cin>> answer;
                        if (answer == answer1)
                        {
                            cout<< "Correct";
                            correct= correct+1;
                        }
	                    else 
				        {
                            cout<< "Incorrect";
                            incorrect= incorrect+1;
                        }							                        
			    	break;
					case 4:
					    D= num1-num2;
						answer1= 'd';
		                cout<< "a)"<< A<< endl;
                        cout<< "b)"<< B<< endl;
                        cout<< "c)"<< C<< endl;
                        cout<< "d)"<< D<< endl;
                        cout<< "Enter yout answer: a/b/c/d  "<< endl;
                        cin>> answer;
                        if (answer == answer1)
                        {
                            cout<< "Correct";
                            correct= correct+1;
                        }
	                    else 
				        {
                            cout<< "Incorrect";
                            incorrect= incorrect+1;
                        }						                        
			    	break;		
					}
				}
                break;
            case 3:
			    A= (num1*num2)-num1;
                B= (num1*num2)-num2;
                C= (num1*num2)+num2;
                D= (num1*num2)+num1;
			    cout<< "What is "<< num1<< " * "<<num2<< " ?"<< endl;
			    switch (num4)
			    {
			    	case 1:
                        A= num1*num2;
			        	answer1= 'a';
			            cout<< "a)"<< A<< endl;
                        cout<< "b)"<< B<< endl;
                        cout<< "c)"<< C<< endl;
                        cout<< "d)"<< D<< endl;
                        cout<< "Enter yout answer: a/b/c/d "<< endl;
                        cin>> answer;
                        if (answer == answer1)
                        {
                            cout<< "Correct";
                            correct= correct+1;
                        }
	                    else
				        {
                        cout<< "Incorrect";
                        incorrect= incorrect+1;
                        }			        	
					break;
					case 2:
					    B= num1*num2;
						answer1= 'b';
			            cout<< "a)"<< A<< endl;
                        cout<< "b)"<< B<< endl;
                        cout<< "c)"<< C<< endl;
                        cout<< "d)"<< D<< endl;
                        cout<< "Enter yout answer: a/b/c/d "<< endl;
                        cin>> answer;
                        if (answer == answer1)
                        {
                            cout<< "Correct";
                            correct= correct+1;
                        }
	                    else
				        {
                        cout<< "Incorrect";
                        incorrect= incorrect+1;
                        }						
					break;
					case 3:
					    C= num1*num2;
						answer1= 'c';
			            cout<< "a)"<< A<< endl;
                        cout<< "b)"<< B<< endl;
                        cout<< "c)"<< C<< endl;
                        cout<< "d)"<< D<< endl;
                        cout<< "Enter yout answer: a/b/c/d "<< endl;
                        cin>> answer;
                        if (answer == answer1)
                        {
                            cout<< "Correct";
                            correct= correct+1;
                        }
	                    else
				        {
                        cout<< "Incorrect";
                        incorrect= incorrect+1;
                        }							                        
			    	break;
					case 4:
					    D= num1*num2;
						answer1= 'd';	
			            cout<< "a)"<< A<< endl;
                        cout<< "b)"<< B<< endl;
                        cout<< "c)"<< C<< endl;
                        cout<< "d)"<< D<< endl;
                        cout<< "Enter yout answer: a/b/c/d "<< endl;
                        cin>> answer;
                        if (answer == answer1)
                        {
                            cout<< "Correct";
                            correct= correct+1;
                        }
	                    else
				        {
                        cout<< "Incorrect";
                        incorrect= incorrect+1;
                        }					                        
			    	break;		
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
