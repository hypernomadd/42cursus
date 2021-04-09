#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP

class Fixed
{

private:
	int					fixedPointValue;
	static const int	fracBits = 8;

public:
	Fixed(void);
	~Fixed(void);
	Fixed(const Fixed &fixed);
	Fixed				&operator=(const Fixed &fixed);
	void				setRawBits(int const raw);
	int					getRawBits(void) const;

};

#endif
