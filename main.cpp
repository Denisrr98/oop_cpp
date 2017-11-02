#include <iostream>
#include <cstring>

using namespace std;
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
