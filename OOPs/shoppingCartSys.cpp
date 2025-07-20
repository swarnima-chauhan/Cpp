#include <iostream>
#include <string>
using namespace std;

class Product
{
private:
    string name;
    float price;
    int id;

public:
    Product()
    {
        name = "";
        price = 0;
        id = 0;
    }

    void addProduct()
    {
        cin.ignore();
        cout << "Enter product name: ";
        getline(cin, name);
        cout << "Enter product ID: ";
        cin >> id;
        cout << "Enter price: ₹";
        cin >> price;
    }

    void display() const
    {
        cout << "🛍️ " << name << " | ID: " << id << " | Price: ₹" << price << "\n";
    }

    int getId() const
    {
        return id;
    }

    float getPrice() const
    {
        return price;
    }

    string getName() const
    {
        return name;
    }
};

class Cart
{
private:
    float total;
    string items[10];
    int itemCount;

public:
    Cart()
    {
        total = 0;
        itemCount = 0;
    }

    void addToCart(Product p)
    {
        if (itemCount < 10)
        {
            items[itemCount++] = p.getName();
            total += p.getPrice();
            cout << "✅ " << p.getName() << " added to cart.\n";
        }
        else
        {
            cout << "❌ Cart is full!\n";
        }
    }

    void viewCart() const
    {
        cout << "\n🛒 Cart Items:\n";
        for (int i = 0; i < itemCount; i++)
        {
            cout << "- " << items[i] << "\n";
        }
        cout << "Total: ₹" << total << "\n\n";
    }
};

int main()
{
    Product store[5];
    int productCount = 0;
    Cart myCart;
    int choice;

    do
    {
        cout << "\n--- 🛒 Shopping Cart Menu ---\n";
        cout << "1. Add Product to Store\n2. View Store\n3. Add to Cart\n4. View Cart\n5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            if (productCount < 5)
            {
                store[productCount++].addProduct();
            }
            else
            {
                cout << "Store full!\n";
            }
            break;

        case 2:
            cout << "\n🛍️ Available Products:\n";
            for (int i = 0; i < productCount; i++)
            {
                store[i].display();
            }
            break;

        case 3:
        {
            int pid;
            cout << "Enter Product ID to add to cart: ";
            cin >> pid;
            bool found = false;
            for (int i = 0; i < productCount; i++)
            {
                if (store[i].getId() == pid)
                {
                    myCart.addToCart(store[i]);
                    found = true;
                    break;
                }
            }
            if (!found)
            {
                cout << "❌ Product not found!\n";
            }
            break;
        }

        case 4:
            myCart.viewCart();
            break;

        case 5:
            cout << "Thank you for shopping! 🛍️\n";
            break;

        default:
            cout << "Invalid choice!\n";
        }

    } while (choice != 5);

    return 0;
}
