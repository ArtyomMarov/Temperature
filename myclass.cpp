#include "myclass.h"
#include <cmath>

MyClass::MyClass()
{

}

double MyClass::fahrenheitToCelsius(double fahrenheit)
{
    double celsius;
    celsius = (fahrenheit - 32) * 5/9;
    celsius = round(celsius * 10)/10;
    return celsius;
}
