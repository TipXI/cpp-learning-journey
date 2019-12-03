 // Saves state names and capitals in a file
 #include <iostream>
 #include <string>
 #include <fstream>
 using namespace std;

 int main()
 {
	string state = "";
	string capital = "";
	 int x;
	 long int y;
	ifstream inFile;
	inFile.open("statecapitals.txt");
	if(!inFile) // inFile == false	
	{
		cout<<"\nSorry, could not open the file";
		return 1;
	}	
	while (!inFile.eof())  // inFile.eof() == false
	{ 
		getline(inFile, state);
		getline(inFile, capital);
	
		cout<<capital<<" is the capital of "
			<<state<<" state."<< endl;
	}
 	
	inFile.close();

	return 0;
}

