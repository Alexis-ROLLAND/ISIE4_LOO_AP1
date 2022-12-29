
#include "Bit.hpp"

std::string_view	Bit::toString() const noexcept{
	switch(this->Value){ 
		case bit_t::SET: return "SET";break;
		case bit_t::CLEAR: return "CLEAR";break;
		case bit_t::HIZ: return "HIZ";break;
		case bit_t::X: return "X";break;
		default: return "";
		}
	
}	

std::ostream& operator<<(std::ostream& os, const Bit& bit) noexcept {  	// << operator overloaded - redirecting to toString method.
	os << bit.toString();
	return os;
	}	 

