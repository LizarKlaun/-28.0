#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Multi {
public:
    Multi() {
    }
    void operator()(string& elem) {
        string lol = elem;
        for (int i = 0; i < elem.length(); i++)
        {
            elem[i] = lol[elem.length() - 1 - i];
        }
    }
};

int main()
{
    vector<string> vec = {"brediki","nullTalisman","bracer","wraithBand"};
    for_each(vec.begin(), vec.end(), Multi());
    for (const auto& elem : vec)
    {
        cout << elem << endl;
    }
}