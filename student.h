#include "human.h"
#include <string>
#include <vector>
#include <iostream>
using namespace std;

class Student: public Human{
public:

    float get_average_score(){
        unsigned int count_scores = this->scores.size();
        unsigned int sum_scores = 0;
        for(int i=0; i<count_scores; i++){
            sum_scores += this->scores[i];
        }
        return (float) sum_scores/(float) count_scores;
    }
    void get_data(){
        Human::get_data();
        cout << "Enter 5 scores: ";
        int n;
        for(int i=0; i < 5; i++){
            cin >> n;
            scores.push_back(n);
        }
    }
    void print_data(){
        Human::print_data();
        cout << "Average score: " << get_average_score();
    }
private:
    vector<int> scores;
};
