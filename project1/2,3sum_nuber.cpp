#include<iostream>
using namespace std;
int a,b,n,sum,i;

int main() {
int arr[10];
cin >> a;
for (int i=9; i>-1; i--) {
n = a%10;
arr[i] = n;
a = a/10;
}
for (int i = 0; i<10; i++){
sum += arr[i];
}
cout << sum;
}