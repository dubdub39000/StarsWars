//
// Created by j.mailly on 23/09/2020.
//

#include "Traitre.h"

Traitre::Traitre(const std::string &nom) : Rebel(nom){}

void Traitre::kidnapper(Princesse &princesse) {
    parle(" : Si tu n'es pas avec moi "+princesse.getNom()+" alors tu es contre moi\n");
    princesse.kidnapper(this);
    this->nbprincesse+=1;
}

void Traitre::emprisonner(Rebel &rebel) {
    parle(" je suis fait "+rebel.getNom()+" tu m'a eu !!\n");
    etat= true;
}

const void Traitre::presentation() const {
    Humanoide::presentation();
    parle("j'ai déjà kidnapper "+std::to_string(nbprincesse)+"princesses et ma tête est mise à prix "+std::to_string(recompense)+" peggat");
}

int Traitre::getRecompense() const {
    return recompense;
}

const std::string Traitre::getNom() const {
    return Humanoide::getNom()+" le traitre ";
}

