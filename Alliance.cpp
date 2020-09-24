//
// Created by j.mailly on 23/09/2020.
//

#include "Alliance.h"
#include "Yoda.h"


Alliance::Alliance() {}
Alliance::~Alliance() {
    for (Rebel *R1 : membrerebel){
        delete R1;
    }
}

void Alliance::ajoutmr(const std::string &nom, Yoda *yoda) {
membrerebel.push_back(new Rebel(nom));
    yoda->setNbrebel(yoda->getNbrebel()+1);
}


const std::vector<Rebel *> &Alliance::getMembrerebel() const {
    return membrerebel;
}


