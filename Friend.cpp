#include "Friend.h"

Friend::Friend(const std::string& surname, const std::string& address, const std::string& phoneNumber, const std::string& birthDate)
    : surname(surname), address(address), phoneNumber(phoneNumber), birthDate(birthDate) {}

void Friend::show() const {
    std::cout << "Friend: " << surname << ", Address: " << address << ", Phone: " << phoneNumber << ", Birth Date: " << birthDate << std::endl;
}
