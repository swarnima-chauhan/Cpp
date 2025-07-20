#include <iostream>
#include <string>
using namespace std;

class Parcel
{
private:
    string receiverName;
    string address;
    int parcelID;
    bool delivered;

public:
    Parcel()
    {
        receiverName = "";
        address = "";
        parcelID = 0;
        delivered = false;
    }

    void inputDetails()
    {
        cout << "Enter Parcel ID: ";
        cin >> parcelID;
        cin.ignore();
        cout << "Enter Receiver's Name: ";
        getline(cin, receiverName);
        cout << "Enter Address: ";
        getline(cin, address);
        delivered = false;
    }

    void displayDetails()
    {
        cout << "📦 Parcel ID: " << parcelID << "\nReceiver: " << receiverName
             << "\nAddress: " << address
             << "\nStatus: " << (delivered ? "Delivered ✅" : "Pending ❌") << "\n\n";
    }

    int getID()
    {
        return parcelID;
    }

    string getReceiverName()
    {
        return receiverName;
    }

    void markDelivered()
    {
        if (!delivered)
        {
            delivered = true;
            cout << "✅ Parcel marked as delivered.\n";
        }
        else
        {
            cout << "Already delivered!\n";
        }
    }

    bool isDelivered()
    {
        return delivered;
    }
};

int main()
{
    Parcel parcels[10];
    int count = 0, choice;

    do
    {
        cout << "\n--- 🚚 Parcel Delivery System ---\n";
        cout << "1. Add Parcel\n2. Mark as Delivered\n3. Show All Parcels\n4. Search by Receiver\n5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            if (count < 10)
            {
                parcels[count].inputDetails();
                count++;
            }
            else
            {
                cout << "Maximum capacity reached!\n";
            }
            break;
        case 2:
        {
            int id;
            cout << "Enter Parcel ID to mark delivered: ";
            cin >> id;
            bool found = false;
            for (int i = 0; i < count; i++)
            {
                if (parcels[i].getID() == id)
                {
                    parcels[i].markDelivered();
                    found = true;
                    break;
                }
            }
            if (!found)
            {
                cout << "Parcel not found!\n";
            }
            break;
        }
        case 3:
            for (int i = 0; i < count; i++)
            {
                parcels[i].displayDetails();
            }
            break;
        case 4:
        {
            string name;
            cin.ignore();
            cout << "Enter Receiver's Name to search: ";
            getline(cin, name);
            bool found = false;
            for (int i = 0; i < count; i++)
            {
                if (parcels[i].getReceiverName() == name)
                {
                    parcels[i].displayDetails();
                    found = true;
                }
            }
            if (!found)
            {
                cout << "No parcel found for that receiver.\n";
            }
            break;
        }
        case 5:
            cout << "Exiting system... 📦🚀\n";
            break;
        default:
            cout << "Invalid choice!\n";
        }
    } while (choice != 5);

    return 0;
}
