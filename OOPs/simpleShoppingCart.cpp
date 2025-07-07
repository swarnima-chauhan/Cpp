#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class Product
{
private:
    string name;
    float price;
    int quantity;

public:
    Product()
    {
        name = "";
        price = 0.0;
        quantity = 0;
    }

    void input()
    {
        cin.ignore();
        cout << "Enter Product Name : ";
        getline(cin, name);
        cout << "Enter Price :";
        cin >> price;
        cout << "Enter Quantity : ";
        cin >> quantity;
    }

    void display()
    {
        cout << name << " " << price << " " << quantity << " Total :" << price * quantity << endl;
    }

    float getTotal()
    {
        return price * quantity;
    }
};

int main()
{
    Product cart[20];
    int count = 0;
    int choice;

    do
    {
        cout << "\n---Shopping Cart Menu---\n";
        cout << "1. Add Product\n2. View Cart\n3. Chechout\n4. Exit\n";
        cout << "Enter your choice : ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            if (count < 20)
            {
                cart[count].input();
                count++;
            }
            else
            {
                cout << "Cart is full!\n";
            }
            break;

        case 2:
            if (count == 0)
            {
                cout << "Your cart is empty!\n";
            }
            else
            {
                cout << "\n--- Your Cart ---\n";
                for (int i = 0; i < count; i++)
                {
                    cart[i].display();
                }
            }
            break;

        case 3:
        {
            float total = 0;
            for (int i = 0; i < count; i++)
            {
                total = cart[i].getTotal();
            }
            cout << "\n Total Amount : " << total << "\n";
            cout << "Thank you for shopping!\n";
            break;
        }

        case 4:
            cout << "Exiting...\n";
            break;

        default:
            cout << "Invalid Choice!\n";
        }
    } while (choice != 4);

    return 0;
}