#include <stdlib.h>
#include <iostream>
#include "AnimalsInZoo.h"
#include "Animal.h"
using namespace std;

AnimalsInZoo::AnimalsInZoo(Animal animal1){
	animal = animal1;
	numAnimals = 1;
}

AnimalsInZoo::AnimalsInZoo(){
	numAnimals = 0;
}

void AnimalsInZoo:: display(){
	cout << "numAnimals: " << numAnimals << endl;
	if(numAnimals > 0){
		animal.display();
	}
}


