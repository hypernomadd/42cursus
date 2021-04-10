#ifndef ICE_HPP_
# define ICE_HPP_

# include "AMateria.hpp"

class Ice : public AMateria
{
	public:
		Ice();
		Ice(const Ice &other);

		virtual ~Ice();

		Ice& operator=(const Ice &other);

		virtual AMateria* clone() const;
		virtual void use(ICharacter &target);
};

#endif /* ICE_HPP_ */
