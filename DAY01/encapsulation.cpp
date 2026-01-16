#include<bits/stdc++.h>
using namespace std;
 
/*
Encapsulation says 2 things:
1. An Object's Characteristics and its behaviour are encapsulated together
within that Object.
2. All the characteristics or behaviours are not for everyone to access.
Object should provide data security.

We follow above 2 pointers about Object of real world in programming by:
1. Creating a class that act as a blueprint for Object creation. Class contain
all the characteristics (class variable) and behaviour (class methods) in one block,
encapsulating it together.
2. We introduce access modifiers (public, private, protected) etc to provide data
security to the class members.
*/

class SportCars{
    // Characteristics
private:
    string brand;
    string model;
    bool isEngineOn;
    int currentSpeed;
    int currentGear;
    string tyreBrand;
    // Behaviour
public:
    SportCars(string brand,string model)
    {
        this->brand=brand;
        this->model=model;
        isEngineOn=false;
        currentSpeed=0;
        currentGear=0;
        tyreBrand="MRF";
    }

    string getBrand(){
        return this->brand;
    }
    string getModel(){
        return this->model;
    }

    void setTyreBrand(string tyreBrand){
        this->tyreBrand=tyreBrand;
    }
    string getTyreBrand(){
        return this->tyreBrand;
    }

    void startEngine(){
        isEngineOn=true;
        cout<<brand<<" "<<model<<" Engine Started and roar"<<endl;
    }

    void shiftGear(int gear){
        if(isEngineOn){
            currentGear=gear;
            cout<<brand<<" "<<model<<" shifted to gear "<<gear<<endl;
        }
        else{
            cout<<"Start the engine first to shift gear"<<endl;
        }
    }
    void accelerate(int speed){
        if(isEngineOn){
            currentSpeed+=speed;
            cout<<brand<<" "<<model<<" accelerated to speed "<<currentSpeed<<" km/h"<<endl;
        }
        else{
            cout<<"Start the engine first to accelerate"<<endl;
        }
    }
    void brake(int speed){
        if(isEngineOn){
            currentSpeed-=speed;
            if(currentSpeed<0) currentSpeed=0;
            cout<<brand<<" "<<model<<" decelerated to speed "<<currentSpeed<<" km/h"<<endl;
        }
        else{
            cout<<"Start the engine first to brake"<<endl;
        }
    }

    void stopEngine(){
        isEngineOn=false;
        currentSpeed=0;
        currentGear=0;
        cout<<brand<<" "<<model<<" Engine Stopped"<<endl;
    }
    ~SportCars(){}
    
};


int main(){
    SportCars car1("Ferrari","488 Spider");
    car1.startEngine();
    car1.shiftGear(1);
    car1.accelerate(50);
    car1.shiftGear(2);
    car1.brake(40);
    car1.stopEngine();
    return 0;
}