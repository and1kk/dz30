#ifndef COLLEAGUE_H
#define COLLEAGUE_H

#include "Contact.h"

class Colleague : public Contact {
private:
    std::string organization;
    std::string address;
    std::string phoneNumber;
    std::string fax;
    std::string contactPerson;
public:
    Colleague(const std::string& organization, const std::string& address, const std::string& phoneNumber, const std::string& fax, const std::string& contactPerson);
    void show() const override;
};

#endif // COLLEAGUE_H
