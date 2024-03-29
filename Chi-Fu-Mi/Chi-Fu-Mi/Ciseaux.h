//
//  Ciseaux.h
//  Chi-Fu-Mi
//
//  Created by Maxime Alay-eddine on 26/10/12.
//  Copyright 2012 Ecole Centrale de Nantes. All rights reserved.
//

#ifndef Chi_Fu_Mi_Ciseaux_h
#define Chi_Fu_Mi_Ciseaux_h

#include "Coup.h"

class Ciseaux :public Coup {
    public:
        Ciseaux(const Joueur&);
        static int nombre;
        virtual std::string type() const;
};

#endif
