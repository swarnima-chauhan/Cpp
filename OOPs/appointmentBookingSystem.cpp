#include <iostream>
#include <string>
using namespace std;

class Appointment
{
private:
    string patientName;
    string doctorName;
    string date;
    string time;

public:
    Appointment()
    {
        patientName = "";
        doctorName = "";
        date = "";
        time = "";
    }

    void book()
    {
        cin.ignore(); // clear buffer
        cout << "Enter Patient Name: ";
        getline(cin, patientName);
        cout << "Enter Doctor Name: ";
        getline(cin, doctorName);
        cout << "Enter Date (dd-mm-yyyy): ";
        getline(cin, date);
        cout << "Enter Time (hh:mm): ";
        getline(cin, time);
    }

    void display()
    {
        cout << "Patient: " << patientName
             << ", Doctor: " << doctorName
             << ", Date: " << date
             << ", Time: " << time << endl;
    }

    string getPatientName()
    {
        return patientName;
    }
};

int main()
{
    Appointment appointments[20];
    int count = 0;
    int choice;

    do
    {
        cout << "\n--- Appointment Booking System ---\n";
        cout << "1. Book Appointment\n2. Display All Appointments\n3. Search by Patient Name\n4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            if (count < 20)
            {
                appointments[count].book();
                count++;
            }
            else
            {
                cout << "Appointment limit reached!\n";
            }
            break;
        case 2:
            if (count == 0)
                cout << "No appointments booked yet.\n";
            else
                for (int i = 0; i < count; i++)
                    appointments[i].display();
            break;
        case 3:
        {
            cin.ignore(); // clear buffer
            string searchName;
            cout << "Enter patient name to search: ";
            getline(cin, searchName);
            bool found = false;
            for (int i = 0; i < count; i++)
            {
                if (appointments[i].getPatientName() == searchName)
                {
                    appointments[i].display();
                    found = true;
                }
            }
            if (!found)
                cout << "Appointment not found!\n";
            break;
        }
        case 4:
            cout << "Thank you! Exiting...\n";
            break;
        default:
            cout << "Invalid choice. Try again.\n";
        }

    } while (choice != 4);

    return 0;
}