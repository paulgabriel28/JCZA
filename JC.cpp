#include "JC.h"

JC::JC(const bool &t, const int &c): tip(t), cc(c) {};

int JC::getNrElem() const {
    return cc;
}

void JC::afisare() const {
    cout << "\nTipul cartilor: ";
    if(tip == 0) {
        cout << "clasice";
    }
    else {
        cout << "nu sunt clasice";
    }

    cout << "\nCarti necesare pentru acest joc: " << cc;
}