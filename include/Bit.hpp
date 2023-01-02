#ifndef __BIT_H__
#define	__BIT_H__

#include <cstdint>
#include <string>
#include <iostream>

class Bit{
	public:
	enum class bit_t:std::int8_t {SET,CLEAR,HIZ,X};		// enum as imbricated class
	
	private:
	bit_t	Value{bit_t::X};		// bit value, only attribute. Initialized with in-class initializer
	
	public:
	Bit() = default;											// No more explicit default Ctor, force use the "by default" (rule of Zero) 
	explicit Bit(bit_t InitialValue):Value{InitialValue}{};		// Ctor with initial bit value. Single argument -> make explicit to avoid implicit conversions
	virtual ~Bit() = default;									// Default Dtor
	
	constexpr bit_t	getValue() const {return this->Value;};		// getter for the bit value - callable with const bit type - Made constexpr
	[[nodiscard]] std::string_view	toString() const noexcept;	// toString "classic" method - callable with const bit type. Using the string_view type in place of "classic" string to avoit object copy for const strings. [[nodiscard]] here for preventing users to get rid of the return value.
	
	// The four services are consexpr to take opportunity to evaluate them at compile time
	constexpr void	set() noexcept {this->Value=bit_t::SET;};			// set to SET
	constexpr void	clear() noexcept {this->Value=bit_t::CLEAR;};		// set to CLEAR
	constexpr void	unregister() noexcept {this->Value=bit_t::X;};		// set to X
	constexpr void	disconnect() noexcept {this->Value=bit_t::HIZ;};	// set to HIZ

};

std::ostream& operator<<(std::ostream& os, const Bit& bit) noexcept;	// Overloading of the << operator. Must be obviously outside the class, but not friend function because calling au public service.

#endif

