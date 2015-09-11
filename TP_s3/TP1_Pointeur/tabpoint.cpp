#include <iostream>
#include <string>
using namespace std;

namespace{
    void TabPtrs(){
        string* tabStr[10];
        for(unsigned i = 0; i < 10; ++i){
            tabStr[i] = new string("");
            cin >> *tabStr[i] ;
        }
        for(unsigned i = 0; i < 10; ++i){
            cout << *tabStr[i] << endl;
        }
        for(unsigned i = 0; i < 10; ++i){
            delete tabStr[i];
         }

    }

}

int main()
{
    TabPtrs();
    return 0;
}


