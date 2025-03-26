#include <iostream>
#include <set>
#include <string>
#include <vector>

int main() {
    std::set<std::string> directories;
    std::string path;

   
    while (std::getline(std::cin, path)) {
     
        std::string dir = "";
        for (size_t i = 0; i < path.size(); ++i) {
            if (path[i] == '/') {
                if (!dir.empty()) {
                   
                    directories.insert("/" + dir + "/");
                }
                dir = "";
            } else {
                dir += path[i];
            }
        }
    }


    std::vector<std::string> sorted_directories(directories.begin(), directories.end());


    for (const auto& dir : sorted_directories) {
        std::cout << dir << std::endl;
    }

    return 0;
}