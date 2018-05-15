//
// Created by bhill on 5/14/2018.
//

#ifndef SPELLGEN_SCHOOLPREFERENCE_H
#define SPELLGEN_SCHOOLPREFERENCE_H
#include "../preference.h"
#include "../spell.h"

class SchoolPreference : public preference{

    int prefSchool;

public:
    void applyPreference(spell Spell,int weight){

        if (Spell.getSchool() == prefSchool){
            Spell.addToScore(weight);
        }
        else{
            Spell.addToScore(-weight);
        }

    }

    void setSchool(int School){
        prefSchool = School;
    }


};


#endif //SPELLGEN_SCHOOLPREFERENCE_H
