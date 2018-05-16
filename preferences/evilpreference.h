//
// Created by bhill on 5/15/2018.
//

#ifndef SPELLGEN_EVILPREFERENCE_H
#define SPELLGEN_EVILPREFERENCE_H
#include "../preference.h"
#include "../spell.h"

class evilpreference : public preference{
    int prefEvil;

public:
    void applyPreference(spell Spell, int weight){

        if (Spell.getEvilness()==prefEvil){
            Spell.addToScore(weight);
        }
        else{
            Spell.addToScore(-weight);
        }
    }

    void setEvil(int role){
        prefEvil = role;
    }
};


#endif //SPELLGEN_EVILPREFERENCE_H
