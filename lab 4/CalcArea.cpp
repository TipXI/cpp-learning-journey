// Program to calculate area and perimeter

#include <iostream>
using namespace std;

int main()
{
	int length, width, area, perimeter;   // variable declaration
	
	cout << "Enter length  ";
	cin >> length;
	cout << "Enter width  ";
	cin >> width;
	
	area = length * width;
	perimeter = 2 * (length + width);
	
	cout << "Area is " << area << endl;
	cout << "Perimeter is " << perimeter << endl;
	
	return 0;
}
