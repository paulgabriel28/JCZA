#pragma once

class Joc {
    public:
        Joc();
        virtual int getNrElem() const = 0;     
        virtual void afisare() const = 0;
        virtual ~Joc() = 0;
};