#include <Arduino.h>
#include "gpio-tugas-library.h"

        Gpio::Gpio(int pin,int mode = OUTPUT){
                _pin = pin;
                pinMode(_pin,mode);
        }
        void Gpio::on(){
                digitalWrite(_pin,HIGH);
        }
        void Gpio::off(){
                digitalWrite(_pin,LOW);
        }
        bool Gpio::T_on(){
                if(digitalRead(_pin)==HIGH){
                        return true;
                }
                else{
                        return false;
                }
        }
        bool Gpio::T_off(){
                return !T_on();
        }
        void Gpio::toggle(){
                if (T_on())
                {
                    T_off();
                }
                else{
                    T_on();
                }
                   
        }
        void Gpio::Blink(int Delay){
                digitalWrite(_pin,HIGH);
                delay(Delay);
                digitalWrite(_pin,LOW);
                delay(Delay);
        }