//
//  Papier.cpp
//  Chi-Fu-Mi
//
//  Created by Maxime Alay-eddine on 26/10/12.
//  Copyright 2012 Ecole Centrale de Nantes. All rights reserved.
//

#include "Papier.h"
#include <iostream>

Papier::Papier(const Joueur& j) : Coup(j) {
};

std::string Papier::type() const {
    return "Papier";
};