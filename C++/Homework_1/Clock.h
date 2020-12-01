//
// Created by Bi Nguyen on 10/15/20.
//

#ifndef HOMEWORK_1_CLOCK_H
#define HOMEWORK_1_CLOCK_H


#include <chrono>
#include <ostream>

//It is assumed that when a clock object is instantiated, the timer will start.
//When it the user wants to
class Clock {
private:
    std::chrono::high_resolution_clock::time_point start;

public:
    //Let the compile have a default no args constructor

    //methods
    void Reset();
    double currentTime();
    friend std::ostream& operator<<(std::ostream &out, Clock& time);



};


#endif //HOMEWORK_1_CLOCK_H
