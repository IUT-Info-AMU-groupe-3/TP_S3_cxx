#ifndef CLLINK_H
#define CLLINK_H

namespace nsSdD{

    class ClLink {

       private:
            int m_Info;
            ClLink* m_Suivant;
       public:
            ClLink(int Info, ClLink* suivant);
            ~ClLink();

            int GetInfo() const;
            ClLink* GetSuivant() const;
            void SetInfo(int Info);
            void SetSuivant(ClLink *suivant);

    };


}

#endif // CLLINK_H

