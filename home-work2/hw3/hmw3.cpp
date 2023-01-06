#include <iostream>
using namespace std;
int main()
{ int a ,b ,c ,d ,e ,av ,sum ,checked;
cout<< "enter your A ";
cin >>a;
cout<< "enter your B ";
cin >>b;
cout<< "enter your C ";
cin >> c;
cout<< "enter your D ";
cin >> d;
cout<< "enter your E ";
cin >> e;
(sum=a+b+c+d+e);
(av=sum/5);
(checked=av/10);
cout <<"your average is "; cout <<av <<endl;
switch (checked)
{   case 10 : cout << "excellent"; break;
    case 9 : cout << "excellent"; break;
    case 8 : cout << "very good"; break;
    case 7 : cout << "good"; break;
    case 6 : cout << "medium"; break;
    case 5 : cout << "pass"; break;
    case 4 : cout << "fail"; break;
    case 3 : cout << "fail"; break;
    case 2 : cout << "fail"; break;
    case 1 : cout << "fail"; break;
    case 0 : cout << "fail"; break;
    default : cout<<  "error"; break;
}

}