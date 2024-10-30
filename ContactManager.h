#ifndef CONTACTMANAGER_H
#define CONTACTMANAGER_H

#include "Contact.h"
#include <vector>
#include <memory>

class ContactManager {
private:
    std::vector<std::shared_ptr<Contact>> contacts;
public:
    void addContact(std::shared_ptr<Contact> contact);
    void removeContact(size_t index);
    void showContacts() const;
    // Додайте інші методи для редагування та пошуку
};

#endif // CONTACTMANAGER_H
