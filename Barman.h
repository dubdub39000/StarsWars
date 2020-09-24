//
// Created by j.mailly on 23/09/2020.
//

#ifndef STARSWARS_BARMAN_H
#define STARSWARS_BARMAN_H


#include "Humanoide.h"

class Humain;

class Barman: public Humanoide {
private:
    std::string nombar;
public:
    Barman(const std::string &nom, const std::string &nombar);
    Barman(const std::string &nom);

    ////////////////////////////////////
const void presentation() const override;
void servir(Humanoide *h);
void parle(const std::string &texte) const override;
};


#endif //STARSWARS_BARMAN_H
