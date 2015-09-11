#include <iostream>
#include "ClLink.h"
using namespace std;
using namespace nsSdD;

namespace{

    void ListeSimple(){
        ClLink* suivant = nullptr;
        for(unsigned i = 0; i < 5;++i){
            suivant = new ClLink(i,suivant);
        }

        //affichage
        for(ClLink * ptr = suivant; ptr != nullptr; ptr = ptr->GetSuivant()){
            cout << ptr->GetInfo() << endl;
        }
        delete suivant;
    }

}


int main()
{
    ListeSimple();
    return 0;
}

