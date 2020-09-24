//
// Created by j.mailly on 23/09/2020.
//

#ifndef STARSWARS_YODA_H
#define STARSWARS_YODA_H


#include "Rebel.h"
#include "Alliance.h"

class Alliance;
class Hors_la_loi;
class Yoda : public Rebel {
private:
    int nbrebel;
public:
    Yoda(const std::string &nom);
    void coffrer(Hors_la_loi &he)  override;
    void telepathie(int recompense, Empire &nom, Alliance &al);
    const void presentation()const override;

    int getNbrebel() const;
    const std::string getNom()const;
    void setNbrebel(int nbrebel);
};


#endif //STARSWARS_YODA_H
