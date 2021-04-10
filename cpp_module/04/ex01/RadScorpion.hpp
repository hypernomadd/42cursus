#ifndef RADSCORPION_HPP_
# define RADSCORPION_HPP_

# include "Enemy.hpp"

class RadScorpion : public Enemy
{
	public:
		RadScorpion();
		RadScorpion(const RadScorpion &other);

		virtual ~RadScorpion();

		RadScorpion& operator=(const RadScorpion &other);
};

#endif /* RADSCORPION_HPP_ */
