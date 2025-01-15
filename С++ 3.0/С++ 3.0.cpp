#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Multi {
    char factor;
public:
    explicit Multi(char factor) : factor(factor) {};
    void operator()(int& elem) const {
        if(factor == '+') {
            elem += elem;
        }
        else if (factor == '-') {
            elem -= elem;
        }
        else if (factor == '*') {
            elem *= elem;
        }
        else if (factor == '/') {
            elem /= elem;
        }
        else if (factor == '%') {
            elem = 0;
        }
    }
};

int main()
{
    vector<int> vec = {1,2,3,4};
    for_each(vec.begin(), vec.end(), Multi('%'));
    for (const auto& elem : vec)
    {
        cout << elem << endl;
    }
}