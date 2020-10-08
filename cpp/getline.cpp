#include <string>
#include <iostream>

using namespace std;

int main()
{
    string name;
    cout << "input name: ";
    getline(cin,name); //スペースも読み込む

    cout << "Hello," << name << ".\n";
}