//
// Created by Bi Nguyen on 10/15/20.
//

#include "Clock.h"



double Clock::currentTime() {
    return std::chrono::duration<double, std::micro>(std::chrono::high_resolution_clock::now() - start).count();
}

std::ostream &operator<<(std::ostream &out, Clock &time) {
    out << "CPU time: "<<time.currentTime() << " microseconds";
    return out;
}

void Clock::Reset() {
    start = std::chrono::high_resolution_clock::now();
}

