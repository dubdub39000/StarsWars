#include <iostream>
#include "Princesse.h"
#include "Empire.h"
#include "Rebel.h"
#include "Barman.h"
#include "Yoda.h"
#include "Alliance.h"

int main() {
    //////////creation alliance+yoda//////////////
    Alliance alliance;
    Yoda yoda("yoda");
    //Rebel *masteryoda = new Yoda("yoda");
    //////////creation personnage//////////////
    Princesse P1("leila","rouge");
    Empire E1("SP305");
    alliance.ajoutmr("luke", &yoda);
    alliance.ajoutmr("han", &yoda);
    alliance.ajoutmr("Francis", &yoda);
    Barman B1("Roger");
     H1("SP302");
    /////////////test///////////



    return 0;
}
