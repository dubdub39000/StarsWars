//
// Created by j.mailly on 23/09/2020.
//

#ifndef STARSWARS_TRAITRE_H
#define STARSWARS_TRAITRE_H


#include "Empire.h"
#include "Hors_la_loi.h"


class Traitre : public Empire, public Rebel{

private:
public:
    Traitre(const std::string &nom);
};


#endif //STARSWARS_TRAITRE_H
