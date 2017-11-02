#include <iostream>

using namespace std;
int main()
{
    float a=0.5, d=0.25;
    int n;
    cout << "n= "; cin >> n;
    cout << "a1: " << a << endl;
    for (int i=2; i<=n; i++)
    {
	a=a+d;
	cout << "a" << i << ": " << a << endl;
    }
    return 0;
}
