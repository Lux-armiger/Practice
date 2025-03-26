#include <iostream>
#include <vector>
#include <algorithm>
#include <limits>

int main() {
    int n, k;
    std::cin >> n >> k;

    std::vector<int> firstArray(n);
    std::vector<int> secondArray(k);

    for (int i = 0; i < n; ++i) {
        std::cin >> firstArray[i];
    }

    for (int i = 0; i < k; ++i) {
        std::cin >> secondArray[i];
    }

    for (int i = 0; i < k; ++i) {
        int x = secondArray[i];
        
        auto it = std::lower_bound(firstArray.begin(), firstArray.end(), x);

        int closest = std::numeric_limits<int>::max();
        if (it != firstArray.end()) {
            closest = *it;
        }
        if (it != firstArray.begin()) {
            --it;
            if (std::abs(*it - x) < std::abs(closest - x) || 
                (std::abs(*it - x) == std::abs(closest - x) && *it < closest)) {
                closest = *it;
            }
        }

        std::cout << closest << std::endl;
    }

    return 0;
}