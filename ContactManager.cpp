#include "ContactManager.h"

void ContactManager::addContact(std::shared_ptr<Contact> contact) {
    contacts.push_back(contact);
}

void ContactManager::removeContact(size_t index) {
    if (index < contacts.size()) {
        contacts.erase(contacts.begin() + index);
    }
}

void ContactManager::showContacts() const {
    for (const auto& contact : contacts) {
        contact->show();
    }
}
