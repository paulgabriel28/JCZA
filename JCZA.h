#pragma once

#include "JC.h"
#include "JZ.h"

#include <cstring>

using namespace std;

class JCZA: public JC, public JZ { 
    int ces; // cate elemente suplimentare sunt folosite in afara cartilor de joc si zarurilor
    char* info_supl;

    public:
        JCZA();
        JCZA(const bool &, const int &, const string *, const int &, const int &, const char *);
        JCZA(JCZA &);
        JCZA& operator=(const JCZA &);
        ~JCZA();

        int getNrElem() const override;
        void afisare() const override;
}; 