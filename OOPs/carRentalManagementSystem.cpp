#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Base Class
class Vehicle
{
protected:
    string brand;
    string model;
    int year;
    float rentPerDay;
    bool isAvailable;

public:
    Vehicle(string b, string m, int y, float rent)
        : brand(b), model(m), year(y), rentPerDay(rent), isAvailable(true) {}

    virtual void displayInfo()
    {
        cout << brand << " " << model << " (" << year << ") - ₹" << rentPerDay << "/day";
        if (isAvailable)
            cout << " [Available]\n";
        else
            cout << " [Booked]\n";
    }

    bool getAvailability() { return isAvailable; }
    void book() { isAvailable = false; }
    void unbook() { isAvailable = true; }
    float getRent() { return rentPerDay; }
    string getModel() { return model; }
};

// Derived Class
class Car : public Vehicle
{
public:
    Car(string b, string m, int y, float rent)
        : Vehicle(b, m, y, rent) {}
};

// Customer Class
class Customer
{
    string name;
    int age;

public:
    Customer(string n, int a) : name(n), age(a) {}
    void displayCustomer()
    {
        cout << "Customer: " << name << ", Age: " << age << "\n";
    }
};

// Rental Service
class RentalService
{
    vector<Car> cars;

public:
    void addCar(Car c)
    {
        cars.push_back(c);
    }

    void showCars()
    {
        for (int i = 0; i < cars.size(); i++)
        {
            cout << i + 1 << ". ";
            cars[i].displayInfo();
        }
    }

    void bookCar(int index, Customer c, int days)
    {
        if (index < 1 || index > cars.size())
        {
            cout << "Invalid car selection!\n";
            return;
        }

        if (!cars[index - 1].getAvailability())
        {
            cout << "Sorry, this car is already booked.\n";
            return;
        }

        cars[index - 1].book();
        float total = days * cars[index - 1].getRent();

        cout << "\n✅ Booking Confirmed!\n";
        c.displayCustomer();
        cout << "Car: " << cars[index - 1].getModel() << "\n";
        cout << "Total Rent: ₹" << total << " for " << days << " days.\n";
    }
};

int main()
{
    RentalService service;

    // Adding Cars
    service.addCar(Car("Maruti", "Swift", 2021, 1000));
    service.addCar(Car("Hyundai", "i20", 2022, 1200));
    service.addCar(Car("Tata", "Nexon", 2023, 1500));

    int choice, days;
    string name;
    int age;

    cout << "Welcome to Car Rental Service!\n";
    service.showCars();

    cout << "\nEnter your name: ";
    getline(cin, name);
    cout << "Enter your age: ";
    cin >> age;

    Customer cust(name, age);

    cout << "\nSelect a car to book (1-3): ";
    cin >> choice;
    cout << "For how many days?: ";
    cin >> days;

    service.bookCar(choice, cust, days);

    return 0;
}
