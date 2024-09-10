#include <cstdint>
#include <iostream>

int compareAddresses()
{
    uintptr_t newZombieAddr = 0x7ffeea43e758;
    uintptr_t randomChumpAddr = 0x7ffeea43e748;
	
	std::cout << "Variables addresses from prevoius call of programm:\n";
    std::cout << "newZombieAddr variable address: " << std::hex << newZombieAddr << std::endl;
    std::cout << "randomChumpAddr variable address: " << std::hex << randomChumpAddr << std::endl;

    if (randomChumpAddr > newZombieAddr) {
        std::cout << "randomChumpAddr address is greater than newZombieAddr address." << std::endl;
    } else {
        std::cout << "newZombieAddr address is greater than randomChumpAddr address." << std::endl;
    }

    return 0;

	std::cout << "zombie1 declared in newZombie func has memory address: " << &newZombieAddr << std::endl;
	std::cout << "zombie2 declared in randomChump func has memory address: " << &randomChumpAddr << std::endl;

}