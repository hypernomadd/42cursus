#ifndef AWEAPON_HPP_
# define AWEAPON_HPP_

# include <iostream>

class AWeapon
{
	private:
		std::string _name;
		int _apcost;
		int _damage;

	protected:
		AWeapon();

	public:
		AWeapon(std::string const &name, int apcost, int damage);
		AWeapon(const AWeapon &other);

		virtual ~AWeapon();

		AWeapon& operator=(const AWeapon &other);

		virtual void attack() const = 0;

		int getAPCost() const;
		int getDamage() const;
		const std::string& getName() const;
};

#endif /* AWEAPON_HPP_ */
