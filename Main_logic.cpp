#include <iostream>
#include "Pair.h"
#include "Rectangle.h"

void print_Pair(Pair& pair);
void print_Rectangle(Rectangle& rectangle);

int main_logic()
{
    // Производится полное тестирование создания объекта класса с различными случаями инициализации(в задании так) //
    Pair pair1(3, 5);
    print_Pair(pair1);

    Pair pair2(7);
    print_Pair(pair2);

    Pair pair3;
    print_Pair(pair3);

    Rectangle rectangle1(3, 5, 8, 9);
    print_Rectangle(rectangle1);

    Rectangle rectangle2(7, 8, 3);
    print_Rectangle(rectangle2);

    Rectangle rectangle3;
    print_Rectangle(rectangle3);

    // Call Assert // В случаях ниже - программа прервется из-за assert() -- тоже необходимо будет показать "ему" т.к. входит в понятие задания "тест создания"
    //Pair pair1(3, 0);
    //Pair pair1(0, 5);
    //Rectangle rectangle1(0, 5, 8, 9);
    //Rectangle rectangle1(3, 0, 8, 9);
    return 0;
}

void print_Pair(Pair& pair) //функция вывода объектов класса Pair
{
    static int i = 1;
    std::cout << "pair" << i++ << " multiplication= " << pair.multiplication() << std::endl << std::endl;
}

void print_Rectangle(Rectangle& rectangle) //функция вывода объектов класса Rectangle
{
    static int i = 1;
    std::cout << "rectangle" << i++ << " perimeter= " << rectangle.perimeter() << "| area= " << rectangle.area() << std::endl << std::endl;
}