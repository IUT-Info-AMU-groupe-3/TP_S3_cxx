#include <iostream>
#include <string>
using namespace std;

namespace{
    void newDelete(){
        const string* const maChaine = new string("bob");
        cout << *maChaine << endl;
        maChaine = new string ("bobinou");
        getline(cin, *maChaine);
        delete maChaine;
    }

}

int main()
{
    newDelete();
    return 0;
}
