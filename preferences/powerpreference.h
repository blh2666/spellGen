//
// Created by bhill on 5/15/2018.
//

#ifndef SPELLGEN_POWERPREFERENCE_H
#define SPELLGEN_POWERPREFERENCE_H
#include "../preference.h"
#include "../spell.h"


class powerPreference : public preference{
    int prefPower;

public:
    void applyPreference(spell Spell, int weight){
        if (Spell.getPower() > 0){
            Spell.addToScore(weight*prefPower);
        }
        else if (Spell.getPower() < 0){
            Spell.addToScore(-weight*prefPower);
        }
    }

    void setPower(int power){
        prefPower = power;
    }
};


#endif //SPELLGEN_POWERPREFERENCE_H
