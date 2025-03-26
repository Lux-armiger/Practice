#include <iostream>
#include <deque>
#include <string>
#include <sstream>

void MakeTrain() {
    std::deque<int> train;
    std::string command;

    while (std::getline(std::cin, command)) {
        std::istringstream iss(command);
        std::string action;
        int number;

       
        iss >> action;

        if (action == "+left") {
            iss >> number;
            train.push_front(number);
        } else if (action == "+right") {
            iss >> number;
            train.push_back(number);
        } else if (action == "-left") {
            iss >> number;
            for (int i = 0; i < number && !train.empty(); ++i) {
                train.pop_front(); 
            }
        } else if (action == "-right") {
            iss >> number;
            for (int i = 0; i < number && !train.empty(); ++i) {
                train.pop_back();
            }
        }
    }

    
    for (size_t i = 0; i < train.size(); ++i) {
        std::cout << train[i];
        if (i < train.size() - 1) {
            std::cout << " ";
        }
    }
    std::cout << std::endl;
}