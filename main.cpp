
#include <iostream>
#include "Yoda.h"
#include "Alliance.h"
#include "Traitre.h"
#include "Princesse.h"
#include "Empire.h"
#include "Barman.h"

int main() {
    //////////creation alliance+yoda//////////////
    Alliance alliance;
    Yoda yoda("gfdgd");
    //Rebel *masteryoda = new Yoda("yoda");
    //////////creation personnage//////////////
    Princesse P1("leila","rouge");
    Empire E1("SP305");
    alliance.ajoutmr("luke", &yoda);
    alliance.ajoutmr("han", &yoda);
    alliance.ajoutmr("Francis", &yoda);
    Barman B1("Roger");
    Empire H1("SP302");
    Rebel R1("Fernand");

    //H1 = const_cast<Hors_la_loi>(*H2);
    /////////////test///////////



    return 0;
}
