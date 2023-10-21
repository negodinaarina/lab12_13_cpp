#include "human.h"
#include <string>
#include <iostream>
using namespace std;

class Teacher : public Human{
public:

    unsigned int get_work_time()
    {
        return this->work_time;
    }
    void get_data(){
        Human::get_data();
        cout << "Enter work hours: ";
        cin >> work_time;
    }

    void print_data(){
        Human::print_data();
        cout << "Work hours: " << work_time << endl;
    }
private:
    unsigned int work_time;
};