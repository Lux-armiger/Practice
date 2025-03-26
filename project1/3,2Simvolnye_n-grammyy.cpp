#include <iostream>
#include <map>
#include <vector>
#include <string>
#include <algorithm>

int main() {
    int m, n;
    std::cin >> m >> n;
    std::cin.ignore();

    std::map<std::string, int> ngram_count;

    for (int i = 0; i < m; ++i) {
        std::string word;
        std::cin >> word; 

       
        for (size_t j = 0; j <= word.length() - n; ++j) {
            std::string ngram = word.substr(j, n);
            ngram_count[ngram]++; 
        }
    }

    std::vector<std::pair<std::string, int>> ngram_vector(ngram_count.begin(), ngram_count.end());

   
    std::sort(ngram_vector.begin(), ngram_vector.end(), [](const auto& a, const auto& b) {
        if (a.second != b.second) {
            return a.second > b.second;
        }
        return a.first < b.first;
    });


    for (const auto& entry : ngram_vector) {
        std::cout << entry.first << " " << entry.second << std::endl;
    }

    return 0;
}