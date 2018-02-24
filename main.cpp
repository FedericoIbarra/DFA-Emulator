/*
	Practica 2 AFD
	Lenguajes formales
 */

#include <iostream>
#include <vector>
#include "Estado.hpp"

using namespace std;



bool verEstado(vector<Estado> Q, vector<char> alfabeto, string palabra, int posPalabra, int estadoActual){
    
    int posAux = 0;
    
    while (posAux < palabra.size() && posPalabra < palabra.size()){
        if(alfabeto.at(posAux) == palabra.at(posPalabra)) break;
        else posAux++;
    }
    
    if(posPalabra == palabra.size()) return Q[estadoActual].esFinal;
    else return verEstado(Q, alfabeto, palabra, posPalabra+1, Q[estadoActual].transicion[posAux]);
}

bool verificarPalabra(vector<Estado> Q, vector<char> alfabeto, string palabra){
    return verEstado(Q, alfabeto, palabra, 0, 0);
}

int main(int argc, char const *argv[]) {
    int aux = 1, x, intAux;
    char alfabetoAux;
    vector<char> alfabeto;
    vector<Estado> Q;
    string palabra;
    bool pertenece;
    
    cout << "Introduzca los elementos del afabeto" << endl << "* para salir" <<endl;
    while(aux){
        cout << ": ";
        cin >> alfabetoAux;
        if(alfabetoAux != '*') alfabeto.push_back(alfabetoAux);
        else aux = 0;
    }
    
    cout << "¿Cuantos estado existen en total (Q)?" << endl;
    
    cin >> x;
    
    for(int y = 0; y < x; y++){
        Estado estAux((int) alfabeto.size());
        Q.push_back(estAux);
    }
    
    cout << "Inserte tabla de transicion" << endl;
    
    for(int k = 0; k < x; k++){
        for(int n = 0; n < alfabeto.size(); n++){
            
            cout << "q" << k << " - " << alfabeto.at(n) << "   ";
            cin >> intAux;
            Q.at(k).transicion[n] = intAux;
            
        }
    }
   
    
    cout << "¿Que estados son estados finales (F)?" << endl;
    
    for(int k = 0; k < x ; k++){
        cout << "¿q" << k << " es final? [1-SI, 0-NO]" << endl;
        cin >> intAux;
        if(intAux) Q[k].esFinal=true;
    }
    
    for(int k = 0; k < x ; k++){
        cout << Q[k].esFinal << endl;
    }
    
    aux = 1;
    
    while (aux) {

        cout << "Introduce la palabra a verificar (* para salir)"<<endl<<":";
        cin >> palabra;
        if(palabra == "*") break;
        
        pertenece = verificarPalabra(Q, alfabeto, palabra);
        
        if(pertenece) cout << "Si pertenece" << endl;
        else cout << "No pertenece" << endl;
        
        
    }
    
    return 0;
}
