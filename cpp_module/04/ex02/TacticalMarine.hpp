#ifndef TACTICALMARINE_HPP_
# define TACTICALMARINE_HPP_

#include "ISpaceMarine.hpp"

class TacticalMarine : public ISpaceMarine
{
	public:
		TacticalMarine();
		TacticalMarine(const TacticalMarine &other);

		virtual ~TacticalMarine();

		TacticalMarine& operator=(const TacticalMarine &other);

		virtual ISpaceMarine* clone() const;

		virtual void battleCry() const;
		virtual void rangedAttack() const;
		virtual void meleeAttack() const;
};

#endif /* TACTICALMARINE_HPP_ */
