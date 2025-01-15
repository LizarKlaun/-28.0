#include <iostream>
#include <memory>

using namespace std;

class People {
    string name;
    string surname;
    string fathername;
    int year;
public:
    People() {
        this->name = "Kolya";
        this->surname = "Yukibovich";
        this->fathername = "Kostyntinovich";
        this->year = 16;
    }
    void Print() {
        cout << "Name: " << name << endl << "Surname: " << surname << endl << "Fathername: " << fathername << endl << "Year: " << year << endl;
    }
};

int main()
{
    unique_ptr<People[]> ptr1(new People[5]);

    for (int i = 0; i < 5; i++) {
        ptr1[i].Print();
    }
    cout << "----------------------" << endl;
    shared_ptr<People[]> ptr2(new People[5]);
    for (int i = 0; i < 5; i++) {
        ptr2[i].Print();
    }
}