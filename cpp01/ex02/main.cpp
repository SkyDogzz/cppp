#include <iostream>
#include <string>

int main(void)
{
	std::string stringVAR = "HI THIS IS BRAIN";
	void *stringPTR = &stringVAR;
	std::string &stringREF = stringVAR;

	std::cout << "StringVAR addr = " << &stringVAR << std::endl;
	std::cout << "StringPTR addr = " << &stringPTR << std::endl;
	std::cout << "StringREF addr = " << &stringREF << std::endl;

	std::cout << "StringVAR value = " << stringVAR << std::endl;
	std::cout << "StringPTR value = " << stringPTR << std::endl;
	std::cout << "StringREF value = " << stringREF << std::endl;
}
