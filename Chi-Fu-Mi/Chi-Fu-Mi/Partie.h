//
//  Partie.h
//  Chi-Fu-Mi
//
//  Created by Maxime Alay-eddine on 26/10/12.
//  Copyright 2012 Ecole Centrale de Nantes. All rights reserved.
//

#ifndef Chi_Fu_Mi_Partie_h
#define Chi_Fu_Mi_Partie_h

#include "Coup.h"
#include "Joueur.h"

class Partie {
public:
    int nbre_joueurs;
    Joueur * joueurs[6];
    Coup * coup_joue[6];
    int scores[6];
    
    Partie();
    Partie(int);
    void jouer_tour();
    void afficher_scores();
    void afficher_typeCoupsJoues();
};


#endif
