#include <iostream>
#include <vector>
#include <string>

void TestTextEditor() {
    std::vector<std::string> lines;
    std::string line;

  
    while (std::getline(std::cin, line)) {
        if (line.empty()) {
            break;
        }
        lines.push_back(line);
    }

    std::string clipboard;
    int cursor = 0;

    while (std::getline(std::cin, line)) {
        if (line == "Down") {
            if (cursor < lines.size() - 1) {
                cursor++;
            }
        } else if (line == "Up") {
            if (cursor > 0) {
                cursor--;
            }
        } else if (line == "Ctrl+X") {
            if (cursor < lines.size()) {
                clipboard = lines[cursor];
                lines.erase(lines.begin() + cursor);
                
            }
        } else if (line == "Ctrl+V") {
            if (!clipboard.empty() && cursor < lines.size()) {
                lines.insert(lines.begin() + cursor, clipboard); 
                cursor++;
            }
        }
    }

    for (const auto& l : lines) {
        std::cout << l << std::endl;
    }
    std::cout << std::endl;
}
