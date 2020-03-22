//
//  vernam_m.cpp
//  vernam_m
//
//  Created by Alexander Arturo Baylon Ibanez on 3/23/15.
//  Copyright (c) 2015 Alexander Arturo Baylon Ibanez. All rights reserved.
//

#include "vernam.h"
/*
vernam_m::vernam_m(string m)
{
    mensaje = m;
    tamMsj  = int(mensaje.size());
    generarAlfa();
    clave = generarClave();
}
*/

vernam_m::vernam_m(int m)
{
    tamMsj  = m;
    generarAlfa();
    clave = generarClave();
    cout << "Alfabeto: " << endl;
    for (int j=0; j<32; j++) {
        cout << abc[j] << " " <<alfa[abc[j]] << endl;
    }
}

vernam_m::vernam_m(string m,string c)
{
    cifrado = m;
    clave   = c;
    tamMsj  = int(cifrado.size());
    generarAlfa();
}

string vernam_m::cifrar()
{
    mensaje = ingMensaje(tamMsj);
    for (int j=0; j<tamMsj; j++) {
        a = alfa[mensaje[j]];
        b = alfa[clave[j]];
        c = comparaBits(a, b);
        cifrado += abc[a_entero(c)];
        c.clear();
    }
    return cifrado;
}


string vernam_m::decifrar()
{
    for (int i=0; i<tamMsj; i++) {
        a = alfa[cifrado[i]];
        b = alfa[clave[i]];
        //cout << a << " " << b << endl;
        c = comparaBits(a, b);
        decifrado += abc[a_entero(c)];
        c.clear();
    }
    return decifrado;
}

string vernam_m::generarClave()
{
    char temp;
    string c;
    for (int i=0; i<tamMsj; i++) {
        do {
            temp = alfaRand[numRandom(0, 5)][numRandom(0, 5)];
        } while (temp == '5');
        c += temp;
    }
    return c;
}

string vernam_m::getClave()
{
    return clave;
}

string vernam_m::getMensaje()
{
    return mensaje;
}

string vernam_m::getCifrado()
{
    return cifrado;
}

int vernam_m::getTam()
{
    return tamMsj;
}

string comparaBits(string a, string b)
{
    bool x,y,z;
    string c;
    for (int k=0; k<5; k++) {
        x = a[k]-'0'; y = b[k]-'0';
        z = x^y;
        c += z+'0';
    }
    return c;
}

void vernam_m::mostrar_alfaRand()
{
    for (int i=0; i<6; i++) {
        for (int j=0; j<6; j++) {
            cout << alfaRand[i][j] << " ";
        }
        cout << endl;
    }
}

void vernam_m::generarAlfa()
{
    for (int i=0; i<32; i++) {
        alfa[abc[i]] = a_binario(i);
    }
}


int a_entero(string bits)
{
    return stoi(bits,nullptr,2);
}


string a_binario(int n)
{
    string num;
    // Mientras el numero no sea 0 al dividirlo entre 2( >>1 ).
    do
    {   // agregamos a la cadena el bit menos significativo de x con (x&1);
        num += '0' + (n & 1);
    } while (n >>= 1);
    reverse(num.begin(), num.end());
    // insertamos 0s a la izq. para completar tamano
    if(num.size() < 5)
    {
        for (int i=int(num.size()); i < 5; i++)
            num.insert(0,"0");
    }
    return num;
}

string ingMensaje(int tam)
{
    string temp;
    do {
        cout << "Ingrese el Mensaje(tam:" << tam << "):";
        cin >> temp;
    } while (temp.size()!=tam);
    return temp;
}

int numRandom(int a,int b)
{
    random_device rand;
    mt19937 mt(rand());
    uniform_real_distribution<double> dist(a,b+1);
    return int(dist(mt));
}

