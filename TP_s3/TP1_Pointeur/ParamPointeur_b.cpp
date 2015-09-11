/* 
 * File:   main.cpp
 * Author: moonlight83340
 *
 * Created on 11 septembre 2015, 21:11
 */

#include <iostream>
#include <string>

using namespace std;

namespace{
    
    void Proc2(const string* str1, const string* str2){
        for(const string* ptr = str1;ptr < str2;++ptr){
           cout << *ptr << endl;
       }
    }
    
    void ParamPtr(){
       string TabStr[] = {"chaine1","chaine2","chaine3","chaine4"};
       Proc2(TabStr,TabStr +(sizeof(TabStr)/(sizeof(TabStr[0]))) );
       Proc2(TabStr+1,TabStr+3);
       Proc2(TabStr + 1,TabStr);
       string str = "Je suis une nouvelle Chaine";
       Proc2(&str,&str + 1);
    }
    
}

int main(int argc, char** argv) {
    ParamPtr();
    return 0;
}