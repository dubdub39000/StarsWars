//
// Created by j.mailly on 21/09/2020.
//

#ifndef STARSWARS_REBEL_H
#define STARSWARS_REBEL_H


#include <string>
#include "Hors_la_loi.h"
#include "Humanoide.h"

class Hors_la_loi;
class Princesse;//predeclaration de classe car liaison dans les deux sens
class Empire;
class Rebel : public Humanoide {
private:
    int popularite;
protected:
    std::string qualificatif;
public:
    Rebel(const std::string &nom);
    /*******methode**********/
    void tirer(const Empire *he) const; //
    virtual void coffrer(Hors_la_loi &he);
    void liberation(Princesse &lady);
    const void presentation()const  override;
};


#endif //STARSWARS_REBEL_H
