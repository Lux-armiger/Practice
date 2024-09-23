#include <iostream>

int main (){
    setlocale(LC_ALL, "RU");
    using namespace std;
    int f1,f2;
    int s1, s2, s3;
    const float P = 3.14;
    float a, b, r, d, k1, k11, k2, S1, S2, proportion;
    cout << "Введите тип изначальной формы: прямоугольная - 1, круглая - 2, квадратная - 3\n";
    cin >> f1;
    cout << "f1: " <<f1 <<endl;
    cout << "Введите тип конечной формы: прямоугольная - 1, круглая - 2, квадратная - 3\n";
    cin >> f2;
    cout << "f1: " <<f2 <<endl;
if (f1 == 1 ) {
    cout << "Тип формы: Прямоугольник \n";
    cout << "Введите сторону а: \n";
    cin >> a;
    cout << "Введите сторону b: \n";
    cin >> b;
    s1 = a*b;
    cout << "Площадь прямоугольника: " << s1 <<endl;
    S1 = s1;
    }
else if (f1 == 2 ) {
    f1 = 2;
    cout << "Тип формы: Круг \n";
    cout << "Введите диаметр D: ";
    cin >> d;
    r = d/2;
    cout << "Радиус: " << r <<endl;
    s2 = P*r*r;
    cout << "Площадь круга: " << s2 << endl;
    S1 = s2;
    }
else if (f1 == 3 ) {
    f1 = 3;
    cout << "Тип формы: Квадрат \n";
    cout << "Введите a: ";
    cin >> a;
    k2 = a;
    s3 = a*a;
    cout << "Площадь квадрата: " << s3 << endl;
    S1 = s3;
    }
if (f2 == 1 ) {
    cout << "Тип формы: Прямоугольник \n";
    cout << "Введите сторону а: \n";
    cin >> a;
    k1 = a;
    cout << "Введите сторону b: \n";
    cin >> b;
    k11 = b;
    s1 = a*b;
    cout << "Площадь прямоугольника: " << s1 << endl;
    S2 = s1;
    }
else if (f2 == 2 ) {
    f1 = 2;
    cout << "Тип формы: Круг \n";
    cout << "Введите диаметр D: ";
    cin >> d;
    r = d/2;
    cout << "Радиус: " << r <<endl;
    s2 = P*r*r;
    cout << "Площадь круга: " << s2 << endl;
    S2 =s2;
    }
else if (f2 == 3 ) {
    f1 = 3;
    cout << "Тип формы: Квадрат \n";
    cout << "Введите a: ";
    cin >> a;
    k2 = a;
    s3 = a*a;
    cout << "Площадь квадрата: " << s3 << endl;
    S2 = s3;
    }
proportion = S2/S1;
cout << "Пропорция: " << proportion;
}