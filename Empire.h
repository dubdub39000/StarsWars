//
// Created by j.mailly on 21/09/2020.
//

#ifndef STARSWARS_EMPIRE_H
#define STARSWARS_EMPIRE_H


#include "Humanoide.h"
#include "Princesse.h"
#include "Rebel.h"

class Rebel;
class Princesse;
class Empire: public Humanoide, Hors_la_loi {
private:
    std::string rang;
    int nbprincesse;
    bool etat;
    int recompense;
public:
    Empire(const std::string &nom);
/***********methode************/
    bool prison();
    void kidnapper(Princesse &princesse);
    void emprisonner(Rebel &rebel);
    const void presentation()const  override;
    const std::string getNom() const override;

    int getRecompense() const;
};


#endif //STARSWARS_EMPIRE_H
