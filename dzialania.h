#ifndef LAB_1_DZIALANIA_H
#define LAB_1_DZIALANIA_H

#include "FiguraPlaska.h"
#include "Prostokat.h"
#include "Kolo.h"
#include "Trojkat.h"

#define LICZBA_FIGUR 9

void definiujObiekty(FiguraPlaska** figuryPlaskie) {
    figuryPlaskie[0] = new Prostokat(2,3);
    figuryPlaskie[1] = new Prostokat(4,7);
    figuryPlaskie[2] = new Prostokat(10,3);
    figuryPlaskie[3] = new Kolo(4);
    figuryPlaskie[4] = new Kolo(8);
    figuryPlaskie[5] = new Kolo(12);
    figuryPlaskie[6] = new Trojkat(5, 3, 4);
    figuryPlaskie[7] = new Trojkat(7,2,9);
    figuryPlaskie[8] = new Trojkat(1,4,3);
}

void usunObiekty(FiguraPlaska** figuryPlaskie) {
    for(int i = 0; i < LICZBA_FIGUR; i++) {
        delete[] figuryPlaskie[i];
    }
    delete[] figuryPlaskie;
}

void prezentujMetody(FiguraPlaska** figuryPlaskie) {
    ((Prostokat*)figuryPlaskie[0])->SetA(10);
    ((Prostokat*)figuryPlaskie[0])->SetB(7);
    ((Prostokat*)figuryPlaskie[0])->GetA();
    ((Prostokat*)figuryPlaskie[0])->GetB();
    figuryPlaskie[1]->Pole();
    figuryPlaskie[1]->Obwod();
    figuryPlaskie[2]->Nazwa();

    ((Kolo*)figuryPlaskie[3])->SetR(5);
    ((Kolo*)figuryPlaskie[3])->GetR();
    figuryPlaskie[4]->Pole();
    figuryPlaskie[4]->Obwod();
    figuryPlaskie[5]->Nazwa();

    ((Trojkat*)figuryPlaskie[6])->SetA(2);
    ((Trojkat*)figuryPlaskie[6])->SetB(10);
    ((Trojkat*)figuryPlaskie[6])->SetC(7);
    ((Trojkat*)figuryPlaskie[6])->GetA();
    ((Trojkat*)figuryPlaskie[6])->GetB();
    ((Trojkat*)figuryPlaskie[6])->GetC();
    figuryPlaskie[7]->Pole();
    figuryPlaskie[7]->Obwod();
    figuryPlaskie[8]->Nazwa();
    ((Trojkat*)figuryPlaskie[8])->Nazwa(10);
}


#endif //LAB_1_DZIALANIA_H
