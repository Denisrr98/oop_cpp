#include <iostream>
using namespace std;
int main()
{
    int a,b;
    cout << "a= "; cin >> a;
    cout << "b= "; cin >> b;
    int i=a;
    for (int i=a; i<=b; i++)
    cout << i*i << "\t";
    return 0;
}
