//
// Created by j.mailly on 23/09/2020.
//

#ifndef STARSWARS_HORS_LA_LOI_H
#define STARSWARS_HORS_LA_LOI_H


#include "Princesse.h"

class Rebel;
class Princesse;
class Hors_la_loi {
private:

public:
    //il s'agit d'une classe abstraite donc toute les methodes ne peuvent pas s'instancier, uniquement les class hérité.
    virtual void kidnapper(Princesse &princesse)=0;
    virtual void emprisonner(Rebel &rebel)=0;
    virtual const void presentation()const =0;
    virtual int getRecompense() const =0;
};


#endif //STARSWARS_HORS_LA_LOI_H
