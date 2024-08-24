#include <iostream>
#include "RiverbankFactory.h"
using namespace std;


 Infantry* RiverbankFactory::createInfantry()  
 {
        return new Riverbank_I();
 }

 Cavalry* RiverbankFactory::createCavalry()  
 {
        return new Riverbank_C();
 }

  Artillery* RiverbankFactory::createArtillery()  
 {
        return new Riverbank_A();
 }

 void RiverbankFactory::deployArtillery()
 {
      //still to implement
 }