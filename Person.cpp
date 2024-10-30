#include "Person.h"

Person::Person(const std::string& surname, const std::string& address, const std::string& phoneNumber)
    : surname(surname), address(address), phoneNumber(phoneNumber) {}

void Person::show() const {
    std::cout << "Person: " << surname << ", Address: " << address << ", Phone: " << phoneNumber << std::endl;
}
