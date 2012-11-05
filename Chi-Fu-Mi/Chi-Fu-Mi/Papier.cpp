//
//  Papier.cpp
//  Chi-Fu-Mi
//
//  Created by Maxime Alay-eddine on 26/10/12.
//  Copyright 2012 Ecole Centrale de Nantes. All rights reserved.
//

#include "Papier.h"
#include <iostream>

int Papier::nombre = 0;

Papier::Papier(const Joueur& j) : Coup(j) {
    Papier::nombre++;
};

std::string Papier::type() const {
    return "Papier";
};