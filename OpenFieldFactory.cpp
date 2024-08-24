#include <iostream>
#include "OpenFieldFactory.h"
using namespace std;


 Infantry* OpenFieldFactory::createInfantry()  
 {
        return new OpenField_I();
 }

 Cavalry* OpenFieldFactory::createCavalry()  
 {
        return new OpenField_C();
 }

  Artillery* OpenFieldFactory::createArtillery()  
 {
        return new OpenField_A();
 }
 void OpenFieldFcatory::deployArtillery()
 {
      //still to implement
 }