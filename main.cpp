#include <iostream>
#include <string>
#include "Dog.h"

using namespace std;

int main()
{

    string petName, dogName, dogBreed;
    int petAge, dogAge;

    Pet myPet;
    Dog myDog;

    getline(cin, petName);
    cin >> petAge;
    cin.ignore();
    getline(cin, dogName);
    cin >> dogAge;
    cin.ignore();
    getline(cin, dogBreed);

    // Set generic pet information
    myPet.SetName(petName);
    myPet.SetAge(petAge);

    // Set dog pet information and breed
    myDog.SetName(dogName);
    myDog.SetAge(dogAge);
    myDog.SetBreed(dogBreed);

    // Print generic pet information
    myPet.PrintInfo();

    // Print dog pet information and breed
    myDog.PrintInfo();
    cout << "   Breed: " << myDog.GetBreed() << endl;

    return 0;
}
