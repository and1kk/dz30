#ifndef CONTACT_H
#define CONTACT_H

#include <iostream>
#include <string>

class Contact {
public:
    virtual ~Contact() = default;
    virtual void show() const = 0;
};

#endif // CONTACT_H
