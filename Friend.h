#ifndef FRIEND_H
#define FRIEND_H

#include "Contact.h"

class Friend : public Contact {
private:
    std::string surname;
    std::string address;
    std::string phoneNumber;
    std::string birthDate;
public:
    Friend(const std::string& surname, const std::string& address, const std::string& phoneNumber, const std::string& birthDate);
    void show() const override;
};

#endif // FRIEND_H
