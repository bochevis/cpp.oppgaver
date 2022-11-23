// oppgave4.1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    float km;
    float miles;

    std::cout << "Skriv inn antall km du onsker aa konvertere til miles: ";
    std::cin >> km;
    std::cout << "Det blir: " << km * 0.62 << " miles";
    
}

