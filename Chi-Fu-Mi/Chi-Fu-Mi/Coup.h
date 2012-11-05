//
//  Coup.h
//  Chi-Fu-Mi
//
//  Created by Maxime Alay-eddine on 26/10/12.
//  Copyright 2012 Ecole Centrale de Nantes. All rights reserved.
//

#ifndef Chi_Fu_Mi_Coup_h
#define Chi_Fu_Mi_Coup_h

#include <iostream>
#include "Joueur.h"
using namespace std;

class Coup {
public:
    //Constructeurs de Coup
    Coup(const Joueur&);
    const Joueur& joueur;
    //Methodes
    virtual std::string type() const = 0;
    bool operator==(const Coup&);
    bool operator<(const Coup&);
    friend ostream& operator<<(ostream&, const Coup&);
};

#endif
