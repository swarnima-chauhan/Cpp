#include <iostream>
#include <string>
using namespace std;

// Abstract base class (Abstraction)
class Animal
{
protected:
    string name;

public:
    Animal(const string &name) : name(name) {}

    // Pure virtual function (Abstraction + Polymorphism)
    virtual void speak() const = 0;

    virtual ~Animal() {} // Virtual destructor
};

// Derived class (Inheritance + Polymorphism)
class Dog : public Animal
{
public:
    Dog(const string &name) : Animal(name) {}

    void speak() const override
    {
        cout << name << " says: Woof!" << endl;
    }
};

// Another derived class
class Cat : public Animal
{
public:
    Cat(const string &name) : Animal(name) {}

    void speak() const override
    {
        cout << name << " says: Meow!" << endl;
    }
};

// Class that demonstrates Encapsulation
class Zoo
{
private:
    Animal *animal;

public:
    Zoo(Animal *a) : animal(a) {}

    void makeAnimalSpeak() const
    {
        animal->speak(); // Polymorphism in action
    }
};

int main()
{
    Dog d("Buddy");
    Cat c("Whiskers");

    Zoo zoo1(&d);
    Zoo zoo2(&c);

    zoo1.makeAnimalSpeak(); // Output: Buddy says: Woof!
    zoo2.makeAnimalSpeak(); // Output: Whiskers says: Meow!

    return 0;
}
