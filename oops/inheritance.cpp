#include <iostream>
using namespace std;

class Animal {
    public:
        int age;
};

// class Dog:public Animal {

// };

class Dog:protected Animal {
    public:
    void print(){
        cout<<this->age;
    }
};

int main(){
    Dog d1;
    // cout<<d1.age;
    d1.print();
    return 0;
}