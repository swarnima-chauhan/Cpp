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

    void input()
    {
        cin.ignore();
        cout << "Enter Book ID: ";
        cin >> id;
        cin.ignore();
        cout << "Enter Title: ";
        getline(cin, title);
        cout << "Enter Author: ";
        getline(cin, author);
        cout << "Enter Year of Publication: ";
        cin >> year;
    }

    void display()
    {
        cout << "ID: " << id
             << " | Title: " << title
             << " | Author: " << author
             << " | Year: " << year << endl;
    }

    string getTitle()
    {
        return title;
    }
};

int main()
{
    Book library[50];
    int count = 0;
    int choice;

    do
    {
        cout << "\n📚 --- Library Management System ---\n";
        cout << "1. Add Book\n2. Display All Books\n3. Search by Title\n4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            if (count < 50)
            {
                library[count].input();
                count++;
            }
            else
            {
                cout << "Library is full!\n";
            }
            break;
        case 2:
            if (count == 0)
                cout << "No books in the library.\n";
            else
                for (int i = 0; i < count; i++)
                    library[i].display();
            break;
        case 3:
        {
            cin.ignore();
            string searchTitle;
            cout << "Enter book title to search: ";
            getline(cin, searchTitle);
            bool found = false;
            for (int i = 0; i < count; i++)
            {
                if (library[i].getTitle() == searchTitle)
                {
                    library[i].display();
                    found = true;
                    break;
                }
            }
            if (!found)
            {
                cout << "Book not found.\n";
            }
            break;
        }
        case 4:
            cout << "Goodbye!\n";
            break;
        default:
            cout << "Invalid choice. Try again.\n";
        }

    } while (choice != 4);

    return 0;
}
