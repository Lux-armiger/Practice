#include <iostream>
#include <string>

void AddCharacter(std::string& result, char character) {
    if (result.back() != character) {
        result.push_back(character);
    }
}

std::string GenerateSoundex(const std::string& input) {
    std::string result;
    if (!input.empty()) {
        result.push_back(input[0]);
    }
    
    for (size_t index = 1; index < input.size(); ++index) {
        char currentChar = input[index];
        switch (currentChar) {
            case 'b':
            case 'f':
            case 'p':
            case 'v':
                AddCharacter(result, '1');
                break;
            case 'c':
            case 'g':
            case 'j':
            case 'k':
            case 'q':
            case 's':
            case 'x':
            case 'z':
                AddCharacter(result, '2');
                break;
            case 'd':
            case 't':
                AddCharacter(result, '3');
                break;
            case 'l':
                AddCharacter(result, '4');
                break;
            case 'm':
            case 'n':
                AddCharacter(result, '5');
                break;
            case 'r':
                AddCharacter(result, '6');
                break;
            default:
                break; 
        }
    }
    
    while (result.size() < 4) {
        result.push_back('0');
    }
    
    result.resize(4);
    return result;
}

int main() {
    std::string Word;
    std::cin >> Word;
    std::cout << GenerateSoundex(Word) << "\n";
}