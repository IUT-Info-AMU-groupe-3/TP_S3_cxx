#include <iostream>
#include "ClLink.h"
using namespace nsSdD;

ClLink::ClLink(int Info = 0, ClLink* suivant = nullptr):m_Info(Info),m_Suivant(suivant){
    std::cout << "construit : " << GetInfo() << std::endl;
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
    std::cout << "détruit : "<< GetInfo() << std::endl;
}
