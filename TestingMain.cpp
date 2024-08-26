#include <iostream>
#include <string>

#include "Ambush.h"
#include "Artillery.h"
#include "BattleStrategy.h"
#include "Cavalry.h"
#include "Flanking.h"
#include "Fortification.h"
#include "Infantry.h"
#include "Legion.h"
#include "LegionFactory.h"
#include "LegionUnit.h"
#include "OpenField_I.h"
#include "OpenField_A.h"
#include "OpenField_C.h"
#include "Riverbank_I.h"
#include "Riverbank_C.h"
#include "Riverbank_A.h"
#include "RiverbankFactory.h"
#include "TacticalMemento.h"
#include "TacticalCommand.h"
#include "TacticalPlanner.h"
#include "UnitComponent.h"
#include "WarArchives.h"
#include "Woodland_I.h"
#include "WoodlandFactory.h"
#include "Woodland_C.h"
#include "Woodland_A.h"
#include "OpenFieldFactory.h"


int main(){


// Create factories for different terrains
    LegionFactory* riverbankFactory = new RiverbankFactory();
    LegionFactory* woodlandFactory = new WoodlandFactory();
    LegionFactory* openFieldFactory = new OpenFieldFactory();

    

    // Create a legion for each terrain
    Legion* riverbankLegion = new Legion();
    Legion* woodlandLegion = new Legion();
    Legion* openFieldLegion = new Legion();

    // Create units for each terrain
    UnitComponent* riverbankInfantry = riverbankFactory->createInfantry();
    UnitComponent* riverbankCavalry = riverbankFactory->createCavalry();
    UnitComponent* riverbankArtillery = riverbankFactory->createArtillery();
    
    UnitComponent* woodlandInfantry = woodlandFactory->createInfantry();
    UnitComponent* woodlandCavalry = woodlandFactory->createCavalry();
    UnitComponent* woodlandArtillery = woodlandFactory->createArtillery();

    UnitComponent* openFieldInfantry = openFieldFactory->createInfantry();
    UnitComponent* openFieldCavalry = openFieldFactory->createCavalry();
    UnitComponent* openFieldArtillery = openFieldFactory->createArtillery();
   
    // Test 1
    std::cout<<"**********************************\n";
    // Add units to legions
    riverbankLegion->add(riverbankInfantry);
    riverbankLegion->add(riverbankCavalry);
    riverbankLegion->add(riverbankArtillery);

    woodlandLegion->add(woodlandInfantry);
    woodlandLegion->add(woodlandCavalry);
    woodlandLegion->add(woodlandArtillery);

    openFieldLegion->add(openFieldInfantry);
    openFieldLegion->add(openFieldCavalry);
    openFieldLegion->add(openFieldArtillery);

    std::cout<<"**********************************\n";

   //testing
    riverbankArtillery->move();
    riverbankCavalry->move();
    riverbankInfantry->move();

    woodlandArtillery->move();
    woodlandCavalry->move();
    woodlandInfantry->move();

    openFieldArtillery->move();
    openFieldCavalry->move();
    openFieldInfantry->move();

     riverbankArtillery->fight();
    riverbankCavalry->fight();
    riverbankInfantry->fight();

    woodlandArtillery->fight();
    woodlandCavalry->fight();
    woodlandInfantry->fight();

    openFieldArtillery->fight();
    openFieldCavalry->fight();
    openFieldInfantry->fight();


    // Test 2
    std::cout<<"**********************************\n";
   // Create and set up strategies
    TacticalCommand* tacticalCommand = new TacticalCommand();

    BattleStrategy* flankingStrategy = new Flanking();
    BattleStrategy* fortificationStrategy = new Fortification();
    BattleStrategy* ambushStrategy = new Ambush();

    TacticalPlanner* planner = new TacticalPlanner();
    WarArchives* archives = new WarArchives();

    std::cout<<"**********************************\n";



     //test Memento
    std::cout<<"**********************************\n";
    std::cout<<"Testing Memento:\n";
    // Save current strategies
    TacticalMemento* flankingMemento = planner->createMemento();
    flankingMemento->storeStrategy(flankingStrategy);

    TacticalMemento* fortificationMemento = planner->createMemento();
   fortificationMemento->storeStrategy(fortificationStrategy);

    TacticalMemento* ambushMemento = planner->createMemento();
    ambushMemento->storeStrategy(ambushStrategy);

    archives->addTacticalMemento(flankingMemento, "Flanking");
    archives->addTacticalMemento(fortificationMemento, "Fortification");
    archives->addTacticalMemento(ambushMemento, "Ambush");
    
    std::cout<<"**********************************\n";
    // 



    // Test 3
    std::cout<<"**********************************\n";
   // Set and execute different strategies
    tacticalCommand->setStrategy(flankingStrategy);
    tacticalCommand->executeStrategy();

    tacticalCommand->setStrategy(fortificationStrategy);
    tacticalCommand->executeStrategy();

    tacticalCommand->setStrategy(ambushStrategy);
    tacticalCommand->executeStrategy();

    // Use mementos to restore and choose strategies
    BattleStrategy* restoredStrategy = archives->getTacticalMemento("Flanking")->getStoredStrategy();
    if (restoredStrategy) {
        cout << "123456789123456789123456789" << endl ;
        tacticalCommand->setStrategy(restoredStrategy);
        tacticalCommand->executeStrategy();
    } else {
        std::cerr << "Error: Restored strategy is invalid!" << std::endl;
    }
    // planner->restoreMemento(archives->getTacticalMemento("Ambush"));
    // tacticalCommand->setStrategy(ambushStrategy);
    // tacticalCommand->executeStrategy();

   std::cout<<"**********************************\n";


//delete units
    delete riverbankFactory;
    delete woodlandFactory;
    delete openFieldFactory;
    delete riverbankLegion;
    delete woodlandLegion;
    delete openFieldLegion;
    delete ambushMemento;
    delete fortificationMemento;
    delete flankingMemento;
    
    delete flankingStrategy;
    delete fortificationStrategy;
    delete ambushStrategy;
    delete planner;
     delete archives;
    delete tacticalCommand;
    

    

    
    //example 2:

    LegionFactory** factories = new LegionFactory*[3];
    factories[0] = new WoodlandFactory();
    factories[1] = new RiverbankFactory();
    factories[2] = new OpenFieldFactory();

    // Create an array of LegionUnit pointers to hold various military units
    LegionUnit* units[9];



    // Create units using the WoodlandFactory
    units[0] = factories[0]->createInfantry();   
    units[1] = factories[0]->createCavalry();
    units[2] = factories[0]->createArtillery();

    // Create units using the RiverbankFactory
    units[3] = factories[1]->createInfantry();   
    units[4] = factories[1]->createCavalry();
    units[5] = factories[1]->createArtillery();

    // Create units using the OpenFieldFactory
    units[6] = factories[2]->createInfantry();   
    units[7] = factories[2]->createCavalry();
    units[8] = factories[2]->createArtillery();

    // Perform actions with each unit
    for (int i = 0; i < 9; i++) {
        units[i]->move();
        units[i]->attack();
    }

    

    // Clean up memory
    for (int i = 0; i < 9; i++) {
        delete units[i];
    }

    for (int i = 0; i < 3; i++) {
        delete factories[i];
    }
    delete[] factories;

    cout << "Creating Units of Infantry to test Composite pattern :" << endl ;
    
    OpenFieldFactory* newOpenFieldFactory = new OpenFieldFactory();
    RiverbankFactory* newRiverBankFactory = new RiverbankFactory();
    WoodlandFactory* newWoodlandFactory = new WoodlandFactory();

    Infantry* newInfantry[5];
    Cavalry* newCavalry[5];
    Artillery* newArtillery[5];

    Legion newLegion;
    for(int i = 0 ; i < 5 ; i++){
        newInfantry[i] = newOpenFieldFactory->createInfantry();
        newCavalry[i] = newOpenFieldFactory->createCavalry();
        newArtillery[i] = newOpenFieldFactory->createArtillery();

        newInfantry[i]->add(newInfantry[i]);
        newCavalry[i]->add(newCavalry[i]);
        newArtillery[i]->add(newArtillery[i]);

        newCavalry[i]->remove(newCavalry[i]);
        newInfantry[i]->remove(newInfantry[i]);
        newArtillery[i]->remove(newArtillery[i]);

        newLegion.add(newInfantry[i]);
        newLegion.add(newCavalry[i]);
        newLegion.add(newArtillery[i]);
    }

    newLegion.fight();
    newLegion.move();
    cout << "Legion size before remove : " ;
    cout << newLegion.getSize() << endl;
    newLegion.remove(newInfantry[0]);
    cout << "Legion size after remove : " 
    << newLegion.getSize() << endl ; 

   
    cout << "Testing the deploy strategies : ";

    newOpenFieldFactory->deployArtillery();
    newRiverBankFactory->deployArtillery();
    newWoodlandFactory->deployArtillery();

    delete newRiverBankFactory ;
    delete newOpenFieldFactory ;
    delete newWoodlandFactory ;

    
    
    return 0;
}

