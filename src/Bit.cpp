/**
 *	@file	Bit.cpp
 * 	@brief 	Bit class definition file
 * 	@author	Alexis ROLLAND
 * 	@date	2025-10
 *
 */
#include "Bit.hpp"
//----------------------------------------------------------------------
std::string_view Bit::toString() const noexcept {
    return this->str_map.at(this->Value); /**< 	toString method using the map to get the string from the bit value */
}
//----------------------------------------------------------------------
std::ostream &operator<<(std::ostream &os, const Bit &bit) noexcept {
    os << bit.toString(); /**< 	<< operator overloaded - redirecting to toString method. */
    return os;
}
//----------------------------------------------------------------------
