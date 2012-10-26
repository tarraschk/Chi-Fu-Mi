//
//  Pierre.h
//  Chi-Fu-Mi
//
//  Created by Maxime Alay-eddine on 26/10/12.
//  Copyright 2012 Ecole Centrale de Nantes. All rights reserved.
//

#ifndef Chi_Fu_Mi_Pierre_h
#define Chi_Fu_Mi_Pierre_h

#include "Coup.h"

class Pierre :public Coup {
    public:
        Pierre();
        virtual std::string type() const;
};

#endif
