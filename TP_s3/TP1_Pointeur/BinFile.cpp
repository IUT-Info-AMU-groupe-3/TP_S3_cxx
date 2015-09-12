/* 
 * File:   main.cpp
 * Author: moonlight83340
 *
 * Created on 11 septembre 2015, 21:11
 */

#include <iostream>
#include <fstream>

using namespace std;

namespace{
    void Binfile(){
        
        ifstream is;
        for(;;){
            string FileName;
            cout << "rentrer le nom du fichier à copier : ";
            cin >> FileName;
            cout << endl;
            is.open(FileName.c_str(), std::ios::in | std::ios::binary);
            if(is.good())break;
            cout << "nom de fichier incorrect" << endl;
        }
            
        ofstream of;
        for(;;){
            string FileNameDest;
            cout << "rentrer le nom du fichier destination : ";
            cin >> FileNameDest;
            cout << endl;
            of.open(FileNameDest.c_str(), std::ios::out | std::ios::binary);
            if(of.good())break;
            cout << "nom de fichier incorrect" << endl;
        }
        
        cout << "rentrer le nombre d'octet du fichier : " << endl;
        unsigned BlocSize;
        cin >> BlocSize;
        cout << endl;
        if(0 == BlocSize){
            is.seekg(0,is.end);
            BlocSize = is.tellg();
            cout << "taille : " << BlocSize << endl;
            is.seekg(0,is.beg);
        }
        char * Buffer = new char[BlocSize];
        for(streamsize Nb;Nb = (is.readsome(Buffer,BlocSize) ) > 0;)of.write(Buffer,BlocSize);
        delete [] Buffer;
        Buffer = 0;
        
            
        
    }
    
}

int main(int argc, char** argv) {
    Binfile();
    return 0;
}

