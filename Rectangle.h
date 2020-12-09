#define Rectangle_H //замена #pragma once
#ifdef Rectangle_H  //замена #pragma once

#pragma once
#include <iostream>
#include <cassert> //библиотека для assert()
#include "Pair.h"

class Rectangle : public Pair
{
    int m_length; //высота прямоугольника 
    int m_width;  //ширина прямоугольника 
public:
    Rectangle(int lenght = 6, int width = 7) : m_length(lenght), m_width(width) //конструктор по умолчанию с параметрами по умолчанию + списком инициализации
    {
        assert(lenght > 0 && width > 0 && "lenght or width <= 0"); // если lenght < 0 или width < 0 - прервтся выполнение т.к. значения недопустимы
    }

    Rectangle(int lenght, int width, int value1 = 4, int value2 = 5) : Pair(value1, value2), m_length(lenght), m_width(width)
    {//конструктор по умолчанию с параметрами по умолчанию + списком инициализации + вызовом конструктора из базовго класса: Pair(int value1 = 4, int value2 = 5)
        assert(lenght > 0 && width > 0 && "lenght or width <= 0"); // если lenght < 0 или width < 0 - прервтся выполнение т.к. значения недопустимы
    }

    void setm_length(int length) //функция дуступа - сеттер
    {
        if (length)  //если новое устанавливаемое значение для m_length>0 - все ОК, иначе выведится текст, что такое значение не подходит(остается прежним)
            m_length = length;
        else
            std::cout << "your length <= 0 - the value was not added";
    }

    void setm_width(int width) //функция дуступа - сеттер
    {
        if (width) //если новое устанавливаемое значение для m_width>0 - все ОК, иначе выведится текст, что такое значение не подходит(остается прежним)
            m_width = width;
        else
            std::cout << "your width <= 0 - the value was not added";
    }

    int perimeter() //функция нахождения периметра прямоугольника с полями m_length и m_width
    {
        return getm_length() * 2 + getm_width() * 2;
    }

    int area() //функция нахождения площади прямоугольника с полями m_length и m_width
    {
        return getm_length() * getm_width();
    }

    int getm_length() { return m_length; } //функция дуступа - геттер
    int getm_width() { return m_width; }   //функция дуступа - геттер
};

#endif //замена #pragma once