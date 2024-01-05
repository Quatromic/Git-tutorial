#include <iostream>
#include <string>

using namespace std;

class car{
	public:
	std::string name,email;
	int age;
	car(std::string Name,std::string Email,int Age){
		this->name = Name;
		this->email = Email;
		this->age = Age;
	}
};

int main(){
	car car1("Lawrence Muchiri","llwmuchiri@gmail.com",17));
}
