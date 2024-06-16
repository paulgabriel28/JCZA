#include "JZ.h"

JZ::JZ(): tz(nullptr), cz(0) {}

JZ::JZ(const string *zar, const int &nr_zar): cz(nr_zar) {
    tz = new string[nr_zar];
    for(int i = 0; i < nr_zar; i++) {
        tz[i] = zar[i];
    }
}

JZ::JZ(JZ &joc) {
    tz = nullptr;
    joc = *this;
}

JZ& JZ::operator=(const JZ &joc) {
    if(&joc != this) {
        cz = joc.cz;
        
        if(tz != nullptr) {
            delete [] tz;
            tz = nullptr;
        }

        tz = new string[cz];
        for(int i = 0; i < cz; i++) {
            tz[i] = joc.tz[i];
        }
    }

    return *this;
}

JZ::~JZ() {
    delete [] tz;
}

int JZ::getNrElem() const {
    return cz;
}

void JZ::afisare() const {
    cout << "\nNumar de zaruri: " << cz;
    cout << "\nTipul zarurilor: "; // se poate verifica daca sunt diferite de 0
    for(int i = 0; i < cz; i++) {
        cout << tz[i] << " | ";
    }
}