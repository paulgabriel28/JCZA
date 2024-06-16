#include "JCZA.h"

JCZA::JCZA(): ces(0), info_supl(nullptr) {}

JCZA::JCZA(const bool &tipJC, const int &ccJC, const string *tzJZ, const int &czJZ, const int &nrCes, const char *info): JC(tipJC, ccJC), JZ(tzJZ, czJZ), ces(nrCes) {
    info_supl = new char[strlen(info) + 1];
    strcpy(info_supl, info);
}

JCZA::JCZA(JCZA &joc) {
    info_supl = nullptr;
    joc = *this;
}

JCZA& JCZA::operator=(const JCZA &joc) {
    if(&joc != this) {
        JC::operator=(joc);
        JZ::operator=(joc);

        ces = joc.ces;

        delete [] info_supl;

        if(joc.info_supl) {
            info_supl = new char[strlen(joc.info_supl) + 1];
            strcpy(info_supl, joc.info_supl);
        }
        else {
            info_supl = nullptr;
        }
    }

    return *this;
}

JCZA::~JCZA() {
    delete [] tz;
    delete [] info_supl;
    ces = 0;
}

int JCZA::getNrElem() const {
    return ces + cz + cc;
}

void JCZA::afisare() const {
    JC::afisare();
    JZ::afisare();

    cout << "\nNumar elemente suplimentare: " << ces;
    cout << "\nInformatii suplimentare: " << info_supl;
}