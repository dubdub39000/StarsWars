
#include <iostream>
#include "Yoda.h"
#include "Alliance.h"
#include "Traitre.h"
#include "Princesse.h"
#include "Empire.h"
#include "Barman.h"
#include "Princessetraitre.h"

int main() {
    //////////creation alliance+yoda//////////////
    Alliance alliance;
    Yoda yoda("gfdgd");
    //Rebel *masteryoda = new Yoda("yoda");
    //////////creation personnage//////////////
    Princesse P1("leila","bleue");
    Empire E1("SP305");
    alliance.ajoutmr("luke", &yoda);
    alliance.ajoutmr("han", &yoda);
    alliance.ajoutmr("Francis", &yoda);
    Barman B1("Roger");
    Empire H1("SP302");
    Traitre T1("Fabrice");
    Princessetraitre PT1("Lucie","rouge");
    //H1 = const_cast<Hors_la_loi>(*H2);
    /////////////test///////////
T1.presentation();
H1.presentation();
PT1.presentation();
PT1.kidnapper(P1);
    return 0;
}
