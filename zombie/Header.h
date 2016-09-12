#pragma once

class Zombie
{
private:
	char name[64], prior[64];
	int health, attack, critRate, kills;

public:
	void init(const char name[], const char occ[]);
	int rollAttack() const;
	void takeDamage(int dmg);
	void draw(bool brief) const;
	bool isAlive() const;

};