#include <iostream>

int main(){
    setlocale(LC_ALL, "RU");
    using namespace std;
const float P = 3.14;
int D1, D2;
float R1, R2, S1, S2, C;
cout << "Введите диаметр формы 1: ";
cin >> D1;
cout << "D1: "<< D1 <<endl;
cout << "Введите диаметр формы 2: ";
cin >> D2;
cout << "D2: "<< D2 <<endl;
R1 = D1/2;
R2 = D2/2;
S1 = P*R1*R1;
S2 = P*R2*R2;
C = S2/S1;
cout << "Коэффициент: " <<C;
return 0;
}