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

bool Coup::operator<(const Coup& coup2) {
    bool resultat = false;
    if(
       ((this->type() == "Pierre")&&(coup2.type() == "Papier")) ||
       ((this->type() == "Papier")&&(coup2.type() == "Ciseaux")) ||
       ((this->type() == "Ciseaux")&&(coup2.type() == "Pierre"))
       ){
        resultat = true;
    }
    return resultat;
};

ostream& operator<<(ostream& out, const Coup& coup) {
    out << coup.type();
    return out;
}

