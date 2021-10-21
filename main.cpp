#include<iostream>
#include"Rectangle.h"
using namespace std;

int main()
{
    Rectangle Window(5,9);
    std::cout<<"The perimeter of this window is:"<<Window.getPerimeter()<< endl;
    std::cout<<"The size of this window is:"<<Window.getSize()<< endl;
}