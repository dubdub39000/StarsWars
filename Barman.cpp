//
// Created by j.mailly on 23/09/2020.
//

#include <iostream>
#include "Barman.h"

Barman::Barman(const std::string &nom, const std::string &nombar) : Humanoide(nom), nombar(nombar) {
boisson=("le vin");
}

Barman::Barman(const std::string &nom) : Humanoide(nom) {
    nombar="chez "+getNom();
    boisson=("le vin");
}

const void Barman::presentation()const {
    Humanoide::presentation();
    parle("Je tiens un bar, c'est le bar "+nombar);
}

void Barman::parle(const std::string &texte) const {
    Humanoide::parle(texte+" coco\n");
}

void Barman::servir(Humanoide *h) {
parle("Bonjour "+h->getNom()+" puis-je vous offrir un verre de "+h->getBoisson());
h->boire();
}
