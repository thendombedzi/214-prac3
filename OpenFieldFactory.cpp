#include <iostream>

using namespace std;

#include "OpenFieldFactory.h"
#include "OpenField_I.h" // Header file for OpenField_I
#include "OpenField_C.h" // Header file for OpenField_C
#include "OpenField_A.h" // Header file for OpenField_A"

// Implementing Infantry creation method
Infantry* OpenFieldFactory::createInfantry() {
    return new OpenField_I();  // Ensure OpenField_I is a concrete class
}

// Implementing Cavalry creation method
Cavalry* OpenFieldFactory::createCavalry() {
    return new OpenField_C();  // Ensure OpenField_C is a concrete class
}

// Implementing Artillery creation method
Artillery* OpenFieldFactory::createArtillery() {
    return new OpenField_A();  // Ensure OpenField_A is a concrete class
}

 void OpenFieldFactory::deployArtillery()
 {
     cout << "Deploying Openfield Factory siege engines for terrain challenges" << endl;
 }