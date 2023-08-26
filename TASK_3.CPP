#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Contact {
public:
    string name;
    string phoneNumber;
    string email;

    /*Contact(const string& n, const string& p, const string& e)
        : name(n), phoneNumber(p), email(e) {}*/

    Contact(const string& n, const string& p, const string& e) {
    name = n;
    phoneNumber = p;
    email = e;
}
};

class ContactManager {

private:
    vector<Contact> contacts;

public:
    void addContact(const Contact& contact) {
        contacts.push_back(contact);
        cout << "Contact added successfully!" << endl;
    }

    void viewContacts() {
        if (contacts.empty()) {
            cout << "No contacts available." << endl;
            return;
        }

        cout << "Contacts List:" << endl;
        for (const auto& contact : contacts) {
            cout << "Name: " << contact.name << endl;
            cout << "Phone: " << contact.phoneNumber << endl;
            cout << "Email: " << contact.email << endl << endl;
        }
    }
};

int main() {
    ContactManager contactManager;

    while (true) {
        cout << "Menu:" << endl;
        cout << "1. Add Contact" << endl;
        cout << "2. View Contacts" << endl;
        cout << "3. Exit" << endl;
        cout << "Select an option: ";

        int choice;
        cin >> choice;

        if (choice == 1) {
            string name, phoneNumber, email;
            cin.ignore(); // FOR REMOVING SKIPNESS
            cout << "Enter name: ";
            getline(cin, name);
            cout << "Enter phone number: ";
            getline(cin, phoneNumber);
            cout << "Enter email: ";
            getline(cin, email);

            Contact newContact(name, phoneNumber, email);
            
            contactManager.addContact(newContact);
        } else if (choice == 2) {
            contactManager.viewContacts();
        } else if (choice == 3) {
            break;
        } else {
            cout << "Invalid choice. Please select a valid option." << endl;
        }
    }

    return 0;
}