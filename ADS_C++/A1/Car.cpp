// Honor Pledge:
//
// I pledge that I have neither given nor
// received any help on this assignment.
//
// eadixon

#include "Car.h"

Car::Car() //implementation of default constructor
{
   
}

Car::Car(std::string na, int sp, int co, int ln) //implementation of regular constructor
{
    name_ = na;
    speed_ = sp;
    control_ = co;
    lapNumber_ = ln;
}

Car::~Car() //destructor
{

}

int Car::simulateRace()
{
    speed_ = getSpeed();
    control_ = getControl();
    lapNumber_ = getLapNumber();
    int random = (rand() % 10) + 1;
    int divided = 0;
    int lapTrack = 0;   

    if(control_ > 5)
    {
        divided = control_/random;
        lapTrack = divided + speed_;
        lapNumber_ = lapNumber_ + lapTrack;

        return lapNumber_;
    }
    else
    {
        lapNumber_ = lapNumber_ + speed_;
        return lapNumber_;
    }
}

void Car::setName(std::string na) //
{
    name_ = na;
}
std::string Car::getName() //accessor methods
{
    return name_;
}

void Car::setSpeed(int sp) //
{
    speed_ = sp;
}
int Car::getSpeed()
{
    return speed_;
}

void Car::setControl(int co) //
{
    control_ = co;
}
int Car::getControl()
{
    return control_;
}

void Car::setLapNumber(int ln)
{
    lapNumber_ = ln;
}
int Car::getLapNumber()
{
    return lapNumber_;
}

// void Car::printInfo()
// {
//     std::cout <<  ("name: "+name_) << std::endl;
//     std::cout << ("speed: "+speed_) << std::endl;
//     std::cout << ("control:" +control_) << std::endl;
// }