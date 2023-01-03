#include <iostream>
using namespace std;
int main()
{
    int a, b , c, d, sum, av;
cout <<"enter first no.\n";
cin >> a;
cout <<"enter second no.\n";
cin >> b;
cout <<"enter third no.\n";
cin >> c;
cout <<"enter fourth no.\n";
cin >> d;
sum=a+b+c+d;
av=sum/4;
cout <<"your average is "; cout << av <<endl;
if (av>=50){
    cout << "you passed congrats.";
}
else  cout << "you failed :(\n";
}
