#include <ctime>
#include <cstdlib>
#include <iostream>
#include <string>
 
using namespace std;
int main()
{
    int i;
    int n;
    int r;
    int score = 0;
    cout << "How many questions would you like to answer? ";
    cin >> n;
    srand(time(0));
    r = rand () % 100 +1;
    string questions[n] = {"what color is the sky? ", "how many sides does a cube have? "};
    char ans [n] = {'a', 'b'};
    if (ans =='b')
    {
        cout << "Correct";
        score++;
    }
    if (ans != 'd')
        cout << "Incorrect";
    cout << "Press the enter key to continue ...";
    cin.get();
    cin.get();
    return 0;
}

