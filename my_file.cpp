#include <iostream>
#include <string>
using namespace std;

class Plant {
public:
	virtual void grow(int a)=0;

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
	Tree(string color, int height) {
		this->color = color;
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

	Tree brzoza("bialy", 5);


	brzoza.grow(5);
	brzoza.makeSound();

	//out << height;
	//cout << color;
}
