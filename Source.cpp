#include <iostream>
#include <stdlib.h>
#include <string> 
#include <bitset>

int work[1000];
std::string answ;
char alph[26] = { 'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z' };


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
	std::cout << "Input text: ";
	std::cin >> answ;
	std::cout << "Binary?Y/N: ";
	std::cin >> answ;
	if (answ == "Y" || answ == "y") {
		binary();
	}
	if (answ == "N" || answ == "n") {
		hexa();
	}
	std::cout << "Done" << std::endl;
	system("pause");

}