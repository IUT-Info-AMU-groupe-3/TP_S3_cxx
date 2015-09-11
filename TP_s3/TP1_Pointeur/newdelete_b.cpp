
#include <iostream>
#include <string>
using namespace std;

namespace{
    void newDelete(){
        const string* maChaine = new string("bob");
        cout << *maChaine << endl;
        //on ne peut pas modifier la chaine normal.. getline(cin, *maChaine);
        maChaine = new string ("bobinou");
        delete maChaine;
    }

}

int main()
{
    newDelete();
    return 0;
}
