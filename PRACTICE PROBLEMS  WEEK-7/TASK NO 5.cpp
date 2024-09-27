#include<iostream>
#include<string>


using namespace std;

class shape {
	string shp;

public:
	shape(string s = "") {
		this->shp = s;
	}
	void draw() {
		cout << "MY SHAPE IS : " << shp << endl;
	}
};


class coloredshape : public shape {
protected:
	string color;
public:
	coloredshape(string c = "", string s = "") :color(c), shape(s) {}
	string getcolor() {
		return color;
	}
	void draw() {

		cout << "MY COLOR IS : " << color << endl;
	}


};


class texturedshape : public shape {

protected:
	string texture;
public:
	texturedshape(string t = "", string s = "") :texture(t), shape(s) {}
	string gettexture() {
		return texture;
	}
	void draw() {

		cout << "MY TEXTURE IS : " << texture << endl;
	}


};

class texturedCOLOREDshape : public coloredshape, public texturedshape {

public:

	texturedCOLOREDshape(string c = "", string t = "", string s = " ") : coloredshape(c, s), texturedshape(t, s) {}
	void draw() {
		shape::draw();
		texturedshape::draw();
		coloredshape::draw();

	}

};

int main() {

	texturedCOLOREDshape obj("red", "smooth", "circle");
	obj.draw();
	system("pause");
	return 0;
}