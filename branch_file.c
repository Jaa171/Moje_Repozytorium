
#include <iostream>
#include <string>
using namespace std;

class Tree {
private:
	string color;
	int height;
public:

};

class Human {
public:
	string name;
	int age;
	string occupation;
	void Cut(Tree a) {
		tree.cut_down(a);
	};
};
/*
class Leaf {
private:
	string color;
	int size;
public:
};
*/


int main() {
	Tree sosna;
	Human drwal;
	drwal.name = "Zbyszek\n";
	drwal.occupation = "woodcutter\n";
	std::cout << drwal.occupation;
	 return 0;
}
