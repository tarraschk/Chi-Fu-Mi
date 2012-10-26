//
//  Coup.cpp
//  Chi-Fu-Mi
//
//  Created by Maxime Alay-eddine on 26/10/12.
//  Copyright 2012 Ecole Centrale de Nantes. All rights reserved.
//

#include "Coup.h"
#include <iostream>

Coup::Coup() {
};

bool Coup::operator==(const Coup& coup2) {
    return (this->type() == coup2.type());
};