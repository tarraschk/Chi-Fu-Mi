//
//  Ciseaux.cpp
//  Chi-Fu-Mi
//
//  Created by Maxime Alay-eddine on 26/10/12.
//  Copyright 2012 Ecole Centrale de Nantes. All rights reserved.
//

#include "Ciseaux.h"
#include <iostream>

int Ciseaux::nombre = 0;

Ciseaux::Ciseaux(const Joueur& j) : Coup(j){
    Ciseaux::nombre++;
};

std::string Ciseaux::type() const {
    return "Ciseaux";
};