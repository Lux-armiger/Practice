
#include <iostream>
using namespace std;
bool v(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}
int main() {
    int month, year;
    cin >> month >> year;
    int days;
    switch (month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            days = 31;
            break;
        case 4: case 6: case 9: case 11:
            days = 30;
            break;
        case 2:
            days = v(year) ? 29 : 28;
            break;
    }
    cout << days << endl;
    return 0;
}