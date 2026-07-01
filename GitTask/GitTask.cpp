#include <iostream>
#include <string>

using namespace std;

void displayWelcome()
{
    cout << "==========================================" << endl;
    cout << "        Welcome to C++ Programming        " << endl;
    cout << "==========================================" << endl;
}

void printHello(int times)
{
    for (int i = 1; i <= times; i++)
    {
        cout << i << ". Hello, World!" << endl;
    }
}

int main()
{
    string name;
    int age;
    int repeat;

    displayWelcome();

    cout << "\nEnter your name: ";
    getline(cin, name);

    cout << "Enter your age: ";
    cin >> age;

    cout << "\nHello, " << name << "!" << endl;
    cout << "You are " << age << " years old." << endl;

    cout << "\nHow many times do you want to print 'Hello, World!'? ";
    cin >> repeat;

    cout << "\nOutput:" << endl;
    printHello(repeat);

    cout << "\n==========================================" << endl;
    cout << "Thank you for using this C++ program!" << endl;
    cout << "Have a great day!" << endl;
    cout << "==========================================" << endl;

    return 0;
}
