#include "FiguraPlaska.h"

std::ostream& operator<<(std::ostream& os, const FiguraPlaska& figura) {
    figura.Wypisz(os);
    return os;
}
void FiguraPlaska::Nazwa() const {
    cout << "Figura plaska" << endl;
}
FiguraPlaska::~FiguraPlaska() {
}

