//
// Created by j.mailly on 23/09/2020.
//

#ifndef STARSWARS_HORS_LA_LOI_H
#define STARSWARS_HORS_LA_LOI_H

#include "Empire.h"
#include "Rebel.h"

class Empire;
class Rebel;
class Princesse;
class Hors_la_loi {
private:

public:
    virtual void kidnapper(Princesse &princesse)=0;
    virtual void emprisonner(Rebel &rebel)=0;
    virtual const void presentation()const override=0;
    virtual int getRecompense() const override=0;
};


#endif //STARSWARS_HORS_LA_LOI_H
