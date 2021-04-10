#ifndef ENEMY_HPP_
# define ENEMY_HPP_

# include <iostream>

class Enemy
{
	private:
		int _hp;
		std::string _type;

	protected:
		Enemy();

	public:
		Enemy(int hp, std::string type);
		Enemy(const Enemy &other);

		virtual ~Enemy();

		Enemy& operator=(const Enemy &other);

		virtual void takeDamage(int);

		int getHp() const;
		const std::string& getType() const;
};

#endif /* ENEMY_HPP_ */
