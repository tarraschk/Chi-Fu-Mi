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

class Coup {
public:
    //Constructeurs de Coup
    Coup();
    
    //Methodes
    virtual std::string type() = 0;
};

#endif
