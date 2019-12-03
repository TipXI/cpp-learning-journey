#include<iostream>
#include<fstream>
#include<iomanip>

using namespace std;

int main(){
	int z, x, c, v, b, n;
	
	ifstream inData;
	ofstream outData;
	
	inData.open("AAA.txt");
	outData.open("AA.txt");
	 
	inData >>z >>x >>c >>v >>b >>n;
	outData <<z <<setw(6) <<x <<setw(6) <<c <<setw(6) <<v <<setw(6) <<b <<setw(6) <<n <<endl;
	
	inData.close();
	outData.close();
	
	cout<< "this is \\kdkjhf"<< endl;
	return 0;
}
