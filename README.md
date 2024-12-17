Different programming approaches :

1. Producedural programming Approach -> Procedural programming is a programming paradigm, classified as imperative programming, that involves implementing the behavior of a computer program as procedures (a.k.a. functions, subroutines) that call each other.

2. Modular Programming Approach -> The modular programming approach is a technique that simplifies complex software development by breaking it down into smaller, manageable pieces called modules. Each module performs a specific task and can be used independently or combined with other modules to build larger systems
   (PROBLEM : DATA AND FUNCTIONS ARE SEPARATE TILL NOW , NOW WE NEED OOPS for the rescue.)

3.Object Oriented Programming -> Object-Oriented Programming (OOP) is a programming paradigm that revolves around the concept of objects, which encapsulate data and code that manipulates that data. OOP organizes software design around objects and their interactions, promoting modularity, reusability, and easier maintenance. (member variable and member functions)

Object -> Instance of a class , while a class is a blueprint.
Object occupy memory in the RAM , classes are just the blueprints that don't occupy any space in the memory.

ACCESS SPECIFIERS :
Access specifiers in C++ are keywords that determine the accessibility of class members (data and functions) to other parts of the program. There are three access specifiers in C++:
1.Public (public) : Members declared as public are accessible from anywhere in the program.
2.Private (private) : Members declared as private are accessible only within the class itself, and not from outside the class.
3.Protected (protected) : Members declared as protected are accessible within the class and its derived classes, but not from outside the class hierarchy.

Member functions are shared by all the object while member variable are created unique for all objects.

CHARACTERISTICS OF OOP's

1. Class -> is a blueprint and Object is instance of class == class is a user-defined datatype, which holds its own data members and member functions. Helps in code reusability.
2. Encapsulation -> wrapping up variable and methods in class , it help in data hiding.
3. Polymorphism -> means having many terms , in class method may behave differently, depending on the inputs. eg function overloading.
4. Inheritance -> means property of a child class to inherit characteristics of parent class.
5. Abstraction -> measn hiding complicated things from the user.

CONSTRUCTORS IN OOPs
A constructor in OOP is a special method within a class that is called when an object of that class is created. Its purpose is to initialize the object’s state by setting the values of its attributes (data members) and performing any necessary setup tasks.

Key Characteristics:
Name: A constructor has the same name as the class.
No Return Type: Constructors do not have a return type, not even void.
Called Automatically: A constructor is called automatically when an object is created using the new keyword or by declaring it as a local variable.
Initialization: Constructors are responsible for initializing the object’s state, setting attribute values, and performing any necessary setup tasks.
Types of Constructors:
1.Default Constructor: A default constructor has no parameters and is provided by the compiler if no user-defined constructor is defined.
2.arameterized Constructor: A parameterized constructor takes one or more parameters and is used to initialize the object’s state with specific values.
3.Copy Constructor: A copy constructor creates a new object by copying the values of another object of the same class.

OVERLOADED CONSTRUCTOR
eg : Persone(name="null" , age="0" , height ="0.00f")

OPERATOR OVERLOADING
When we make our operators(+ ,-,/,x) work for user-defined types like objects and structures.
syntax : A operator + (A w2)

INHERITANCE
a mechanism in which one class acquire the property of another class. (child inherit parent )
->reduce duplicate code
->code reuse
->better organization of code
syntax : class child : public parent{};

TYPES OF INHERITANCE
Based on the provided search results, here are the types of inheritance mentioned:
Single Inheritance: A subclass inherits properties and behavior from a single parent class.
Multilevel Inheritance: A subclass inherits properties and behavior from another subclass, which itself inherits from a parent class.
Multiple Inheritance: A subclass inherits properties and behavior from multiple parent classes.
Hybrid Inheritance: A combination of multiple inheritance types, such as multilevel and multiple inheritance.
Multipath Inheritance: A subclass inherits properties and behavior from multiple parent classes through a chain of inheritance.

CONSTRUCTORS AND INHERITANCE
If we don't specify a constructor, then derived class will use appropriate constructor from baseclass (applicable for only default constructor). not applicable for parameterized constructor.
---> 1st Default constructor of base class, then Default Constructor of derived class is called

OVERRIDING MEMBER FUNCTION
redefining functionality of BASE class into DERIVED clas, then if we create object of DERIVED class.
derived class object will call function of derived class first
derived class can explicitly call function of base class as eg (base::Function())

RELATIONS

1. isA Relationship === inheritance can used to implement isA relationship.
2. hasA Relationship === is based on objects.

Ways of Inheritance
There are two ways of inheritance:
eg class derived : public parent{}; or class derived : protected parent{};

1. public : public->public , protected -> protected
2. protected : public -> protected , protected -> protected.

POLYMORPHISM
1.BASE CLASS POINTER AND DERIVED CLASS OBJECT -> can only access features of base class. eg basic car(base class) inherited by advanced car (derived class).

2. VIRTUAL FUNCTION -> virtual means existing in appearance but not in reality. while virtual function means a function existing in class but can'
   t be used.
   Hence Program that appears to be calling a function of one class may in reality be calling a funtion of different class. eg:
   Late Binding : compiler deferr the decision untill, the program is running and at runtime when it come to knoow which class is pointed by ptr, then appropriate function would be called . This is called Dynamic Binding/ Late Binding.

3.ABSTRACT CLASS :
An abstract class in OOP is a class that cannot be instantiated on its own and is intended to be inherited by other classes. It provides a blueprint or a template for other classes to follow, defining a common structure and a set of methods that must be implemented by its subclasses.
Key Characteristics:
Cannot be instantiated: An abstract class cannot be created as an object directly.
Abstract methods: An abstract class can contain abstract methods, which are methods declared without an implementation. Subclasses must provide their own implementation for these methods.
Concrete methods: An abstract class can also contain concrete methods, which have an implementation and can be used by subclasses.
Inheritance: Abstract classes are designed to be inherited by other classes, which can then extend and modify the abstract class’s behavior.
Abstract class is used when we never want to instantiate obhect to BASE class.
PURE VIRTUAL FUNCTION -> eg: virtual void give() =0, the class that contain the pure virtual function is abstract class.
Abstract class exists only to act as parent of DERIVED CLASS.

POLYMORPHISM :

1. COMPILE TIME -> Operator Overloading , Function Overloading
2. RUN TIME -> Virtual Function , Function Overloading
