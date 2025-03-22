#include <iostream>
#include <vector>
using namespace std;

int main()
{
int n;
cin >> n;

vector<int> places (n);
for (int guest = 1; guest<=n; ++guest){
    int place;
    cin >> place;
    places[place - 1] = guest;
}

for (int guest : places){
cout << guest << " ";
    
}
    return 0;
}