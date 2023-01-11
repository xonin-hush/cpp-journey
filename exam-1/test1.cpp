#include <iostream>
using namespace std;
void main()
{
	int a, b, c;
	cout << "enter a\n";
	cin >> a;
	cout << "enter b\n";
	cin >> b;
	cout << "enter c\n";
	cin >> c;
if ((a==b)&&(a==c))
	cout << "the triangle is equilateral\n";
else 
if((a==b)||(b==c)||(c==a))
cout << "the triangle is isosceles\n";
else
cout << "the triangle is scalene\n";


}
