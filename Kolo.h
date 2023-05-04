#ifndef LAB_1_KOLO_H
#define LAB_1_KOLO_H

#include "FiguraPlaska.h"
#define PI       3.14159265358979323846

class Kolo : public FiguraPlaska {
    double r;
protected:
    void Wypisz(std::ostream& out) const override;
public:
    Kolo(double r);
    double GetR() const;
    void SetR(double a);
    double Obwod() const override;
    double Pole() const override;
    void Nazwa() const override;

    ~Kolo() override;
private:
};


#endif //LAB_1_KOLO_H
