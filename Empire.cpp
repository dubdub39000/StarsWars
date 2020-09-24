//
// Created by j.mailly on 21/09/2020.
//

#include <iostream>
#include "Empire.h"

Empire::Empire(const std::string &nom) : Humanoide(nom) {
    rang="soldat";
    etat= false;
    recompense=100;
    boisson=(" whisky");
    nbprincesse=0;
}

/************************methode************************/

bool Empire::prison() {
    return etat;
}

void Empire::kidnapper(Princesse &princesse) {
parle(" : Si tu n'es pas avec moi "+princesse.getNom()+" alors tu es contre moi\n");
princesse.kidnapper(this);
nbprincesse+=1;
}

void Empire::emprisonner(Rebel &rebel) {
parle(" je suis fait "+rebel.getNom()+" tu m'a eu !!\n");
etat= true;
}

const void Empire::presentation()const {
    Humanoide::presentation();
    parle("j'ai déjà kidnapper "+std::to_string(nbprincesse)+"princesses et ma tête est mise à prix "+std::to_string(recompense)+" peggat");
}

const std::string Empire::getNom() const {
    return Humanoide::getNom()+" le "+rang;
}

int Empire::getRecompense() const {
    return recompense;
}
