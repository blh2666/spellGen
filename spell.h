//
// Created by bhill on 5/14/2018.
//

#include <array>

using namespace std;

#ifndef SPELLGEN_SPELL_H
#define SPELLGEN_SPELL_H


class spell {
    string name;

    int power;
    int evilness;
    int score;

public:
    enum Element{Fire,Ice,Water,Lightning,Radiant,Necrotic,Psychic,Earth,Force};
    enum Role{aoeDamage,singleDamage,damageOverTime,buff,debuff,healing,utility,trickery};
    enum School{evocation,illusion,transmutation,enchantment,necromancy,restoration,abjuration};


    void set_attributes(string name1, Element elm, Role role1, School school1, int power1, int evilness1){
        name = name1;
        element = elm;
        role = role1;
        school = school1;
        power = power1;
        evilness = evilness1;
        score = 0;
    }

    string getName(){
        return name;
    }

    spell::Element getEl() {
        return element;
    }

    spell::Role getRole() {
        return role;
    }

    spell::School getSchool() {
        return school;
    }
    int getPower() {
        return power;
    }

    int getEvilness() {
        return evilness;
    }

    void addToScore(int modifier) {
        score += modifier;
    }

    void resetScore() {
        score = 0;
    }

    int getScore() {
        return score;
    }



private:
    Element element;
    Role role;
    School school;
};




#endif //SPELLGEN_SPELL_H
