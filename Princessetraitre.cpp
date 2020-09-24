//
// Created by j.mailly on 24/09/2020.
//

#include "Princessetraitre.h"

Princessetraitre::Princessetraitre(const std::string &nom, const std::string &couleurRobe) : Princesse(nom,
                                                                                                       couleurRobe) {}

void Princessetraitre::kidnapper(Princesse &princesse) {
    parle(" : Si tu n'es pas avec moi "+princesse.getNom()+" alors tu es contre moi\n");
    princesse.kidnapper(this);
    nbprincesse+=1;
}

void Princessetraitre::emprisonner(Rebel &rebel) {
    parle(" je suis fait "+rebel.getNom()+" tu m'a eu !!\n");
    etat= true;
}

const void Princessetraitre::presentation() const {
    Humanoide::presentation();
    parle("j'ai déjà kidnapper "+std::to_string(nbprincesse)+"princesses et ma tête est mise à prix "+std::to_string(recompense)+" peggat");
}

int Princessetraitre::getRecompense() const {
    return recompense;
}

const std::string Princessetraitre::getNom() const {
    return Princesse::getNom()+" la princesse rebelle ";
}
