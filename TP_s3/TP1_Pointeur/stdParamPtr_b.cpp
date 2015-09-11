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
    
    void Test_Equal(){
        int TabInt1[10] = {2,2,2,2,2,2,2,2,2,2};
        int TabInt2[10];
        const unsigned KTaillTabInt = sizeof(TabInt1) / sizeof(TabInt1[0]);
        copy(TabInt1,TabInt1 + KTaillTabInt,TabInt2);
        TabInt2[9] = 10;
        
        if(equal(TabInt1,TabInt1 + 10,TabInt2))
            cout << "tableaux identiques" << endl;
        else
            cout << "tableaux non identiques" << endl;
        
        if(equal(TabInt1,TabInt1 + 9,TabInt1 + 1))
            cout << "toutes les valeurs sont identiques" << endl;
        else
            cout << "toutes les valeurs ne sont pas identiques" << endl;
        
        if(equal(TabInt2,TabInt2 + 9,TabInt2 + 1))
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
