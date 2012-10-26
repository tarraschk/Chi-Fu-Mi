//
//  Pierre.cpp
//  Chi-Fu-Mi
//
//  Created by Maxime Alay-eddine on 26/10/12.
//  Copyright 2012 Ecole Centrale de Nantes. All rights reserved.
//

#include <iostream>
#include Pierre.h

class Pierre :public Coup {
    public:
        Pierre(){};
        virtual std::string type(){
            count << "Pierre";
        }
}
