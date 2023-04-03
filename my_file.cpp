#include <iostream>
#include <string>
using namespace std;

class Plant {
public:
	virtual void grow(int a);

};

class Soundable {
public:
	virtual void makeSound() = 0;
};


class Tree : public Plant,
		public Soundable

{
private:
	string color;
	int height;
public:
	Tree(string color) {
		this->color = color;
	}
	
	Tree(int height) {
		this->height = height;
	
	}
	

	void grow(int a) override {
		height += 3;
	}

	void makeSound() override {
		cout << "Szum";
	}
};

int main()
{

	Tree brzoza("bialy");
	Tree brzoza(5);

	void grow(5);
	void makeSound();

	//cout << height;
	//cout << color;
}
