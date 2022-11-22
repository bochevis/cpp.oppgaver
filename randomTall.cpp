// randomTall.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
   
    srand(time(0));



    cout << "Random numbers between 1 and 100:" << endl;



    for (int x = 0; x < 1; x++)



        cout << 1 + (rand() % 100) << "\n";



    return 0;

}


