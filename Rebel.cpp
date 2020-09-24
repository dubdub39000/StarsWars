//
// Created by j.mailly on 21/09/2020.
//

#include <iostream>
#include "Rebel.h"
#include "Empire.h"


Rebel::Rebel(const std::string &nom): Humanoide(nom) {
    popularite=0;
    qualificatif="padawan";
    boisson=("le vin de fleur ");
}

void Rebel::tirer(const Empire &he) const{
    he.parle("Beau coup de sabre laser !!\n");
    parle("que la force soit avec moi !!\n");
}

void Rebel::coffrer(Hors_la_loi &he) {
    Rebel nom = getNom();
    he.emprisonner(nom);
}

void Rebel::liberation(Princesse &lady) {
lady.liberer(getNom());
popularite+=1;
}

const void Rebel::presentation() const {
    Humanoide::presentation();
    parle("je suis un "+qualificatif+" avec une popularité de "+std::to_string(popularite));
}

