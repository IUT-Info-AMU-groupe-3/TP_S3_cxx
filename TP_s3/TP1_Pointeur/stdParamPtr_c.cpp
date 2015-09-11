/* 
 * File:   main.cpp
 * Author: moonlight83340
 *
 * Created on 11 septembre 2015, 21:11
 */

#include <iostream>
#include <algorithm>//copy(),equal()
#include <vector>
using namespace std;

namespace{
    
    void Test_Equal(){
        vector <int> TabInt1(10,2);
        vector <int> TabInt2(TabInt1);
        TabInt2[9] = 10;
        
        if(equal(TabInt1.begin(),TabInt1.end(),TabInt2.begin()))
            cout << "tableaux identiques" << endl;
        else
            cout << "tableaux non identiques" << endl;
        
        if(equal(TabInt1.begin(),TabInt1.end() + 9,TabInt1.begin() + 1))
            cout << "toutes les valeurs sont identiques" << endl;
        else
            cout << "toutes les valeurs ne sont pas identiques" << endl;
        
        if(equal(TabInt2.begin(),TabInt2.end() + 9,TabInt2.begin() + 1))
            cout << "toutes les valeurs sont identiques" << endl;
        else
            cout << "toutes les valeurs ne sont pas identiques" << endl;
        
        
    }
    void stdParamPtr(){
        Test_Equal();
    }
    
}

int main(int argc, char** argv) {
    stdParamPtr();
    return 0;
}
