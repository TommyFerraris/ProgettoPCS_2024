#pragma once

#include <iostream>
#include "GeometryDFN.hpp"

using namespace std;

namespace DFN_Library{

//funzione che legge i valori del file e riempie corretamente la struttura
bool ImportFratture(const string &filename,
                Struttura_DFN& DFN);

//funzione che calcola il centroide di una frattura passata per il suo Id
Vector3d calcolaCentroide(vector<Vector3d>& vertici);

//funzione che controlla se due fratture sono vicine a sufficienza per cui c'è un'intersezione
bool possibiliTracce(vector<Vector3d>& poligono1, vector<Vector3d>& poligono2, double tolleranza);

// funzione che mi calcola la normale al poligono
Vector3d normalePoligono(vector<Vector3d>& poligono);

// funzione che mi calcoli le tracce


// funzione originale che lega tutte le altre funzioni
bool funzioneMadre(const string &filename, Struttura_DFN& DFN);

// Funzione che mi veda se il punto di intersezione trovato è all'interno del poligono
bool puntoInternoPoligono(Vector3d punto, const vector<Vector3d>& poligono);
}

