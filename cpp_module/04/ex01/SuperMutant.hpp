#ifndef SUPERMUTANT_HPP_
# define SUPERMUTANT_HPP_

# include "Enemy.hpp"

class SuperMutant : public Enemy
{
	public:
		SuperMutant();
		SuperMutant(const SuperMutant &other);

		virtual ~SuperMutant();

		SuperMutant& operator=(const SuperMutant &other);

		virtual void takeDamage(int);
};

#endif /* SUPERMUTANT_HPP_ */
