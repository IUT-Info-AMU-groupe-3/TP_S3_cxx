#include <iostream>
#include "ClLink.h"
using namespace std;
using namespace nsSdD;

ClLink::ClLink(int Info = 0, ClLink* suivant = nullptr):m_Info(Info),m_Suivant(suivant){
    cout << "construit : " << GetInfo() << endl;
}


int ClLink::GetInfo() const{
    return m_Info;
}

ClLink* ClLink::GetSuivant() const{
    return m_Suivant;
}

void ClLink::SetInfo(int Info){
    m_Info = Info;
}

void ClLink::SetSuivant(ClLink* suivant){
    *m_Suivant = *suivant;
}

ClLink::~ClLink(){
    delete m_Suivant;
    cout << "détruit : "<< GetInfo() << endl;
}
