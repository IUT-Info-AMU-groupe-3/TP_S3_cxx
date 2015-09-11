/* 
 * File:   main.cpp
 * Author: moonlight83340
 *
 * Created on 11 septembre 2015, 21:11
 */

#include <iostream>

using namespace std;

namespace{
    
    void Proc1(const int* ValPtr){
        cout << *ValPtr<< "\t";
    }
    
    void ParamPtr(){
        int UnInt = 10;
        int TabInt[3] ={0,1,2};
        Proc1(&UnInt);
        Proc1(&TabInt[1]);
        Proc1(TabInt + 1);
    }
    
}

int main(int argc, char** argv) {
    ParamPtr();
    return 0;
}