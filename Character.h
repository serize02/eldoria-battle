//
// Created by eserize on 9/11/2024.
//

#ifndef CHARACTER_H
#define CHARACTER_H
#include <string>
#include <vector>

using std::string;
using std::vector;

class Character {
protected:
    string name;
    int life_points, energy, damage, level;
public:
    Character (const string&);
    void attack(Character &enemy) const;
    void receive_damage(int damage);
    bool is_alive() const;
    void level_up();
    void reduce_energy(int energy_cost);
    void restore_energy(int energy_points);
    void restore_life(int life_points);
};





#endif //CHARACTER_H
