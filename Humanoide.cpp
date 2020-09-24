//
// Created by j.mailly on 21/09/2020.
//

#include <iostream>
#include "Humanoide.h"

Humanoide::Humanoide(const std::string &nom): nom(nom) {
boisson="eau";

}
/***********************methode***************************/
void Humanoide::parle(const std::string &texte)const {
std::cout<<nom<<" : "<<texte<<std::endl;
}

const void Humanoide::presentation()const  {
    parle("Bonjour je suis "+getNom()+" ma boisson favorite est "+getBoisson());
}


void Humanoide::boire() {
    parle("Ah ! un  bon verre de "+boisson+" GLOUPS !");
}

/*******************getter*************************/
const std::string &Humanoide::getBoisson() const {
    return boisson;
}

 const std::string Humanoide::getNom()const {
    return nom;
}








