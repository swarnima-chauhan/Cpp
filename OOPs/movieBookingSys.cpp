#include <iostream>
#include <string>
using namespace std;

class Movie
{
private:
    string title;
    string showTime;
    int totalSeats;
    int bookedSeats;

public:
    Movie(string t, string time, int seats)
    {
        title = t;
        showTime = time;
        totalSeats = seats;
        bookedSeats = 0;
    }

    void showDetails()
    {
        cout << "Movie: " << title << " | Time: " << showTime
             << " | Seats Available: " << totalSeats - bookedSeats << endl;
    }

    void bookTicket()
    {
        if (bookedSeats < totalSeats)
        {
            bookedSeats++;
            cout << "✅ Ticket booked for '" << title << "' at " << showTime << endl;
        }
        else
        {
            cout << "❌ Sorry, house full!\n";
        }
    }

    void cancelTicket()
    {
        if (bookedSeats > 0)
        {
            bookedSeats--;
            cout << "✅ Ticket cancelled for '" << title << "' at " << showTime << endl;
        }
        else
        {
            cout << "❌ No bookings to cancel.\n";
        }
    }

    string getTitle()
    {
        return title;
    }
};

int main()
{
    Movie m1("Inception", "7:00 PM", 5);
    Movie m2("Interstellar", "9:00 PM", 5);

    int choice;
    string selected;

    do
    {
        cout << "\n--- Movie Ticket Booking System ---\n";
        cout << "1. View Movies\n2. Book Ticket\n3. Cancel Ticket\n4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            m1.showDetails();
            m2.showDetails();
            break;

        case 2:
            cout << "Enter movie title to book (Inception / Interstellar): ";
            cin.ignore();
            getline(cin, selected);
            if (selected == m1.getTitle())
            {
                m1.bookTicket();
            }
            else if (selected == m2.getTitle())
            {
                m2.bookTicket();
            }
            else
            {
                cout << "❌ Movie not found!\n";
            }
            break;

        case 3:
            cout << "Enter movie title to cancel (Inception / Interstellar): ";
            cin.ignore();
            getline(cin, selected);
            if (selected == m1.getTitle())
            {
                m1.cancelTicket();
            }
            else if (selected == m2.getTitle())
            {
                m2.cancelTicket();
            }
            else
            {
                cout << "❌ Movie not found!\n";
            }
            break;

        case 4:
            cout << "🎟️ Thank you for using the Movie Ticket System!\n";
            break;

        default:
            cout << "Invalid choice!\n";
        }

    } while (choice != 4);

    return 0;
}