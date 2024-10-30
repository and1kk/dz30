#ifndef PERSON_H
#define PERSON_H

#include "Contact.h"

class Person : public Contact {
private:
    std::string surname;
    std::string address;
    std::string phoneNumber;
public:
    Person(const std::string& surname, const std::string& address, const std::string& phoneNumber);
    void show() const override;
};

#endif // PERSON_H
