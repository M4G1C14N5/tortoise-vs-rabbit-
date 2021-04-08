/*Author: Thomas Tsangou
 * course: CSCI-135
 * Instructor: 
 * Assingment:
 * description: 
 */
#pragma once

#ifndef COMPETITION_H
#define COMPETITION_H
#include "Hare.h"
#include "Tortoise.h"
#include "Road.h"
class Competition {
public:
    Competition();
    Competition(Hare *rabbit, Tortoise *tor, int length);
    ~Competition();

    void start();


private:
    Hare* rabbit;
    Tortoise* tor;
    Road* rd;
};
#endif
