#ifndef GROUP_H
#define GROUP_H

#include <string>
#include <vector>
#include "groupuser.hpp"
using namespace std;

class Group
{
public:
    Group(int _id = -1, string _name = "", string _desc = "")
    {
        id = _id;
        name = _name;
        desc = _desc;
    }

    void setId(int _id) { id = _id; }
    void setName(string _name) { name = _name; }
    void setDesc(string _desc) { desc = _desc; }

    int getId() { return id; }
    string getName() { return name; }
    string getDesc() { return desc; }
    vector<GroupUser> &getUser() { return users; }

private:
    int id;
    string name;
    string desc;
    vector<GroupUser> users;
};

#endif