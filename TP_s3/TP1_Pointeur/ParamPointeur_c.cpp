/* 
 * File:   main.cpp
 * Author: moonlight83340
 *
 * Created on 11 septembre 2015, 21:11
 */

#include <iostream>
#include <string>
#include <cctype>

using namespace std;

namespace{
    
    void Proc3(string* stringPtr, unsigned* indiceString){
        (*stringPtr)[*indiceString] =  toupper((*stringPtr)[*indiceString]);
    }
    
    void ParamPtr(){
        string maChaine = "bonjour";
        cout << "avant : "<< maChaine <<endl;
        for(unsigned i =0; i < maChaine.size();++i){
            Proc3(&maChaine,&i);
        }
        cout << "apres : "<< maChaine <<endl;
    }
    
}

int main(int argc, char** argv) {
    ParamPtr();
    return 0;
}