#include <iostream>
#include <string>
using namespace std;

class Book
{
private:
    string title;
    string author;
    int year;
    int id;

public:
    Book()
    {
        title = "";
        author = "";
        year = 0;
        id = 0;
    }

    Book(string title, string author, int year, int id)
    {
        this->title = title;
        this->author = author;
        this->year = year;
        this->id = id;
    }

    void addBook()
    {
        cin.ignore();
        cout << "Enter book Title : ";
        getline(cin, title);
        cout << "Enter author : ";
        getline(cin, author);
        cout << "Enter year : ";
        cin >> year;
        cout << "Enter id : ";
        cin >> id;

        Book(title, author, year, id);
    }

    void display()
    {
        cout << "Book Name : " << title << ", Author : " << author << ", Year : " << year << endl;
    }

    string gettitle()
    {
        return title;
    }
};

int main()
{
    Book books[10];
    int count = 0;
    int choice;

    do
    {
        cout << "\n--- Librabry Management System ---\n";
        cout << "\n Choose option! \n\n";
        cout << " 1.Add new book\n 2.Display all Books\n 3.See book by Title\n 4.End it\n ";
        cout << "Enter your Choice : ";
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            if (count <= 10)
            {
                books[count].addBook();
                count++;
                break;
            }
            else
            {
                cout << "Strorage full!";
            }
        }

        case 2:
            for (int i = 0; i < count; i++)
            {
                books[i].display();
            }
            break;
        case 3:
        {
            bool found = false;
            string name;
            cin.ignore();
            cout << "Enter book Title : ";
            getline(cin, name);

            for (int i = 0; i < count; i++)
            {
                if (books[i].gettitle() == name)
                {
                    books[i].display();
                    found = true;
                    break;
                }
            }
            if (!found)
            {
                cout << "Book not Found!";
            }
            break;
        }

        case 4:
            cout << "Exiting...\n";
            break;
        default:
            cout << "Invalid choice!\n";
        }
    } while (choice != 4);

    return 0;
}