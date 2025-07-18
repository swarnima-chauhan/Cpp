#include <iostream>
#include <string>
using namespace std;

class Pet
{
private:
    string name;
    string type;
    bool isAdopted;

public:
    Pet(string n, string t)
    {
        name = n;
        type = t;
        isAdopted = false;
    }

    void showInfo()
    {
        if (!isAdopted)
        {
            cout << "🐾 " << name << " (" << type << ") is available for adoption.\n";
        }
    }

    string getName()
    {
        return name;
    }

    bool getStatus()
    {
        return isAdopted;
    }

    void adopt()
    {
        if (!isAdopted)
        {
            isAdopted = true;
            cout << "🎉 You have adopted " << name << "! Take good care! 🐕\n";
        }
        else
        {
            cout << "❌ " << name << " is already adopted.\n";
        }
    }

    void returnPet()
    {
        if (isAdopted)
        {
            isAdopted = false;
            cout << "🔁 " << name << " has been returned to the center.\n";
        }
        else
        {
            cout << name << " wasn't adopted yet!\n";
        }
    }
};

int main()
{
    Pet p1("Bella", "Dog");
    Pet p2("Milo", "Cat");
    Pet p3("Chirpy", "Parrot");

    int choice;
    string name;

    do
    {
        cout << "\n--- 🐾 Pet Adoption Center ---\n";
        cout << "1. View Available Pets\n2. Adopt a Pet\n3. Return a Pet\n4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore();

        switch (choice)
        {
        case 1:
            p1.showInfo();
            p2.showInfo();
            p3.showInfo();
            break;
        case 2:
            cout << "Enter pet name to adopt (Bella / Milo / Chirpy): ";
            getline(cin, name);
            if (name == "Bella")
                p1.adopt();
            else if (name == "Milo")
                p2.adopt();
            else if (name == "Chirpy")
                p3.adopt();
            else
                cout << "❌ No such pet found!\n";
            break;
        case 3:
            cout << "Enter pet name to return (Bella / Milo / Chirpy): ";
            getline(cin, name);
            if (name == "Bella")
                p1.returnPet();
            else if (name == "Milo")
                p2.returnPet();
            else if (name == "Chirpy")
                p3.returnPet();
            else
                cout << "❌ No such pet found!\n";
            break;
        case 4:
            cout << "Thank you for visiting! 🐶💖\n";
            break;
        default:
            cout << "Invalid choice!\n";
        }
    } while (choice != 4);

    return 0;
}
