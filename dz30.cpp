#include "ContactManager.h"
#include "Person.h"
#include "Colleague.h"
#include "Friend.h"
#include <iostream>

void displayMenu() {
    std::cout << "1. Add Person\n";
    std::cout << "2. Add Colleague\n";
    std::cout << "3. Add Friend\n";
    std::cout << "4. Remove Contact\n";
    std::cout << "5. Show Contacts\n";
    std::cout << "6. Exit\n";
}

int main() {
    ContactManager manager;
    int choice;

    do {
        displayMenu();
        std::cin >> choice;

        switch (choice) {
        case 1: {
            std::string surname, address, phoneNumber;
            std::cout << "Enter surname: ";
            std::cin >> surname;
            std::cout << "Enter address: ";
            std::cin >> address;
            std::cout << "Enter phone number: ";
            std::cin >> phoneNumber;
            manager.addContact(std::make_shared<Person>(surname, address, phoneNumber));
            break;
        }
        case 2: {
            std::string organization, address, phoneNumber, fax, contactPerson;
            std::cout << "Enter organization: ";
            std::cin >> organization;
            std::cout << "Enter address: ";
            std::cin >> address;
            std::cout << "Enter phone number: ";
            std::cin >> phoneNumber;
            std::cout << "Enter fax: ";
            std::cin >> fax;
            std::cout << "Enter contact person: ";
            std::cin >> contactPerson;
            manager.addContact(std::make_shared<Colleague>(organization, address, phoneNumber, fax, contactPerson));
            break;
        }
        case 3: {
            std::string surname, address, phoneNumber, birthDate;
            std::cout << "Enter surname: ";
            std::cin >> surname;
            std::cout << "Enter address: ";
            std::cin >> address;
            std::cout << "Enter phone number: ";
            std::cin >> phoneNumber;
            std::cout << "Enter birth date: ";
            std::cin >> birthDate;
            manager.addContact(std::make_shared<Friend>(surname, address, phoneNumber, birthDate));
            break;
        }
        case 4: {
            size_t index;
            std::cout << "Enter index to remove: ";
            std::cin >> index;
            manager.removeContact(index);
            break;
        }
        case 5:
            manager.showContacts();
            break;
        }
    } while (choice != 6);

    return 0;
}
