#include "Distance.h"
#include <iostream>
Distance::Distance()
{
    feet=0;
    inches=0;
}
Distance::Distance(int ft,float inch)
{
    feet=ft;
    inches=inch;
}
void Distance::getdata()
{
    std::cout<<"Enter Feet and inches respectively: ";
    std::cin>>feet>>inches;
}

void Distance::display()
{
    std::cout<<"Feet : "<<feet<<std::endl;
    std::cout <<"Inches :"<<inches;
}

Distance::~Distance()
{
}
