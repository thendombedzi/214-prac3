#include <iostream>
#include "WoodlandFactory.h"

using namespace std;

 Infantry* WoodlandFactory::createInfantry()  
 {
        return new Woodland_I();
 }

 Cavalry* WoodlandFactory::createCavalry()  
 {
        return new Woodland_C();
 }

  Artillery* WoodlandFactory::createArtillery()  
 {
        return new Woodland_A();
 }
 void WoodlandFactory::deployArtillery()
 {
   cout << "Deploying Riverbank Factory siege engines for terrain challenges" << endl;
 }