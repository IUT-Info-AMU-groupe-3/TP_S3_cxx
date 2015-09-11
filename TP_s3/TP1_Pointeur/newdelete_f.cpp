#include <iostream>
#include <string>
using namespace std;

namespace{
    void newDelete(){
        int UnInt = 0;
        int &RefUnInt = UnInt;
        int* pUnInt = &RefUnInt;
        cout << UnInt << endl;
        cout <<RefUnInt << endl;
        cout << *pUnInt << endl;
        UnInt = 10;
        cout << UnInt << endl;
        cout <<RefUnInt << endl;
        cout << *pUnInt << endl;
        RefUnInt = 12;
        cout << UnInt << endl;
        cout <<RefUnInt << endl;
        cout << *pUnInt << endl;
        *pUnInt = 15;
        cout << UnInt << endl;
        cout <<RefUnInt << endl;
        cout << *pUnInt << endl;
    }

}

int main()
{
    newDelete();
    return 0;
}

