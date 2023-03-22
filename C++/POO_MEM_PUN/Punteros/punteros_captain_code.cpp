#include<iostream>
#include<string>


int main(){
	std::string Languages[3] = { "Python" , "C++" , "Java" };
	std::string *ptrLan = Languages;

	std::cout<< *ptrLan <<std::endl;
	ptrLan++;

	std::cout<< *ptrLan <<std::endl;
	ptrLan++;

	std::cout<< *ptrLan <<std::endl;

	return 0;
}