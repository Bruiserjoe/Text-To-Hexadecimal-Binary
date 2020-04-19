#include <iostream>
#include <stdlib.h>
#include <string> 
#include <bitset>

int work[1000];
std::string answ;

void binary() {
	for (std::size_t i = 0; i < answ.size(); i++) {
		std::cout << std::bitset<8>(answ.c_str()[i]) << std::endl;
	}	
}
void hexa() {
	for (int i = 0; i < answ.size(); i++) {
		//Converts to ascii decimal number and then outputs hexadecimal
		work[i] = int(answ[i]);
		std::cout << std::hex << work[i] << " ";
	}
	std::cout << std::endl;
}
int main() {
	std::cout << "Binary?Y/N: ";
	std::cin >> answ;
	if (answ == "Y" || answ == "y") {
		std::cout << "Input text: ";
		std::cin >> answ;
		binary();
	}
	if (answ == "N" || answ == "n") {
		std::cout << "Input text: ";
		std::cin >> answ;
		hexa();
	}
	std::cout << "Done" << std::endl;
	std::cin >> answ;

}