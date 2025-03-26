#include <iostream>
#include <vector>

template <typename Container>
void Print(const Container& container, const std::string& delimiter) {
    bool first = true;
    for (const auto& element : container) {
        if (!first) {
            std::cout << delimiter;
        }
        std::cout << element;
        first = false;
    }
    std::cout << '\n';
}
/*
int main() {
    std::vector<int> vec = {1, 2, 3, 4, 5};
    std::list<std::string> lst = {"Hello", "World", "!"};

    Print(vec, ", ");
    Print(lst, " ");

    return 0;
}
    */