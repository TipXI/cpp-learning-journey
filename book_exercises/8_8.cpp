#include<iostream>

using namespace std;

const int array_size= 10;
int search (const int list[], int listl, int item);

int main()
{
	int number, list[array_size];
	cout<< "Enter "<< array_size<< "integers "<<endl;
	for (int index = 0; index < array_size; index++) 
        cin>> list[index]; 
    cout<< endl; 
    cout<< "Enter the number to be searched "<< endl; 
    cin>> number;  
    int pos = search(list, array_size, number); 
    if (pos!= -1) 
        cout<< number<< " is found at position "<< pos<< endl; 
    else 
        cout<< number<< " is not in the list "<< endl; 
    return 0; 
}

int search(const int list[], int listl, int item)
{
    int loc;
    bool found = false;
    loc = 0;
    while (loc < listl && !found)
        if (list[loc] == item)
            found = true;
        else
        loc++;
        if (found)
            return loc;
        else
            return -1;
}
