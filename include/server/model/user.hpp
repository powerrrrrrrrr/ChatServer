#ifndef USER_H
#define USER_H

#include <string>
using namespace std;

//User表的ORM类，映射表
class User
{
public:
    User(int _id = -1, string _name = "", string _password = "", string _state = "offline")
    {
        id = _id;
        name = _name;
        password = _password;
        state = _state;
    }

    void setId(int _id) { id = _id; };
    void setName(string _name) { name = _name; };
    void setPassword(string _password) { password = _password; };
    void setState(string _state) { state = _state; };

    int getId() { return id; };
    string getName() { return name; };
    string getPassword() { return password; };
    string getState() { return state; };

private:
    int id;
    string name;
    string password;
    string state;
};

#endif