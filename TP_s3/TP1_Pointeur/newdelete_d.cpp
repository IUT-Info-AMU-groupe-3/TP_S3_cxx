#include <iostream>
#include <string>
using namespace std;

namespace{
    void newDelete(){
        unsigned TailleTab = 0;
        cin >> TailleTab;
        int* Tab = new int [TailleTab];
        for(unsigned i = 0; i < TailleTab; ++i){
            Tab[i] = i;
        }
        for(int* Pint = Tab; Pint != Tab + TailleTab; ++Pint){
            cout <<  *Pint << endl;
        }
        delete Tab;
    }

}

int main()
{
    newDelete();
    return 0;
}
