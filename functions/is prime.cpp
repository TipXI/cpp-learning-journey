#include<iostream>
using namespace std;

int main ()
{
	int x,y;
	cout<< "enter a number: ";
	cin>>x;
    if (x==1)
        cout<< "smalles prime is 2";
    else{
        if (x>=2){
	        for(y=2;y<x;y++){
    	        if(x%y== 0){
		    	    cout<< x<<" is not a prime";
    	            break;
             	}	
        	}
        }
        else 
            cout<< x<<" is a prime";	
	}
    
    
	return 0;
} 

