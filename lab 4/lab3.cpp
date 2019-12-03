// Q7 - convert uppercase to lowercase
#include <iostream>
using namespace std;

int main()
{
    char upper;
    int offset = 'a' - 'A';
    cout << "Enter an uppercase letter : ";
    cin >> upper;
    cout << "The lowercase letter is " << static_cast<char> (upper + offset) << endl;
	return 0;
}
