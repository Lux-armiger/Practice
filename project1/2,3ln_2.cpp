#include <iostream>
#include <cmath>
using namespace std;
double ln2_series(int n) {
    double total_sum = 0.0;

    for (int k = 0; k < n; ++k) {
        double term = pow(-1, k) / (k + 1);
        total_sum += term;
    }

    return total_sum;
}

int main() {
    int n;
    cin >> n;

    double result = ln2_series(n);
    cout << result << endl;

    return 0;
}