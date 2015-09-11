#include <iostream>
#include <string>
using namespace std;

namespace{
    void newDelete(){
        string* maChaine = new string("bob");
        getline(cin, *maChaine);
        cout << *maChaine << endl;
        delete maChaine;
    }

}

int main()
{
    newDelete();
    return 0;
}
