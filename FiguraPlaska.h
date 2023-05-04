#ifndef LAB_1_FIGURAPLASKA_H
#define LAB_1_FIGURAPLASKA_H

#include <iostream>
using namespace std;

class FiguraPlaska {
protected:
    virtual void Wypisz(std::ostream& out) const = 0;
    friend std::ostream& operator<<(std::ostream& os, const FiguraPlaska&
    figura);
public:
    virtual double Pole() const = 0;
    virtual double Obwod() const = 0;
    virtual void Nazwa() const = 0;
    virtual ~FiguraPlaska();
};

#endif //LAB_1_FIGURAPLASKA_H
