// 4 funksjoner.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

//Her koverterer km - miles
void km(){
    float km;
    cout << "Hvor mange km ønsker du å konvertere til Miles: ";
    cin >> km;
    cout << km << " KM blir til: " << km * 0.621371192 << " Miles \n";
    cout << "-------------------------------------------------------- \n\n\n\n";
}

//Her konverterer miles - km
void miles(){
    float miles;
    cout << "Hvor mange Miles ønsker du å konvertere til Km: ";
    cin >> miles;
    cout << miles << " Miles blir til: " << miles * 1.621371192 << " Km \n";
    cout << "-------------------------------------------------------- \n\n\n\n";
}

//Her konverterer celcius til fahrenheit
void celcius(){
    float celcius;
    cout << "Hvor mange Celcius ønsker du å konvertere til Fahrenheit: ";
    cin >> celcius;
    cout << celcius << " Celcius blir til: " << celcius * (9 / 5) + 32 << " Fahrenheit \n";
    cout << "-------------------------------------------------------- \n\n\n\n";
}

//Her konverterer fahrenheit til celcius
void fahrenheit(){
    float fahrenheit;
    cout << "Hvor mange Fahrenheit ønsker du å konvertere til Celcius: ";
    cin >> fahrenheit;
    cout << fahrenheit << " Fahrenheit blir til: " << 5 / 9 * (fahrenheit - 32) << " Celcius \n";
    cout << "-------------------------------------------------------- \n\n\n\n";
}

//Her lager jeg hele menyen i void, og senere setter menyet til utrykk i main.
void meny() {
    int menyvalg;
    do
    {
        //Her har vi meny valget
        cout << "Velkommen til Bo's Koverterings Kalkulator \n";
        cout << "Unnenfor har du 4 forskjellige valg. Skriv inn nummeret som tilsvarer koverteringsfanendu ønsker å kjøre: \n \n";

        cout << "1: Km - Miles \n";
        cout << "2: Miles - Km \n";
        cout << "3: Celcius - Fahrenheit \n";
        cout << "4: Fahrenheit - Celcius \n";
        cout << "5: Quit\n\n";

        cin >> menyvalg;
        cout << "\n\n";

        switch (menyvalg) {
        case 1:
            km();
            break;
        case 2:
            miles();
            break;
        case 3:
            celcius();
            break;
        case 4:
            fahrenheit();
            break;
        case 5:
            cout << "hade bra";
            break;
        }
    } while (menyvalg != 5);
}

int main() {       

    meny();
   
}




