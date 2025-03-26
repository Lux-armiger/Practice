#include <iostream>
#include <vector>
#include <string>

int main() {
    int N;
    std::cin >> N;
    std::cin.ignore();

    std::vector<std::string> top;
    std::vector<std::string> bottom; 

 
    for (int i = 0; i < N; ++i) {
        std::string name, position;
        std::getline(std::cin, name, ' ');
        std::getline(std::cin, position);

        if (position == "top") {
            top.push_back(name);
        } else if (position == "bottom") {
            bottom.push_back(name);
        }
    }

  
    std::vector<std::string> all;
    all.insert(all.end(), top.rbegin(), top.rend());
    all.insert(all.end(), bottom.begin(), bottom.end());

    int M;
    std::cin >> M;


    for (int i = 0; i < M; ++i) {
        int x;
        std::cin >> x;
        std::cout << all[x - 1] << std::endl;
    }

    return 0;
}