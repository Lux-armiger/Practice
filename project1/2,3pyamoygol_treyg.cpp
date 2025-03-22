#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
int a, b, c, a1, b1 ,c1;

cin >> a;

cin >> b;

cin >> c;
if ((a+b>c) && (b+c>a) && (c+a>b)){
c1 = max({a, b, c});
b1 = min({a, b, c});
a1 = (a + b + c) - (c1 + b1);
if (a1*a1 + b1*b1 == c1*c1){
cout << "YES";}
else
cout << "NO";}
else
cout << "UNDEFINED";
}