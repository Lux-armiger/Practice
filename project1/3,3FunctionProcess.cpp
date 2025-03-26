#include <algorithm>
#include <vector>

template <typename T>
void PrintResults(typename std::vector<T>::iterator begin, typename std::vector<T>::iterator end);

template <typename T>
void Process(const std::vector<T>& data) {

    size_t positiveCount = std::count_if(data.begin(), data.end(), [](const T& x) { return x > 0; });


    std::vector<T> filtered;
    filtered.reserve(positiveCount);

    
    auto filteredLast = std::copy_if(
        data.begin(),
        data.end(),
        std::back_inserter(filtered),
        [](const T& x) { return x > 0; }
    );


    PrintResults(filtered.begin(), filteredLast);
}