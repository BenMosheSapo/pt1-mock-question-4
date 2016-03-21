///////////////////////////////////////////////////////////////////////////////////////////////////
//                         COMPUTER METHODS 3 PRACTICAL TEST 1 (MOCK)
// Name: Ben Moshe Sapo
// Student No: 214527679
// Date: 21/03/2016
///////////////////////////////////////////////////////////////////////////////////////////////////

// ***** QUESTION 4 ****
// Question 4 has 3 parts (you do NOT need to include each class in a separate file!)
// 4.1 Create a virtual base class "Animal" which has two methods, name() and does(). 
// 4.2 From class "Animal", derive a concrete class "Bird" and "Dog".  Print appropriate message for
//     each method.
// 4.3 Write a driver program which creates an object of each type and demonstrates POLYMORPHISM. 

#include <iostream>
#include <string>
using namespace std;
class Animal {
public:
	virtual void name() {
	}
	virtual void does() {
	}
};

class Bird : public Animal {
public:
	Bird() {
	}
	virtual void name() {
		cout << "My name is Bird!" <<  endl;
	}
	virtual void does() {
		cout << "I go chirp!" << endl;
	}
};

class Dog : public Animal {
public:
	Dog() {

	}
	virtual void name() {
		cout << "My name is Dog!" << endl;
	}
	virtual void does() {
		cout << "I go woof!" << endl;
	}
};

int main() {
	Animal *myAnimalPtr;
	Dog myDog;
	Bird myBird;
	myAnimalPtr = &myDog;
	myAnimalPtr->name();
	myAnimalPtr->does();
	myAnimalPtr = &myBird;
	myAnimalPtr->name();
	myAnimalPtr->does();
}