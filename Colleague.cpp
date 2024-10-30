#include "Colleague.h"

Colleague::Colleague(const std::string& organization, const std::string& address, const std::string& phoneNumber, const std::string& fax, const std::string& contactPerson)
    : organization(organization), address(address), phoneNumber(phoneNumber), fax(fax), contactPerson(contactPerson) {}

void Colleague::show() const {
    std::cout << "Colleague: " << organization << ", Address: " << address << ", Phone: " << phoneNumber << ", Fax: " << fax << ", Contact Person: " << contactPerson << std::endl;
}
