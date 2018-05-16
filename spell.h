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
    enum Element{Fire,Ice,Water,Lightning,Radiant,Necrotic,Psychic,Earth,Force,None};
    enum Role{damage,buff,debuff,healing,utility,trickery};
    enum School{evocation,illusion,transmutation,enchantment,necromancy,abjuration,divination,conjuration};


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

    spell::Element translateElement(string string1){
        if (string1 == "Fire"){
            return Fire;
        }
        else if (string1 == "Ice"){
            return Ice;
        }
        else if (string1 == "Water"){
            return Water;
        }
        else if (string1 == "Lightning"){
            return Lightning;
        }
        else if (string1 == "Radiant"){
            return Radiant;
        }
        else if (string1 == "Necrotic"){
            return Necrotic;
        }
        else if (string1 == "Psychic"){
            return Psychic;
        }
        else if (string1 == "Earth"){
            return Earth;
        }
        else if (string1 == "Force"){
            return Force;
        }
        else if (string1 == "None"){
            return None;
        }
    }

    spell::Role translateRole(string string1){
        if (string1 == "damage"){
            return damage;
        }
        else if (string1 == "buff"){
            return buff;
        }
        else if (string1 == "debuff"){
            return debuff;
        }
        else if (string1 == "healing"){
            return healing;
        }
        else if (string1 == "utility"){
            return utility;
        }
        else if (string1 == "trickery"){
            return trickery;
        }
    }


    spell::School translateSchool(string string1){
        if (string1 =="eveocation"){
            return evocation;
        }
        else if (string1 == "illusion"){
            return illusion;
        }
        else if (string1 == "transmutation"){
            return transmutation;
        }
        else if (string1 == "enchantment"){
            return enchantment;
        }
        else if (string1 == "necromancy"){
            return necromancy;
        }
        else if (string1 == "abjuration"){
            return abjuration;
        }
        else if (string1 == "divination"){
            return divination;
        }
        else if (string1 == "conjuration"){
            return conjuration;
        }
    }



private:
    Element element;
    Role role;
    School school;
};




#endif //SPELLGEN_SPELL_H
