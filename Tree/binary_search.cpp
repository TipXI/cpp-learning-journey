#include<iostream>

using namespace std;
int binary_search(int val, int list[], int low, int high);

int main(){
	int i, x=0, val, result, List[x];
	cout<<"Enter the list size: ";
	cin>> x;
	cout<< "Enter the list elements: "<< endl;
	for (i=0; i<x; i++)
	    cin>> List[i];
	    
	cout<< "The list as follow: "<< endl;
	for (i=0; i<x; i++)
	    cout<< List[i]<<" ";
	     
    cout<< endl<< "Enter the element that you want to look for: "<< endl;
    cin>> val;
    result= binary_search(val, List, 0, x-1);
    if (result == -1) 
	    cout << "Element is not present in array"<< endl;
    else
	    cout << "Element is present at index " << result;
    return 0;
}

int binary_search(int val, int list[], int low, int high){
	int mid= (low + high)/2;
	if (val == list[mid])
	    return mid;
	else if (val < list[mid] && low < mid)
	    return binary_search(val, list, low, mid-1);
	else if (val >list[mid] && high > mid)
	    return binary_search(val, list, mid+1, high);
	else 
	    return -1;
}
