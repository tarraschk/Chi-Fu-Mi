//
//  IA.h
//  Chi-Fu-Mi
//
//  Created by Maxime Alay-eddine on 05/11/12.
//  Copyright 2012 Ecole Centrale de Nantes. All rights reserved.
//

#ifndef Chi_Fu_Mi_IA_h
#define Chi_Fu_Mi_IA_h

#include "Joueur.h"

class IA :public Joueur {
public:
    IA();
    IA(int);
    virtual Coup& obtenir_coup() const;
};

#endif
