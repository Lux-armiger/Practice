#include <iterator>

template <typename Iter>
Iter Unique(Iter first, Iter last) {
    if (first == last) {
        return last;
    }

    Iter result = first;
    ++first; 

    
    while (first != last) {
        if (*first != *result) {
            ++result;
            *result = *first;
        }
        ++first;
    }

    return ++result;
}