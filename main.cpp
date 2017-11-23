#include <iostream>
#include <cstring>

using namespace std;
Class abc(int a, int b, int c)
{
a=b;
b=c;
c=a;
}
int main()
{
    int age;
    string name, address;
    cout << "Name: ";
    getline(cin,name);
    cout << "Age: ";
    cin >> age;
    cout << "Address: ";
    getline(cin,address)
    cout << "\n" << name << "\t" << age << "\t" << address << endl;
    return 0;
}
