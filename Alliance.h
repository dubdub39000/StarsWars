//
// Created by j.mailly on 23/09/2020.
//

#ifndef STARSWARS_ALLIANCE_H
#define STARSWARS_ALLIANCE_H


#include <vector>
#include "Rebel.h"
#include "Yoda.h"
class Yoda;
class Alliance {
private:
    std::vector<Rebel*> membrerebel;
public:
    Alliance();
    ~Alliance();
    void ajoutmr(const std::string &nom, Yoda *yoda);

    const std::vector<Rebel *> &getMembrerebel() const;
};


#endif //STARSWARS_ALLIANCE_H
