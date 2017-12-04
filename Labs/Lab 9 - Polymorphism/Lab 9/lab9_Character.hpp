#ifndef _CHARACTER
#define _CHARACTER

#include <string>
using namespace std;

enum TurnChoice { ATTACK = 0, HEAL = 1 };

class ICharacter {
public:
    int getAttack();
    int getHealing();
    void setup(const string& name, int atk, int mgk);
    int getHP();
    void subtractDamage(int damage);
    string getName();
    virtual TurnChoice getChoice() = 0;
    
protected:
    int m_hp;
    int m_atk;
    int m_mag;
    string m_name;
};

class NPC : public ICharacter {
public:
    virtual TurnChoice getChoice();
    
};

class Player : public ICharacter {
public:
    virtual TurnChoice getChoice();
};

#endif
