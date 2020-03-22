//
//  main.cpp
//  vernam_m
//
//  Created by Alexander Arturo Baylon Ibanez on 3/23/15.
//  Copyright (c) 2015 Alexander Arturo Baylon Ibanez. All rights reserved.
//

#include "vernam.h"


int main(int argc, const char * argv[]) {
    string msj = "alexander-arturo-baylon-ibanez-";
    string msj2 = "alexander";
    vernam_m prueba(31);
    //prueba.mostrar_alfaRand();
    string cif;
    
    cif = prueba.cifrar();
    
    cout << "mensaje original: " << prueba.getMensaje() << endl;
    cout << "clave: " << prueba.getClave() << endl;
    cout << "cifrado: " << cif << endl << endl;
    
    
    
    /*
    //GRETEL
    string clave = "o2hu3shnxg4djiuogtiww3qilc";
    string cifrado = "indhzzen0on0jkudgbiuyqtg0k";
    
    vernam_m prueba1(cifrado,clave);
    
    cout << "clave: " << prueba1.getClave() << endl;
    cout << "cifrado: " << prueba1.getCifrado() << endl;
    cout << "decifrado: " << prueba1.decifrar() << endl <<endl;
    
    
    //CHINO
    string clave1 = "oaqs2nddtop3ffz";
    string cifrado1 = "-e3lsnihb2pqgux";
    
    vernam_m prueba2(cifrado1,clave1);
    
    cout << "clave 1: " << prueba2.getClave() << endl;
    cout << "cifrado 1: " << prueba2.getCifrado() << endl;
    cout << "decifrado 1: " << prueba2.decifrar() << endl;
    cout << endl;
    //GARMENDIA
    string clave2 = "rt1gi33vkt1ir1--v3t1tgrrv";
    string cifrado2 = "y31w2vqkmtkevw2xvcr1sxvav";
    
    vernam_m prueba3(cifrado2,clave2);
    
    cout << "clave 2: " << prueba3.getClave() << endl;
    cout << "cifrado 2: " << prueba3.getCifrado() << endl;
    cout << "decifrado 2: " << prueba3.decifrar() << endl;
    
    cout << endl;
    //CARLOS FLORES
    string clave3 = "yajafwjeg0cabcwccaa";
    string cifrado3 = "0ayllewbnutet31wpez";
    
    vernam_m prueba4(cifrado3,clave3);
    
    cout << "clave 3: " << prueba4.getClave() << endl;
    cout << "cifrado 3: " << prueba4.getCifrado() << endl;
    cout << "decifrado 3: " << prueba4.decifrar() << endl;
    
    
   
    
    cout << endl;
    
    
    
    //cout << a_binario(a) << endl;
    
    */
    
    
    return 0;
}
