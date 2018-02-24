//
//  Estado.cpp
//  Practica21
//
//  Created by Federico Ibarra on 23/09/17.
//  Copyright © 2017 Federico Ibarra. All rights reserved.
//


#include "Estado.hpp"

Estado::Estado(int tamano){
    transicion = new int[tamano];
    tamanoAlfabeto = tamano;
}
/*
void Estado::setTrans(int posicionCaracter, int estadoSiguiente){
    transicion[posicionCaracter] = estadoSiguiente;
}

void Estado::hacerFinal(){
    final = true;
}
*/
