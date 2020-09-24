//
// Created by j.mailly on 21/09/2020.
//

#include <iostream>
#include "Princesse.h"
#include "Empire.h"
#include "Rebel.h"

Princesse::Princesse(const std::string &nom, const std::string &couleurRobe) : Humanoide(nom),
couleur_robe(couleurRobe) {
    etat= false; //etat par défaut
    boisson=("Lait bleu");
}
/*************************methode*********************/
void Princesse::kidnapper() {
    etat= true;
parle(" : AU SECOURS !!");
}

void Princesse::liberer(const std::string &nomrebel) {
parle("Merci de m'avoir libérée "+nomrebel);
etat = false;
}

void Princesse::changementrobe(const std::string &couleur) {
couleur_robe=couleur;
parle("Regardez ma nouvelle robe"+couleur_robe);
}


/****************************getter**********************************/
const std::string &Princesse::getCouleurRobe() const {
    return couleur_robe;
}

const void Princesse::presentation() const {
    Humanoide::presentation();
    parle(" j'ai une robe de couleur "+couleur_robe);
}

const std::string Princesse::getNom()const {
    return "la princesse "+Humanoide::getNom();
}

bool Princesse::isEtat() const {
    return etat;
}

