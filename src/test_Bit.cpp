#include <iostream>

#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"

#include "Bit.hpp"

TEST_CASE("testing the Bit class : Ctors, getValue accessor and toString method") {
	
	// Default Ctor
	Bit	myBit;
	CHECK(myBit.getValue() == Bit::bit_t::X);
	
	// Ctor with bit value
	Bit* pBit = new Bit(Bit::bit_t::SET);
	CHECK(pBit->getValue() == Bit::bit_t::SET);
	delete pBit;
	
	pBit = new Bit(Bit::bit_t::CLEAR);
	CHECK(pBit->getValue() == Bit::bit_t::CLEAR);
	delete pBit;
	
	pBit = new Bit(Bit::bit_t::HIZ);
	CHECK(pBit->getValue() == Bit::bit_t::HIZ);
	delete pBit;
	
	pBit = new Bit(Bit::bit_t::X);
	CHECK(pBit->getValue() == Bit::bit_t::X);
	delete pBit;
	
	// toString()
	pBit = new Bit(Bit::bit_t::SET);
	CHECK(pBit->toString() == "SET");
	delete pBit;
	
	pBit = new Bit(Bit::bit_t::CLEAR);
	CHECK(pBit->toString() == "CLEAR");
	delete pBit;
	
	pBit = new Bit(Bit::bit_t::HIZ);
	CHECK(pBit->toString() == "HIZ");
	delete pBit;
	
	pBit = new Bit(Bit::bit_t::X);
	CHECK(pBit->toString() == "X");
	delete pBit;
	
		
}

TEST_CASE("testing the Bit class : set(), clear(), disconnect() and unregister() methods") {
	Bit myBit;
	
	REQUIRE(myBit.getValue() != Bit::bit_t::SET);
	
	myBit.set();
	CHECK(myBit.getValue() == Bit::bit_t::SET);
	
	myBit.clear();
	CHECK(myBit.getValue() == Bit::bit_t::CLEAR);
	
	myBit.disconnect();
	CHECK(myBit.getValue() == Bit::bit_t::HIZ);
	
	myBit.unregister();
	CHECK(myBit.getValue() == Bit::bit_t::X);
	
}

TEST_CASE("testing the Bit class : constant Bit Objects, and << operator") {
	
	const Bit HiZbit(Bit::bit_t::HIZ);
	
	CHECK(HiZbit.getValue() == Bit::bit_t::HIZ);
	
	std::cout << "Value of HiZbit (via <<) : " << HiZbit << std::endl;
	
	

}



