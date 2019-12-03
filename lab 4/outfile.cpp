 // Saves state names and capitals in a file
 #include <iostream>
 #include <string>
 #include <fstream>
 using namespace std;

 int main()
 {
 string state = "";
 string capital = "";

 // Create file object and open the file
 ofstream outFile;
 outFile.open("statecapitals.txt");

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

return 0;
}

