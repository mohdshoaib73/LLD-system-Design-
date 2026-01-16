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
 
 ### Why we use virtual destructor in Abstract Class ?
abstract classes are usually used as base classes and accessed via base pointers.

If the base class destructor is not virtual, only the base part of the object gets destroyed derived class resources leak.

#### Example

     #include <iostream>
     using namespace std;

     class Base {
    public:
    ~Base() {
        cout << "Base destructor\n";
       }
    };

       class Derived : public Base {
       public:
      ~Derived() {
        cout << "Derived destructor\n";
        }
     };

    int main() {
    Base* obj = new Derived();
    delete obj;   
    }

    Only exicuted OP== Base destructor and Derived mem leaked coz Derived destructor is never called

### Making the base class destructor virtual enables runtime polymorphism for destruction.
       class Base {
       public:
        virtual ~Base() {
        cout << "Base destructor\n";
        }
       };
## Pure virtual destructor
        class Base {
        public:
         virtual ~Base() = 0;   // pure virtual destructor
       };

      Base::~Base() {
       cout << "Base destructor\n";
     }       
Destructor must still be implemented

It ensures:

Class remains abstract

Proper destruction of base part

#### When you REALLY need a virtual destructor

You must use it when

You delete derived objects using base pointers

Your base class is intended for polymorphic use

Your abstract class defines an interface

##### Example use cases:

Plugin systems

Factory pattern

Dependency injection

Framework base classes


# Encapsulation
Encapsulation is the mechanism of wrapping the data members and member functions together in a single unit called class.
It is also known as data hiding because it restricts direct access to some of an object's components, which can prevent the accidental modification of data.
#### Importance of Encapsulation
1.Data Hiding
2.Controlled access to data
3.Maintenance of code
4.Flexibility and Modularity
5.Improved security
#### Access Specifiers
1.Private: members are accessible only within the class.
2.Protected: members are accessible within the class and by derived class.
3.Public: members are accessible from any part of the program.

##### Real life example of Encapsulation
Consider a class "BankAccount" that encapsulates the details of a bank account.
And it provides public methods to deposit, withdraw, and check the balance.
But the actual balance is private and cannot be accessed directly from outside the class.

Encapsulation helps to protect the integrity of the bank account data and provides a controlled way to interact with it.

### Why we need Encapsulation?
1.Data Hiding: It restricts direct access to an object's data, protecting it from unintended interference and misuse.
2.Controlled Access: It allows controlled access to data through public methods, enabling validation and enforcement of business rules.
3.Maintenance of Code: It makes the code easier to maintain and modify by isolating changes to specific classes.
4.Flexibility and Modularity: It promotes modular design, allowing changes to be made to one part of the code without affecting other parts.
5.Improved Security: It enhances security by preventing unauthorized access to sensitive data.
### Example of Encapsulation in C++

       #include <iostream>
       using namespace std;

       class BankAccount {
       private:
           double balance; // pvt data member no direct access from outside otherwise data hiding can be violated.
       public:
           // Constructor to initialize balance
           BankAccount(double initialBalance) {
               balance = initialBalance;
           }

           // Public method to deposit money
           void deposit(double amount) {
               if (amount > 0) {
                   balance += amount;
                   cout << "Deposited: " << amount << endl;
               } else {
                   cout << "Invalid deposit amount" << endl;
               }
           }

           // Public method to withdraw money
           void withdraw(double amount) {
               if (amount > 0 && amount <= balance) {
                   balance -= amount;
                   cout << "Withdrawn: " << amount << endl;
               } else {
                   cout << "Invalid withdrawal amount" << endl;
               }
           }

           // Public method to check balance
           double getBalance() {
               return balance;
           }
       };

       int main() {
           BankAccount account(1000.0); // Create a bank account with initial balance of 1000

           account.deposit(500.0);      // Deposit money
           account.withdraw(200.0);     // Withdraw money
           cout << "Current Balance: " << account.getBalance() << endl; // Check balance

           return 0;
       }
              

