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
      cout << "Deploying Riverbank Factory siege engines for terrain challenges" << endl;
 }

 RiverbankFactory::~RiverbankFactory()
 {}