#ifndef __BIT_H__
#define	__BIT_H__

#include <cstdint>
#include <string>
#include <iostream>

class Bit{
	public:
	enum class bit_t:std::int8_t {SET,CLEAR,HIZ,X};
	
	private:
	bit_t	Value;
	
	public:
	
	Bit(){Value=bit_t::X;};
	
	Bit(bit_t InitialValue){Value=InitialValue;};
	virtual ~Bit();
	
	bit_t	getValue() const {return Value;};
	std::string	toString() const;	
	
	void	set(){Value=bit_t::SET;};			// set to SET
	void	clear(){Value=bit_t::CLEAR;};		// set to CLEAR
	void	unregister(){Value=bit_t::X;};	// set to X
	void	disconnect(){Value=bit_t::HIZ;};	// set to HIZ
		
	friend std::ostream &operator<<(std::ostream &os, const Bit &bit) {  os << bit.toString();return os;};

		
};
#endif

