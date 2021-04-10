#ifndef PLASMARIFLE_HPP_
# define PLASMARIFLE_HPP_

#include "AWeapon.hpp"

class PlasmaRifle : public AWeapon
{
	public:
		PlasmaRifle();
		PlasmaRifle(const PlasmaRifle &other);

		virtual ~PlasmaRifle();

		PlasmaRifle& operator=(const PlasmaRifle &other);

		virtual void attack() const;
};

#endif /* PLASMARIFLE_HPP_ */
