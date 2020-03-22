
//
//  vernam_m.h
//  vernam_m
//
//  Created by Alexander Arturo Baylon Ibanez on 3/23/15.
//  Copyright (c) 2015 Alexander Arturo Baylon Ibanez - Don Perro Prod. All rights reserved.
//

#ifndef __Vernam__vernam__
#define __Vernam__vernam__

#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
#include <map>
#include <random>
#include <stdlib.h>

using namespace std;



class vernam_m
{
private:
    int tamMsj;
    string clave, mensaje, cifrado, decifrado,a,b,c;
    map<char, string> alfa;
    string abc = "abcdefghijklmnopqrstuvwxyz01234-";
    char alfaRand[6][6] =   {{'a', 'g', 'm', 'r','w', '1'},
                             {'b', 'h', 'n', 's','x', '2'},
                             {'c', 'i', 'o', 't','y', '3'},
                             {'d', 'j', 'p', 'u','z', '4'},
                             {'e', 'k', 'q', 'v','0', '-'},
                             {'f', 'l', '5', '5','5', '5'}};
public:
    vernam_m(int);
    vernam_m(string,string);
    void mostrar_alfaRand();
    void generarAlfa();
    string cifrar();
    string decifrar();
    string generarClave();
    string getClave();
    string getMensaje();
    string getCifrado();
    int getTam();
    
};

int a_entero(string);
string a_binario(int);
string comparaBits(string,string);
string ingMensaje(int);
int numRandom(int,int);



#endif /* defined(__Vernam__vernam__) */
