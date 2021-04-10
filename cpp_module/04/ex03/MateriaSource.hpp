#ifndef MATERIASOURCE_HPP_
# define MATERIASOURCE_HPP_

# include "IMateriaSource.hpp"
# include "Character.hpp"

class MateriaSource : public IMateriaSource
{
	private:
		AMateria *_inventory[INVENTORY_SIZE];

		void zeroInventory();

	public:
		MateriaSource();
		MateriaSource(const MateriaSource &other);

		virtual ~MateriaSource();

		MateriaSource& operator=(const MateriaSource &other);

		virtual void learnMateria(AMateria*);

		virtual AMateria* createMateria(std::string const &type);
};

#endif /* MATERIASOURCE_HPP_ */
