//
//  Estado.hpp
//  Practica21
//
//  Created by Federico Ibarra on 23/09/17.
//  Copyright © 2017 Federico Ibarra. All rights reserved.
//

#ifndef Estado_hpp
#define Estado_hpp

#include <iostream>
using namespace std;

class Estado{
    
public:
    bool esFinal;
    int * transicion;
    int tamanoAlfabeto;
    Estado(int tamano);
    void setTrans(char caracter, int estadoSiguiente);
    void hacerFinal();
    
};

#endif /* Estado_hpp */
