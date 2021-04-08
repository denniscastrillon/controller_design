#ifndef LM35_SENSOR_H
#define LM35_SENSOR_H
#include <Arduino.h>
#include <sensors/analog_sensor.h>


class Lm35Sensor : public AnalogSensor {
    public:
        Lm35Sensor(uint8_t id, uint8_t pin, int factor):AnalogSensor(id,pin) {
            this->factor = factor;
        };
    private:
        int factor;
        uint8_t measure;
        int modificate();
        int value;



};

int Lm35Sensor::modificate() {
    // value = AnalogSensor::getValue;
    
}

#endif