#include "Kolo.h"
#include <iostream>

using namespace std;
Kolo::Kolo(double r)
        : r(r)
{
    cout << "Konstruktor Kola(" << r << ")" << endl;
}
double Kolo::GetR() const {
    return this->r;
}
void Kolo::SetR(double r) {
    this->r = r;
}
double Kolo::Obwod() const{
    return 2*PI*this->r;
}
double Kolo::Pole() const {
    return PI*pow(this->r, 2);
}
void Kolo::Wypisz(std::ostream& out) const {
    cout << "Kolo o promieniu " << this->r << ", obwodzie " << this->Obwod() << " i polu " << this->Pole() << endl;
}
void Kolo::Nazwa() const {
    cout << "Kolo" << endl;
}
Kolo::~Kolo() {
    cout << "Destruktor Kola o promieniu " << this->r << ", obwodzie " << this->Obwod() << " i polu " << this->Pole() << endl;
}
