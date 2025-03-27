#include <iostream>
#include <vector>
#include <deque>

int main() {
    int n, k;
    std::cin >> n >> k;

    std::vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> arr[i];
    }

    std::deque<int> dq; 
    std::vector<int> result;

    for (int i = 0; i < n; ++i) {
       
        if (!dq.empty() && dq.front() < i - k + 1) {
            dq.pop_front();
        }

        
        while (!dq.empty() && arr[dq.back()] > arr[i]) {
            dq.pop_back();
        }

        
        dq.push_back(i);

        
        if (i >= k - 1) {
            result.push_back(arr[dq.front()]);
        }
    }


    for (const auto& min : result) {
        std::cout << min << std::endl;
    }

    return 0;
}