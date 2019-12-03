#include <iostream>
#include <string>
#include <fstream>
using namespace std;

 int main()
 {
 string state = "";
 string capital = "";
 char ch;

 // Create file object and open the file
 ofstream outFile;
 ifstream inFile;
 
 /* outFile.open("statecapitals.txt",ios::app);

 // Get state name
 cout << "Enter a state name (X to stop): ";
 getline(cin, state);

 while (state != "X")
 {
   // Get the capital
   cout << "Enter the capital: ";
   getline(cin, capital);

   // Write the record to the file
   outFile << state << "#" << capital << endl;

   // Get another state name
    cout << "Enter a state name (X to stop): ";
    getline(cin, state);
  } // end while
  
 // Close the file
 outFile.close();
*/

 inFile.open("statecapitals.txt");
 
 if(!inFile)
 {
 	cout << "Error: File cannot be opened";
    return 1;
 }

 
 //getline(inFile,state,'#');
 //getline(inFile,capital);
 while(!inFile.eof())
 {	 
     getline(inFile,state,'#');
     getline(inFile,capital);
 	 cout << capital << " is the capital of " << state << " state.\n";
 }
 
 inFile.close();	
 	

 return 0;
}
