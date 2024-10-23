// You are going to automate Harl. It won’t be difficult since it always says the same
// things. You have to create a Harl class with the following private member functions:
// • void debug( void );
// • void info( void );
// • void warning( void );
// • void error( void );
// Harl also has a public member function that calls the four member functions above
// depending on the level passed as parameter:
// void complain( std::string level );
// The goal of this exercise is to use pointers to member functions. This is not a
// suggestion. Harl has to complain without using a forest of if/else if/else. It doesn’t think
// twice!
// Create and turn in tests to show that Harl complains a lot. You can use the examples
// of comments listed above in the subject or choose to use comments of your own.

#ifndef HARL_HPP
#define HARL_HPP
# include <iostream>

class Harl
{
	public:
		Harl();
		~Harl();
		void complain(std::string level);
	private:
		void debug(void);
		void info(void);
		void warning(void);
		void error(void);
};

#endif