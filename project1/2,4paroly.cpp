#include <iostream>
#include <string>
#include <cctype>

bool IsValidPassword(const std::string & password) {
    // Проверка длины пароля
    if (password.length() < 8 || password.length() > 14) {
        return false;
    }

    // Проверка на наличие символов ASCII от 33 до 126
    for (char c : password) {
        if (c < 33 || c > 126) {
            return false;
        }
    }

    // Проверка классов символов
    bool hasUpper = false, hasLower = false, hasDigit = false, hasSpecial = false;

    for (char c : password) {
        if (std::isupper(c)) {
            hasUpper = true;
        } else if (std::islower(c)) {
            hasLower = true;
        } else if (std::isdigit(c)) {
            hasDigit = true;
        } else {
            hasSpecial = true; // Все, что не является буквой или цифрой
        }
    }

    int classCount = 0;
    if (hasUpper) classCount++;
    if (hasLower) classCount++;
    if (hasDigit) classCount++;
    if (hasSpecial) classCount++;

    // Проверка на наличие не менее трёх классов символов
    return classCount >= 3;
}

int main() {
    std::string password;
    //std::cout << "Введите пароль: ";
    std::getline(std::cin, password);

    if (IsValidPassword(password)) {
        std::cout << "YES" << std::endl;
    } else {
        std::cout << "NO" << std::endl;
    }

    return 0;
}