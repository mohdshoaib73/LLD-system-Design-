# Inheritance
Inheritance is a fundamental concept in object-oriented programming (OOP) that allows a new class (called a derived class or child class) to inherit properties and behaviors (attributes and methods) from an existing class (called a base class or parent class). This mechanism promotes code reusability and establishes a hierarchical relationship between classes.
## Types of Inheritance
1. Single Inheritance: A derived class inherits from a single base class.
2. Multiple Inheritance: A derived class inherits from more than one base class.
3. Multilevel Inheritance: A derived class inherits from a base class, which itself is derived from another base class.
4. Hierarchical Inheritance: Multiple derived classes inherit from a single base class. 
5. Hybrid Inheritance: A combination of two or more types of inheritance.
# Polymorphism
Polymorphism is another core concept of OOP that allows objects of different classes to be treated as objects of a common superclass. It enables a single interface to represent different underlying forms (data types). The two main types of polymorphism are:
1. Compile-time Polymorphism (Static Polymorphism): Achieved through method overloading or operator overloading. The method to be invoked is determined at compile time based on the method signature.
2. Run-time Polymorphism (Dynamic Polymorphism): Achieved through method overriding using   virtual functions. The method to be invoked is determined at runtime based on the object's actual type. 
# Dynamic Polymorphism
Dynamic polymorphism, also known as runtime polymorphism, is a feature of object-oriented programming that allows a program to decide at runtime which method to invoke based on the actual object type, rather than the reference type. This is typically achieved through method overriding and the use of virtual functions in languages like C++. In dynamic polymorphism, a base class defines a method as virtual, and derived classes provide their own implementations of that method. When a method is called on a base class reference or pointer, the actual method that gets executed is determined by the type of the object being referenced at runtime. This allows for more flexible and extensible code, as new derived classes can be added without modifying existing code that uses the base class interface.
# Static Polymorphism   
Static polymorphism, also known as compile-time polymorphism, is a feature of object-oriented programming that allows a program to determine which method to invoke at compile time based on the method signature. This is typically achieved through method overloading and operator overloading. In static polymorphism, multiple methods can have the same name but differ in the number or types of their parameters. The compiler selects the appropriate method to call based on the arguments provided during the method invocation. This allows for more readable and maintainable code, as developers can use the same method name for related operations while providing different implementations based on the context of the call.
