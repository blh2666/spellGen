//
// Created by bhill on 5/14/2018.
//

#ifndef SPELLGEN_ROLEPREFERENCE_H
#define SPELLGEN_ROLEPREFERENCE_H
#include "../preference.h"
#include "../spell.h"

class rolepreference : public preference{

    int prefRole;

public:
    void applyPreference(spell Spell, int weight){

        if (Spell.getRole()==prefRole){
            Spell.addToScore(weight);
        }
        else{
            Spell.addToScore(-weight);
        }
    }

    void setRole(int role){
        prefRole = role;
    }
};


#endif //SPELLGEN_ROLEPREFERENCE_H
