#include <bits/stdc++.h>
using namespace std;

class User
{
private:
    string name;
    int age;
    string AADHAR_ID;
    string email;
    string phoneNum;

public:
    User(string name, int age, string AADHAR_ID, string email, string phoneNum)
    {
        this->name = name;
        this->age = age;
        this->AADHAR_ID = AADHAR_ID;
        this->email = email;
        this->phoneNum = phoneNum;
    }

    void getInfo()
    {
        cout << name << " " << age << " " << AADHAR_ID << " " << email << " " << phoneNum << endl;
    }
};