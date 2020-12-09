#ifndef Pair_H //������ #pragma once
#define Pair_H //������ #pragma once

#include <iostream>
#include <cassert> //���������� ��� assert()

class Pair
{
    int m_value1;
    int m_value2;
public:
    Pair(int value1 = 4, int value2 = 5) : m_value1(value1), m_value2(value2) //����������� �� ��������� � ����������� �� ��������� + ������� �������������
    {
        assert(value1 != 0 && value2 != 0 && "value1 or value2 == 0"); // ���� value1 == 0 ��� value2 == 0 - �������� ���������� �.�. �������� �����������
    }

    int multiplication() { return getm_value1() * getm_value2(); } //������� ������������ ���� �����

    void setm_value1(int value) { m_value1 = value; } //������� ������� - ������


    void setm_value2(int value) { m_value2 = value; } //������� ������� - ������
    

    int getm_value1() { return m_value1; } //������� ������� - ������
    int getm_value2() { return m_value2; } //������� ������� - ������

};

#endif //������ #pragma once