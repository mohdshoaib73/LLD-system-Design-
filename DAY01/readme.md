### Why we need OOPs?
1.it's use to real world modeling while procedural lang can not do this.
2.It provide data security while Procedural Programming not provide.
3.It is use to build highly scalable and reusable applictaion while Procedural Programming not provide this function.

## Class
Class is the blueprint of the real world entity it defines a entity behavior(Member Functions ()) and its Chararcteristics(Data Member).
class do not require any memory.
##### Syntax
       class Class_Name{
        //Acess modifier of class
        Data Members;
        Member Functions;
        
       };
## Object
Object is the instance of the class that needs memory.
exmaple--building a system using class blueprint with the obj.

## Pillar of OOPs

## Abstraction
## Encapsulation
## Polymorphism
## Inheritance

## Abstraction->
Abstraction means hiding internal implementation and showing only essential feature of an object..

#### Importance of Abstraction
Reduce complextity..
Provide security coz it is not showing implementaion details..
Make code easier to update and extend
Help to focus on what not how

##### Abstract Class 
Abstract class conatins at least one "Pure Virtual Function"
We cannot create an object of an abstract class because it contains pure virtual functions without implementation, and an object must have complete behavior to be instantiated.
###### Golden rule
If a class has EVEN ONE virtual function, its destructor MUST be virtual.
When deleting a derived object using a base-class pointer, the base class must have a virtual destructor to ensure the derived class destructor is called and resources are released correctly.
###### Define Abstract class
         class Vehicle {
              public:
              virtual void start() = 0;   // pure virtual function
              //=0 meaning no body of fn 
              //The derived class MUST override it,The base class becomes abstract 
              //A pure virtual function is a virtual function with no definition in base class.

       };

       class Car : public Vehicle {
       public:
            void start() {
              cout << "Car starts with key" << endl;
            }
       };
       int main()
       {
              Vechicle* v=new car;//run time polymorphism nd low coupling

              v->sart();
       }

