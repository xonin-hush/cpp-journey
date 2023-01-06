#include <iostream>
using namespace std;
int main()
{ char x;
cout<< "enter your symbol ";
cin >>x;
switch (x)
{
    case 'a' : cout << "your value is 10"; break;
    case 'A' : cout << "your value is 10"; break;
    case 'b' : cout << "your value is 20"; break;
    case 'B' : cout << "your value is 20"; break;
    default : cout << "your value is 100"; break;
}

}