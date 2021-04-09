#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP

# include <iostream>

class Fixed
{

private:
	int					fixedPointValue;
	static const int	fracBits = 8;

public:
	Fixed(void);
	~Fixed(void);
	Fixed(const Fixed &fixed);
	Fixed(const int nb);
	Fixed(const float nb);
	Fixed				&operator=(const Fixed &fixed);
	float				toFloat(void) const;
	int					toInt(void) const;
	void				setRawBits(int const raw);
	int					getRawBits(void) const;

};

std::ostream		&operator<<(std::ostream &os, const Fixed &fixed);

#endif
