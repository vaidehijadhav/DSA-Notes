#include <iostream>
using namespace std;

class Animal{
    public:
        void speak(){
            cout << "speaking" << endl;
        }
};

class Dog :public Animal{
    public:
    //overriding
    void speak(){
        cout << "Barking" << endl;
    }
};


int main(){
    Animal a;
    a.speak();

    Dog b;
    b.speak();
    return 0;
}