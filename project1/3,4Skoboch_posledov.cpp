#include <iostream>
#include <stack>
#include <string>

bool isValid(const std::string& s) {
    std::stack<char> stack;

    for (char c : s) {
        if (c == '(' || c == '[' || c == '{') {
            stack.push(c);
        } else {
            if (stack.empty()) {
                return false;
            }
            char top = stack.top();
            stack.pop();

        
            if ((c == ')' && top != '(') ||
                (c == ']' && top != '[') ||
                (c == '}' && top != '{')) {
                return false;
            }
        }
    }

    return stack.empty();
}

int main() {
    std::string input;
    std::cin >> input;

    if (isValid(input)) {
        std::cout << "YES" << std::endl;
    } else {
        std::cout << "NO" << std::endl;
    }

    return 0;
}