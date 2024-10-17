#include <iostream>
using namespace std;

class Animal {
    // state or properties
    private:
    int weight;
    public:
    int age;
    string type;

    //default Constructor
    Animal(){
        this->weight = 0;
        this->age = 0;
        this->type = "";
        cout<<"Constructor Called" << endl;
    }

    // Parameterised Constructor
    Animal(int age){
        this->age = age;
        cout<<"Parameterised Constructor Called" << endl;

    }

    Animal(int age, int weight, string type){
        this->age = age;
        this->weight = weight;
        this->type = type;
        cout<<"Parameterised Constructor 2 Called" << endl;
    }

    // copy constructor
    Animal(Animal &obj){
        this->age = obj.age;
        this->weight = obj.weight;
        this->type = obj.type;
        cout<<"I am inside the copy constructor" << endl;

    }


    // behaviour
    void eat(){
        cout<<"Eating"<<endl;
    }

    void sleep(){
        cout<<"Sleeping"<<endl;
    }

    int getWeight(){
        return weight;
    }

    void setWeight(int w){
        weight = w;
    }

};

int main(){
    // // static
    // Animal ray;
    // ray.age = 12;
    // ray.type = "Lion";
    // cout<< "Age of ray is: "<<ray.age<<endl;
    // cout<< "Type of ray is: "<<ray.type<<endl;

    // ray.eat();
    // ray.sleep();

    // // to private member
    // ray.setWeight(100);
    // cout<<"Weight" << ray.getWeight()<<endl;

    Animal a(10);
    Animal*aa = new Animal(22, 56, "Ray");


    // object copy
    Animal c = a;
    // Animal c(b);
    return 0;
}