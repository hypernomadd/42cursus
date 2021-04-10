#ifndef POWERFIST_HPP_
# define POWERFIST_HPP_

#include "AWeapon.hpp"

class PowerFist : public AWeapon
{
	public:
		PowerFist();
		PowerFist(const PowerFist &other);

		virtual
		~PowerFist();

		PowerFist& operator=(const PowerFist &other);

		virtual void attack() const;
};

#endif /* POWERFIST_HPP_ */
