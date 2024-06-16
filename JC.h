#pragma once

#include "Joc.h"

#include <iostream>
using namespace std;

class JC: virtual public Joc { 
    protected:
        bool tip; // tipul este 0, daca pentru acest joc se folosesc carti clasice; daca nu, tipul este 1
        int cc; // cate carti sunt necesare pentru acest joc

    public:
        JC() = default;
        JC(const bool &, const int &);

        int getNrElem() const override;
        void afisare() const override;
};