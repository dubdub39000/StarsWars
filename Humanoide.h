//
// Created by j.mailly on 21/09/2020.
//

#ifndef STARSWARS_HUMANOIDE_H
#define STARSWARS_HUMANOIDE_H


#include <string>

class Humanoide {//classe abstraite
private:
    std::string nom;
protected:
    std::string boisson;//permet de modifier les boissons favorites des class filles
public:
    explicit Humanoide(const std::string &nom);
    virtual void parle(const std::string &texte) const;

    virtual const  void presentation()const =0;
    virtual void boire();

    const std::string &getBoisson() const;
    virtual const std::string getNom()const ;//permet de personnaliser la presentation pour les class filles

};


#endif //STARSWARS_HUMANOIDE_H
