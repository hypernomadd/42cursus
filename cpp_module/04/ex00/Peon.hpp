#ifndef PEON_HPP_
# define PEON_HPP_

# include <iostream>

# include "Victim.hpp"

class Peon : public Victim
{
	protected:
		Peon();

	public:
		Peon(std::string name);
		Peon(const Peon &other);

		virtual ~Peon();

		Peon& operator=(const Peon &other);

		virtual void getPolymorphed() const;
};

std::ostream &operator <<(std::ostream &stream, Peon &peon);

#endif /* PEON_HPP_ */
