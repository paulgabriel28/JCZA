#include <iostream>
#include <vector>

#include "Joc.h"
#include "JC.h"
#include "JZ.h"
#include "JCZA.h"

using namespace std;

int main() 
{
    vector<Joc*> vec;
    vec.push_back(new JC(1, 3));

    string str[2] = {"clasic", "20 fete"};
    vec.push_back(new JZ(str, 2));
    
    vec.push_back(new JCZA(1, 3, str, 2, 1, "BoardGame"));

    for(auto &joc : vec) {
        joc->afisare();
        cout << endl;
    }
    
    for(vector<Joc*>::iterator i = vec.begin(); i != vec.end(); i++) {
        for(vector<Joc*>::iterator j = vec.begin(); j != vec.end(); j++) {
            if((*i)->getNrElem() < (*j)->getNrElem()) {
                swap(*i, *j);
                cout << (*i)->getNrElem() << " " << (*j)->getNrElem() << endl;
            }
        }

    }

    cout << "\n\nVector sortat:\n";
    for(auto &joc : vec) {
        joc->afisare();
        cout << endl;
    }

    return 0;
}