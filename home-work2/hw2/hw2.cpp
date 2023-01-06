#include <iostream>
using namespace std;
int main()
{ int a ,b ,c ,d ,e ,av ,sum;
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
cout << "your average is "; cout<< av <<endl;
if ((av>=95) && (av<=100))
cout << "excellent";
else
 if ((av>=85) && (av<=94))
 cout << "very good";
 else
  if ((av>=75) && (av<=84))
  cout << "good";
  else
   if ((av>=65) && (av<=74))
   cout << "medium";
   else
    if ((av>=50) && (av<=64))
     cout << "pass";
     else
       if (av<=49)
         cout << "fail";
        else cout<<  "error"

}
