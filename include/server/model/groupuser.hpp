#ifndef GROUPUSER_H
#define GROUPUSER_H

#include "user.hpp"


class GroupUser : public User
{
public:
    void setRole(string _role) { role = _role; }
    string getRole() { return role; }

private:
    string role;
};

#endif