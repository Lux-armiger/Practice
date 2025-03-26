#include <iostream>
#include <set>

int main() {
    std::set<int> seenNumbers; 
    int number;

    while (std::cin >> number) {
        
        if (seenNumbers.find(number) != seenNumbers.end()) {
            std::cout << "YES" << std::endl;
        } else {
            std::cout << "NO" << std::endl;
            seenNumbers.insert(number);
        }
    }

    return 0;
}