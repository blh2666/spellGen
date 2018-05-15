//
// Created by bhill on 5/14/2018.
//

#ifndef SPELLGEN_ELEMENTPREFERENCE_H
#define SPELLGEN_ELEMENTPREFERENCE_H
#include "../preference.h"
#include "../spell.h"

class elementPreference : public preference{

    int prefElement;

public:
    void applyPreference(spell Spell, int weight){

        if (Spell.getEl()==prefElement){
            Spell.addToScore(weight);
        }
        else{
            Spell.addToScore(-weight);
        }
    }

    int setPreference(int Element){
        prefElement = Element;
    }
};


#endif //SPELLGEN_ELEMENTPREFERENCE_H
