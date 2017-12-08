
#ifndef SAMPLE_H
# define SAMPLE_H

# include <iostream>

class Sample
{
public:
	Sample(void);
	Sample(Sample const &src);
	Sample(int const n);
	~Sample(void);

	int getfoo(void) const;
	Sample &operator=(Sample const &rhs);

private:
	int 	_foo;
};

std::ostream & operator<<(std::ostream &o, Sample const &i);




#endif