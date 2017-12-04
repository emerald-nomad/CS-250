#include "lab9_Character.hpp"

#include <cstdlib>
#include <iostream>
using namespace std;

int ICharacter::getAttack() {
    return rand() % m_atk;
}

int ICharacter::getHealing() {
    int healing = rand() % m_mag;
    m_hp += healing;
    
    if (m_hp > 100) {
        m_hp = 100;
    }
    
    return healing;
}

int ICharacter::getHP() {
    return m_hp;
}

string ICharacter::getName() {
    return m_name;
}

void ICharacter::setup(const string& name, int atk, int mag) {
    m_name = name;
    m_atk = atk;
    m_mag = mag;
    m_hp = 100;
}

void ICharacter::subtractDamage(int damage) {
    m_hp -= damage;
}

TurnChoice NPC::getChoice() {
    return TurnChoice(rand() % 2);
}

TurnChoice Player::getChoice() {
    int choice;
    cout << "Select your choice: ";
    cin >> choice;
    cout << endl;
    
    return TurnChoice( choice );
}
