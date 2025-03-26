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
    int selectionStart = -1;
    int selectionEnd = -1;
    bool isShiftPressed = false;

  
    while (std::getline(std::cin, line)) {
        if (line == "Down") {
            if (cursor < lines.size() - 1) {
                if (isShiftPressed) {
                    selectionEnd = cursor + 1;
                }
                cursor++;
            }
        } else if (line == "Up") {
            if (cursor > 0) {
                if (isShiftPressed) {
                    selectionEnd = cursor - 1; 
                }
                cursor--; 
            }
        } else if (line == "Shift") {
            isShiftPressed = true;
            selectionStart = cursor;
            selectionEnd = cursor;
        } else if (line == "Ctrl+X") {
            if (selectionStart != -1 && selectionEnd != -1 && selectionStart <= selectionEnd) {
             
                for (int i = selectionEnd; i >= selectionStart; --i) {
                    clipboard = lines[i];
                    lines.erase(lines.begin() + i);
                }
                cursor = selectionStart;
            } else if (cursor < lines.size()) {
                clipboard = lines[cursor];
                lines.erase(lines.begin() + cursor);
            }
            
            selectionStart = -1;
            selectionEnd = -1;
            isShiftPressed = false;
        } else if (line == "Ctrl+V") {
            if (!clipboard.empty()) {
                if (selectionStart != -1 && selectionEnd != -1 && selectionStart <= selectionEnd) {
                  
                    for (int i = selectionEnd; i >= selectionStart; --i) {
                        lines.erase(lines.begin() + i);
                    }
                    lines.insert(lines.begin() + selectionStart, clipboard);
                    cursor = selectionStart + 1;
                } else {
                
                    lines.insert(lines.begin() + cursor, clipboard);
                    cursor++;
                }
            }
            
            selectionStart = -1;
            selectionEnd = -1;
            isShiftPressed = false;
        }
    }


    for (const auto& l : lines) {
        std::cout << l << std::endl;
    }
    std::cout << std::endl;
}