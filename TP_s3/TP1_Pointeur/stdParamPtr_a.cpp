/* 
 * File:   main.cpp
 * Author: moonlight83340
 *
 * Created on 11 septembre 2015, 21:11
 */

#include <iostream>
#include <algorithm>

using namespace std;

namespace{
    
    void Test_Copy(){
        int TabInt1[] = {0,1,2,3,4,5,6,7,8,9,10};
        int TabInt2[] = {11,12,13,14,15,16,17,18,19,20};
        
        cout << "recopier une tranche d'un tableau dans une tranche de l'autre tableau." <<endl;
        copy(TabInt1,TabInt1 +5,TabInt2 + 2);
        for(unsigned i =0; i < 5;++i){
            cout << TabInt2[i] <<endl;
        }
       
        cout << "recopier une tranche d'un tableau dans une tranche postérieure du même tableau sans chevauchement. " <<endl;
        copy(TabInt2,TabInt2 + 3 ,TabInt2 + 5);
        for(unsigned i =0; i < 5;++i){
            cout << TabInt2[i] <<endl;
        }
        
        cout << "recopier une tranche d'un tableau dans une tranche postérieure du même tableau avec chevauchement. " <<endl;
        copy(TabInt2,TabInt2 + 5,TabInt2 + 3);
        for(unsigned i =0; i < 5;++i){
            cout << TabInt2[i] <<endl;
        }
    }
    void stdParamPtr(){
        Test_Copy();
    }
    
}

int main(int argc, char** argv) {
    stdParamPtr();
    return 0;
}
