/* 
 * File:   main.cpp
 * Author: moonlight83340
 *
 * Created on 11 septembre 2015, 21:11
 */

#include <iostream>
#include <algorithm>//copy(),equal()

using namespace std;

namespace{
    bool equalNTCTS(const char * Char1, const char* Char2){
        for(; *Char1 && *Char1 == *Char2; ++Char1, ++ Char2);
        return *Char1 == *Char2;

    }
   
    void charPtr(){
        const char* NTCTS1 = "coucou"; 
        const char* NTCTS2 = "CouCou"; 
        char NTCTS3[] = "coucou";
        string Str = "Coucou";
        cout << NTCTS1 << ( equalNTCTS(NTCTS1,NTCTS2) ? " = " : " != " ) << NTCTS2 <<"\n";
        cout << NTCTS3 << ( equalNTCTS(NTCTS3,Str.c_str()) ? " = " : " != " ) << Str <<"\n";
        cout << NTCTS1 << ( equalNTCTS(NTCTS1,NTCTS3) ? " = " : " != " ) << NTCTS3 <<"\n";
        cout << NTCTS2 << ( equalNTCTS(NTCTS2,Str.c_str()) ? " = " : " != " ) << Str <<"\n";
    }
    
}

int main(int argc, char** argv) {
    charPtr();
    return 0;
}

