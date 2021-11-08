#pragma once

class Gpio
{
private:
        int _pin;
public:
       Gpio(int pin,int mode);
       void on();
       void off();
       void toggle();
       bool T_on();
       bool T_off(); 
       void Blink(int Delay);
};





