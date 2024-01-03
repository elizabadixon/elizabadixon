// Honor Pledge:
//
// I pledge that I have neither given nor
// received any help on this assignment.
//
// eadixon
#include <string>

class Car
{
    public:
        Car(); //default constructor
        Car(std::string name, int speed, int control, int lapN); //creates instance of a Car,, regular constructor
        ~Car(); //deconstructor
       
        //accessor methods
        std::string getName();
        int getSpeed();
        int getControl();
        int getLapNumber();
        
        void setName(std::string na);
        void setSpeed(int sp);
        void setControl(int co);
        void setLapNumber(int ln);
        
        int simulateRace();

    private:
        std::string name_;
        int speed_;
        int control_;
        int lapNumber_;
};