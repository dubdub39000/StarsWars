//
// Created by j.mailly on 24/09/2020.
//

#ifndef STARSWARS_PRINCESSETRAITRE_H
#define STARSWARS_PRINCESSETRAITRE_H


#include "Hors_la_loi.h"
#include "Princesse.h"

class Princessetraitre : public Hors_la_loi, public Princesse {
private:
    int nbprincesse;
    int recompense;
    bool etat;
public:
    Princessetraitre(const std::string &nom, const std::string &couleurRobe);
    void kidnapper(Princesse &princesse) override;
    void emprisonner(Rebel &rebel) override;
    const void presentation()const override;
    int getRecompense() const override;
    const std::string getNom() const override;
};


#endif //STARSWARS_PRINCESSETRAITRE_H
