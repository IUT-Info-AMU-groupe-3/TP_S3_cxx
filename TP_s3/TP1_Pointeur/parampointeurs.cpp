#include <iostream>
#include <string>
using namespace std;

namespace{

    void Proc1(int* UnInt){
        cout << *UnInt << "\t";
    }

    void ParamPtr(){
        int UnInt = 10;
        Proc1(&UnInt);
    }

}

int main()
{
    ParamPtr();
    return 0;
}
