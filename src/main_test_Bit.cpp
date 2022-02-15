#include <iostream>
#include <cassert>

#include "Bit.hpp"

int main(){
	
	/** Test 1 : Bit::Bit()
	 * Create new Bit Object, check if value is X
	 * 
	 */
	std::cout << "Test 1 - Bit::Bit()" << std::endl;
	Bit	TestBit;
	assert(TestBit.getValue() == Bit::bit_t::X);
	std::cout << "Test 1 - Bit::Bit() - PASSED OK" << std::endl << std::endl;
	
	/** Test 2 : Bit::Bit(bit_t InitialValue)
	 * Using dynamic allocation, create , check and destroy successively
	 * one object for the 4 possible values
	 */
	 
	 std::cout << "Test 2 - Bit::Bit(bit_t)" << std::endl;
	 Bit* pBit;
	 
	 pBit = new Bit(Bit::bit_t::SET);
	 assert(pBit->getValue() == Bit::bit_t::SET);
	 delete pBit;
	 
	 pBit = new Bit(Bit::bit_t::CLEAR);
	 assert(pBit->getValue() == Bit::bit_t::CLEAR);
	 delete pBit;
	 
	 pBit = new Bit(Bit::bit_t::HIZ);
	 assert(pBit->getValue() == Bit::bit_t::HIZ);
	 delete pBit;
	 
	 pBit = new Bit(Bit::bit_t::X);
	 assert(pBit->getValue() == Bit::bit_t::X);
	 delete pBit;
	 std::cout << "Test 2 - Bit::Bit(bit_t) - PASSED OK" << std::endl << std::endl;	
	
	 /** Test 3 : Bit::toString
	 * Using dynamic allocation, create , check the toString Method and destroy successively
	 * one object for the 4 possible values
	 */
	 std::cout << "Test 3 - Bit::toString" << std::endl;
	 pBit = new Bit(Bit::bit_t::SET);
	 assert(pBit->toString() == "SET");
	 delete pBit;
	 
	 pBit = new Bit(Bit::bit_t::CLEAR);
	 assert(pBit->toString() == "CLEAR");
	 delete pBit;
	 
	 pBit = new Bit(Bit::bit_t::HIZ);
	 assert(pBit->toString() == "HIZ");
	 delete pBit;
	 
	 pBit = new Bit(Bit::bit_t::X);
	 assert(pBit->toString() == "X");
	 delete pBit;
	 std::cout << "Test 3 - Bit::toString - PASSED OK" << std::endl << std::endl;	
	
	 /** Test 4 : Bit::set()
	  * Using TestBit Object (wich is initialized to X), call the set
	  * method, check if value is now SET
	  */
	  std::cout << "Test 4 - Bit::set" << std::endl;
	  assert(TestBit.getValue() == Bit::bit_t::X);	// first, check TestBit is still X
	  TestBit.set();
	  assert(TestBit.getValue() == Bit::bit_t::SET);	
	  std::cout << "Test 4 - Bit::set - PASSED OK" << std::endl << std::endl;	
	  
	  /** Test 5 : Bit::clear()
	  * Using TestBit Object (wich is now SET), call the clear
	  * method, check if value is now CLEAR
	  */
	  std::cout << "Test 5 - Bit::clear" << std::endl;
	  TestBit.clear();
	  assert(TestBit.getValue() == Bit::bit_t::CLEAR);	
	  std::cout << "Test 5 - Bit::clear - PASSED OK" << std::endl << std::endl;	
	  
	  /** Test 6 : Bit::disconnect()
	  * Using TestBit Object (wich is now CLEAR), call the disconnect
	  * method, check if value is now HIZ
	  */
	  std::cout << "Test 6 - Bit::disconnect" << std::endl;
	  TestBit.disconnect();
	  assert(TestBit.getValue() == Bit::bit_t::HIZ);	
	  std::cout << "Test 6 - Bit::disconnect - PASSED OK" << std::endl << std::endl;		
	
	 /** Test 7 : Bit::unregister()
	  * Using TestBit Object (wich is now HIZ), call the unregister
	  * method, check if value is now X
	  */
	  std::cout << "Test 7 - Bit::unregister" << std::endl;
	  TestBit.unregister();
	  assert(TestBit.getValue() == Bit::bit_t::X);	
	  std::cout << "Test 7 - Bit::unregister - PASSED OK" << std::endl << std::endl;		
	
	  std::cout << "Value of TestBit (via <<) : " << TestBit << std::endl;	
	
return 0;	
}

