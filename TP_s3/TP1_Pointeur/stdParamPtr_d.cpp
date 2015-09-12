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
    
    void equalPalindrome(){
        for (string maChaine; cout << "Tapez un mot : ", cin >> maChaine; )
            cout << maChaine
                 << (equal (maChaine.begin(),maChaine.begin() + (maChaine.end() - maChaine.begin()) / 2,maChaine.rbegin()) 
                    ? " est" : " n'est pas")
                 << " un palindrome\n";

        cout << endl;
        
    }  
    void stdParamPtr(){
        equalPalindrome();
    }
    
}

int main(int argc, char** argv) {
    stdParamPtr();
    return 0;
}
