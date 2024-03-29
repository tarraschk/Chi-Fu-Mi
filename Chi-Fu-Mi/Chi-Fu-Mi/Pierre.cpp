//
//  Pierre.cpp
//  Chi-Fu-Mi
//
//  Created by Maxime Alay-eddine on 26/10/12.
//  Copyright 2012 Ecole Centrale de Nantes. All rights reserved.
//

#include <iostream>
#include "Pierre.h"

int Pierre::nombre = 0;

Pierre::Pierre(const Joueur& j) : Coup(j){
    Pierre::nombre++;
};

std::string Pierre::type() const{
    return "Pierre";
};
