//
// Created by j.mailly on 21/09/2020.
//

#ifndef STARSWARS_PRINCESSE_H
#define STARSWARS_PRINCESSE_H


#include "Humanoide.h"
#include "Rebel.h"

class Rebel;
class Hors_la_loi;
class Princesse : public Humanoide{
private:
    std::string couleur_robe;
    bool etat;

public:
    Princesse(const std::string &nom, const std::string &couleurRobe);
    void kidnapper(Hors_la_loi *ho);
    void liberer(const std::string &nomrebel);
    void changementrobe(const std::string &couleur);
    const void presentation() const override;
    const std::string getNom() const override;
    const std::string &getCouleurRobe() const;

    bool isEtat() const;
};


#endif //STARSWARS_PRINCESSE_H
