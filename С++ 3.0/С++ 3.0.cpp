#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Multi {
    char factor;
public:
    Multi() {
    }
    explicit Multi(char factor) : factor(factor) {};
    void operator()(int& elem) {
        if(factor == '+') {

        }
    }
};

int main()
{
    vector<int> vec = {1,2,3,4};
    for_each(vec.begin(), vec.end(), Multi(+));
    for (const auto& elem : vec)
    {
        cout << elem << endl;
    }
}