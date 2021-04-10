#ifndef ASSAULTTERMINATOR_HPP_
# define ASSAULTTERMINATOR_HPP_

# include "ISpaceMarine.hpp"

class AssaultTerminator : public ISpaceMarine
{
	public:
		AssaultTerminator();
		AssaultTerminator(const AssaultTerminator &other);

		virtual ~AssaultTerminator();

		AssaultTerminator& operator=(const AssaultTerminator &other);

		virtual ISpaceMarine* clone() const;

		virtual void battleCry() const;
		virtual void rangedAttack() const;
		virtual void meleeAttack() const;
};

#endif /* ASSAULTTERMINATOR_HPP_ */
