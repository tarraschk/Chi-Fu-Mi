//
//  IA.cpp
//  Chi-Fu-Mi
//
//  Created by Maxime Alay-eddine on 05/11/12.
//  Copyright 2012 Ecole Centrale de Nantes. All rights reserved.
//

#include "IA.h"
#include "Coup.h"
#include "Pierre.h"
#include "Papier.h"
#include "Ciseaux.h"
#include <sstream>
#include <string>
#include <iostream>
#include <cstdlib>

IA::IA() {
};

IA::IA(int i) : Joueur(i){
    
};

Coup& IA::obtenir_coup() const {
    std::string chaineCoup = "";
    int entierJoue = (rand() % 3) + 1;
    Coup * coupJoue;
    switch (entierJoue) {
        case 1:
            coupJoue = new Pierre(*this);
            break;
        case 2:
            coupJoue = new Papier(*this);
            break;
        case 3:
            coupJoue = new Ciseaux(*this);
            break;
        default:
            std::cout << "Erreur avec l'IA ! Recommencez...\n";
            break;
    }    
    return *coupJoue;
};
