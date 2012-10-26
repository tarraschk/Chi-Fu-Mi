//
//  Partie.h
//  Chi-Fu-Mi
//
//  Created by Maxime Alay-eddine on 26/10/12.
//  Copyright 2012 Ecole Centrale de Nantes. All rights reserved.
//

#ifndef Chi_Fu_Mi_Partie_h
#define Chi_Fu_Mi_Partie_h

#include "Joueur.h"

class Partie {
public:
    int nbre_joueurs;
    Joueur * joueurs[];
    
    Partie();
    Partie(int);
};


#endif
