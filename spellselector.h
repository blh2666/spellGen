//
// Created by bhill on 5/15/2018.
//

#ifndef SPELLGEN_SPELLSELECTOR_H
#define SPELLGEN_SPELLSELECTOR_H

#include <io.h>
#include <fstream>
#include <iostream>
#include <vector>
#include <sstream>
#include "spell.h"
#include "preferences/elementpreference.h"
#include "preferences/evilpreference.h"
#include "preferences/powerpreference.h"
#include "preferences/rolepreference.h"
#include "preferences/schoolpreference.h"

class SpellSelector {

    vector<spell> spelllist;
    //preference preferences[10];

public:
/*
    string* getSpells(int num){
        string spellList[num];

        for (int i = 0; i < num; i++){

            spellList[i] = getSpell().getName();
        }

        return &spellList[0];
    }

    spell getSpell(){

        for (int i = 0; i < sizeof(spelllist)/ sizeof(spell); i++){

            spell currSpell = spelllist[i];

            for (int j = 0; j < sizeof(preferences)/sizeof(preference); j++){

                preferences[j].applyPreference(currSpell,5);

            }
        }
    }
    */

    vector<string>split(const string &s,char delim){
        stringstream ss(s);
        string item;
        vector<string> tokens;
        while (getline(ss, item, delim)) {
            tokens.push_back(item);
        }
        return tokens;
    }

    void buildSpells(){
        ifstream spellFile;
        spellFile.open("../spell lists/druid");
        string line;

        while (getline(spellFile,line)){
            spell newSpell;

            vector<string> elements = split(line,'/');

            newSpell.set_attributes(elements.at(0),newSpell.translateElement(elements.at(1)),newSpell.translateRole(elements.at(2)),
                                    newSpell.translateSchool(elements.at(3)),stoi(elements.at(4)),stoi(elements.at(5)));

            spelllist.push_back(newSpell);

        }
        spellFile.close();

    }

};


#endif //SPELLGEN_SPELLSELECTOR_H
