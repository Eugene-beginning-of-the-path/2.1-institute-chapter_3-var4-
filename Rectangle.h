#define Rectangle_H //������ #pragma once
#ifdef Rectangle_H  //������ #pragma once

#pragma once
#include <iostream>
#include <cassert> //���������� ��� assert()
#include "Pair.h"

class Rectangle : public Pair
{
    int m_length; //������ �������������� 
    int m_width;  //������ �������������� 
public:
    Rectangle(int lenght = 6, int width = 7) : m_length(lenght), m_width(width) //����������� �� ��������� � ����������� �� ��������� + ������� �������������
    {
        assert(lenght > 0 && width > 0 && "lenght or width <= 0"); // ���� lenght < 0 ��� width < 0 - �������� ���������� �.�. �������� �����������
    }

    Rectangle(int lenght, int width, int value1 = 4, int value2 = 5) : Pair(value1, value2), m_length(lenght), m_width(width)
    {//����������� �� ��������� � ����������� �� ��������� + ������� ������������� + ������� ������������ �� ������� ������: Pair(int value1 = 4, int value2 = 5)
        assert(lenght > 0 && width > 0 && "lenght or width <= 0"); // ���� lenght < 0 ��� width < 0 - �������� ���������� �.�. �������� �����������
    }

    void setm_length(int length) //������� ������� - ������
    {
        if (length)  //���� ����� ��������������� �������� ��� m_length>0 - ��� ��, ����� ��������� �����, ��� ����� �������� �� ��������(�������� �������)
            m_length = length;
        else
            std::cout << "your length <= 0 - the value was not added";
    }

    void setm_width(int width) //������� ������� - ������
    {
        if (width) //���� ����� ��������������� �������� ��� m_width>0 - ��� ��, ����� ��������� �����, ��� ����� �������� �� ��������(�������� �������)
            m_width = width;
        else
            std::cout << "your width <= 0 - the value was not added";
    }

    int perimeter() //������� ���������� ��������� �������������� � ������ m_length � m_width
    {
        return getm_length() * 2 + getm_width() * 2;
    }

    int area() //������� ���������� ������� �������������� � ������ m_length � m_width
    {
        return getm_length() * getm_width();
    }

    int getm_length() { return m_length; } //������� ������� - ������
    int getm_width() { return m_width; }   //������� ������� - ������
};

#endif //������ #pragma once