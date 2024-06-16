#pragma once

#include "Joc.h"

#include <string>
#include <iostream>

using namespace std;

class JZ: virtual public Joc {
    protected:
        string* tz; //un vector in care se stocheaza tipul fiecarui zar: clasic, cu 20 fete, cu 8 fete, etc
        int cz; // cate zaruri sunt necesare pentru acest joc

    public:
        JZ();
        JZ(const string *, const int &);
        JZ(JZ &);
        JZ& operator=(const JZ &);
        ~JZ();

        int getNrElem() const override;
        void afisare() const override;
};