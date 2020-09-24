//
// Created by j.mailly on 23/09/2020.
//

#ifndef STARSWARS_TRAITRE_H
#define STARSWARS_TRAITRE_H


#include "Empire.h"
#include "Hors_la_loi.h"


class Traitre : public Hors_la_loi, public Rebel{

private:
    int nbprincesse;
    int recompense;
    bool etat;
public:
    Traitre(const std::string &nom);
    void kidnapper(Princesse &princesse)override;
    void emprisonner(Rebel &rebel)override;
    const void presentation()const override;
    int getRecompense() const override;
    const std::string getNom() const override;
};


#endif //STARSWARS_TRAITRE_H
