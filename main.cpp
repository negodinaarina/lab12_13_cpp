#include <iostream>
#include <vector>
#include "human.h"
#include "teacher.h"
#include "student.h"
int main()
{
    Human* staff[5];
    int n = 0;
    string choice = "y";
    while(choice == "y"){
        cout << "Choose teacher or student(t/s):" << endl;
        cin >> choice;
        if(choice=="t"){
            staff[n] = new Teacher;
           }
        else if(choice=="s"){
            staff[n] = new Student;
        }
        staff[n++]->get_data();
        cout << "Continue(y/n)?";
        cin >> choice;
    }
    for(int j=0; j<n; j++)
        staff[j]->print_data();
    cout << endl;
    return 0;
}