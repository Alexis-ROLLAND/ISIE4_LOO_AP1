
#include "Bit.hpp"

std::string	Bit::toString() const{
	switch(Value){ 
		case bit_t::SET: return "SET";break;
		
		case bit_t::CLEAR: return "CLEAR";break;
		
		case bit_t::HIZ: return "HIZ";break;
		
		case bit_t::X: return "X";break;
		
		default: return "";
		
	}
	
}	


Bit::~Bit(){
}

