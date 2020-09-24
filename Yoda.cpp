//
// Created by j.mailly on 23/09/2020.
//

#include <iostream>
#include "Yoda.h"
#include "Rebel.h"

Yoda::Yoda(const std::string &nom) : Rebel("yoda") {
qualificatif="maitre";
nbrebel=0;
}

void Yoda::coffrer(Hors_la_loi &he) {
    Rebel::coffrer(he);
    parle("Au nom de l'alliance, je vous arrete !\n");
}

void Yoda::telepathie(int recompense, Empire &nom, Alliance &al) {
    for (int i = 0; i < al.getMembrerebel().size(); ++i) {
        al.getMembrerebel()[i]->parle("message reçu de yoda : ");
        std::cout<<"le côté obscur de la Force, redouter tu dois !! "<<recompense<<" peggat à qui arrêtera la "<<nom.getNom()
                 <<"le membre de l'Empire, mort ou vif !!\n";
    }
}

const void Yoda::presentation() const {
    return Rebel::presentation();
}



int Yoda::getNbrebel() const {
    return nbrebel;
}

void Yoda::setNbrebel(int nbrebel) {
    Yoda::nbrebel = nbrebel;
}

const std::string Yoda::getNom() const {
    return qualificatif+" "+Humanoide::getNom();
}




