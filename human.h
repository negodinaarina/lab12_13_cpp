#include <string>
#include <sstream>
#pragma once
using namespace std;

class Human{
public:
    virtual void get_data(){
        cout << "Enter last_name: " << endl;
        cin >> last_name;
        cout << "Enter name: " << endl;
        cin >> name;
        cout << "Enter middle_name: " << endl;
        cin >> middle_name;
    }
    virtual void print_data(){
        cout << last_name << " " << name << " " << middle_name << endl;
    }
    string get_full_name(){
        ostringstream full_name;
        full_name << this->last_name << " " << this->name << " " << this->middle_name;
        return full_name.str();
    }
private:
    string name, last_name, middle_name;
};