#include<iostream>
#include<string>

using namespace std;

class Hero
{
	private:
		string hero_name;
		int health_points;
		int magic_points;
		int attack_damage;
		
		void update_stats(int hp)
		{
			health_points = hp;
		}
		
	public:
		Hero() : health_points(100), magic_points(20), attack_damage(5)
		{
			cout << "Enter the hero's name: ";
			cin >> hero_name;
		}
		
		void display_stats()
		{
			cout << "Hero Name: " << hero_name << endl;
			cout << "HP: " << health_points << endl;
			cout << "MP: " << magic_points << endl;
			cout << "Attack Damage: " << attack_damage << endl;
		}
		
		void damage_hero(int hit)
		{
			int current_hp = health_points;
			int damaged_hp;
			
			damaged_hp = current_hp - hit;
			
			update_stats(damaged_hp);
			
			cout << "The hero was attacked!" << endl;
		}
		
};

main()
{
	Hero character;
	
	character.display_stats();
	cout << endl;
	character.damage_hero(11);
	cout << endl;
	character.display_stats();
}
