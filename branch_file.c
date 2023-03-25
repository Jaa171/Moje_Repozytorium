#include <iostream>
#include <string>
using namespace std;

class Tree {
private:
	string color;
	int height;
public:
	Tree Cut(int newHeight) {
		this->height = move(newHeight);
		return *this;
	};	

	Tree(int initial_height) {
		height = initial_height;
	}
	
	string HeightValue() {
		return to_string(height) + "[m]";
	}
};

class Human {
public:
	string name;
	int age;
	string occupation;
	void CutTree(Tree* a, int new_height) {
		a->Cut(new_height);
	};
};//
/*
class Leaf {
private:
	string color;
	int size;
public:
};
*/

int main() {
	Tree sosna(7);
	Human x;

	cout << "tree height: " << sosna.HeightValue() << endl;

	x.name = "Zbyszek";
	x.occupation = "lumberjack";
	x.CutTree(&sosna, 1);
	
	cout << x.name << " " << x.occupation << "is cutting tree, now tree is " << sosna.HeightValue() << "high" << endl;

	return 0;
}


