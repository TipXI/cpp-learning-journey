#include <iostream> 

using namespace std;
 
const double NUM = 3.5; 
int temp; 
void func(int, double&, char);

int main() 
{
    int num; 
    double one; 
    char ch; 
    func(num, one, ch); 
    cout << num << " " << one << " " << ch << endl;
    func(16, one, '%'); 
    cout << num << " " << one << " " << ch << endl; 
    return 0;
} 
void func(int first, double& second, char ch) 
{
    int num; 
    double y; 
    int u; 
    num = 2 * first; 
    y = second * first; 
    u = static_cast<int> (ch); 
    second = num + y * u;
}
