
#ifndef SAMPLE_H
# define SAMPLE_H

# include <iostream>

class Sample
{
public:
	Sample(int const n);
	~Sample(void);
	int getfoo(void) const;

	Sample &operator=(Sample const &rhs);

private:
	int 	_n;
};

std::ostream & operator<<(std::ostream &o, Sample const &rhs);


#endif