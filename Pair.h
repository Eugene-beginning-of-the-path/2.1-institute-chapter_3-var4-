#ifndef Pair_H //замена #pragma once
#define Pair_H //замена #pragma once

#include <iostream>
#include <cassert> //библиотека для assert()

class Pair
{
    int m_value1;
    int m_value2;
public:
    Pair(int value1 = 4, int value2 = 5) : m_value1(value1), m_value2(value2) //конструктор по умолчанию с параметрами по умолчанию + списком инициализации
    {
        assert(value1 != 0 && value2 != 0 && "value1 or value2 == 0"); // если value1 == 0 или value2 == 0 - прервтся выполнение т.к. значения недопустимы
    }

    int multiplication() { return getm_value1() * getm_value2(); } //функция перемножения двух чисел

    void setm_value1(int value) { m_value1 = value; } //функция дуступа - сеттер


    void setm_value2(int value) { m_value2 = value; } //функция дуступа - сеттер
    

    int getm_value1() { return m_value1; } //функция дуступа - геттер
    int getm_value2() { return m_value2; } //функция дуступа - геттер

};

#endif //замена #pragma once