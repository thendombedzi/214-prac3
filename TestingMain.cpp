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


int main() {


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

    std::cout<<std::endl;
    // Test 1: Composite Pattern
    std::cout << "**********************************\n";
    std::cout << "Testing Composite Pattern:\n";
    std::cout << "**********************************\n";

    std::cout << "Adding Legion of terrain Riverbank : ";
    riverbankLegion->add(riverbankInfantry);
    riverbankLegion->add(riverbankCavalry);
    riverbankLegion->add(riverbankArtillery);
    std::cout << "DONE"<<std::endl;

    std::cout << "Adding Legion of terrain Riverbank : ";
    woodlandLegion->add(woodlandInfantry);
    woodlandLegion->add(woodlandCavalry);
    woodlandLegion->add(woodlandArtillery);
    std::cout << "DONE"<<std::endl;

    std::cout << "Adding Legion of terrain Riverbank : ";
    openFieldLegion->add(openFieldInfantry);
    openFieldLegion->add(openFieldCavalry);
    openFieldLegion->add(openFieldArtillery);
    std::cout << "DONE"<<std::endl;
    
    std::cout<<std::endl;

    std::cout << "/////////UNITS MOVING/////////"<<std::endl;
    std::cout<<std::endl;
    riverbankArtillery->move();
    riverbankCavalry->move();
    riverbankInfantry->move();

    woodlandArtillery->move();
    woodlandCavalry->move();
    woodlandInfantry->move();

    openFieldArtillery->move();
    openFieldCavalry->move();
    openFieldInfantry->move();

    std::cout<<std::endl;

    std::cout << "/////////UNITS FIGHTING/////////"<<std::endl;
    std::cout<<std::endl;

    riverbankArtillery->fight();
    riverbankCavalry->fight();
    riverbankInfantry->fight();

    woodlandArtillery->fight();
    woodlandCavalry->fight();
    woodlandInfantry->fight();

    openFieldArtillery->fight();
    openFieldCavalry->fight();
    openFieldInfantry->fight();

    std::cout << "**********************************\n";
    std::cout<<std::endl;

    // Test 2: Strategy Pattern
    std::cout << "**********************************\n";
    std::cout << "Testing Strategy Pattern:\n";
    std::cout << "**********************************\n";
    TacticalCommand* tacticalCommand = new TacticalCommand();

    BattleStrategy* flankingStrategy = new Flanking();
    BattleStrategy* fortificationStrategy = new Fortification();
    BattleStrategy* ambushStrategy = new Ambush();

    std::cout << "/////////SETTING AND EXECUTING OF STRATEGIES/////////"<<std::endl;
    tacticalCommand->setStrategy(flankingStrategy);
    tacticalCommand->executeStrategy();

    tacticalCommand->setStrategy(fortificationStrategy);
    tacticalCommand->executeStrategy();

    tacticalCommand->setStrategy(ambushStrategy);
    tacticalCommand->executeStrategy();

    std::cout << "**********************************\n";

    // Test 3: Memento Pattern
    std::cout << "**********************************\n";
    std::cout << "Testing Memento Pattern:\n";
    std::cout << "**********************************\n";

    TacticalPlanner* planner = new TacticalPlanner();
    WarArchives* archives = new WarArchives();
   
    TacticalMemento* flankingMemento = planner->createMemento();
    flankingMemento->storeStrategy(flankingStrategy);

    TacticalMemento* fortificationMemento = planner->createMemento();
    fortificationMemento->storeStrategy(fortificationStrategy);

    TacticalMemento* ambushMemento = planner->createMemento();
    ambushMemento->storeStrategy(ambushStrategy);

    archives->addTacticalMemento(flankingMemento, "Flanking");
    archives->addTacticalMemento(fortificationMemento, "Fortification");
    archives->addTacticalMemento(ambushMemento, "Ambush");

    BattleStrategy* restoredStrategy = archives->getTacticalMemento("Flanking")->getStoredStrategy();
    if (restoredStrategy) {
        tacticalCommand->setStrategy(restoredStrategy);
        tacticalCommand->executeStrategy();
    } else {
        std::cerr << "Error: Restored strategy is invalid!" << std::endl;
    }

    std::cout << "**********************************\n";

    // Test 4: Abstract Factory Pattern
    std::cout << "**********************************\n";
    std::cout << "Testing Abstract Factory Pattern:\n";
    std::cout << "**********************************\n";
    LegionFactory** factories = new LegionFactory*[3];
    factories[0] = new WoodlandFactory();
    factories[1] = new RiverbankFactory();
    factories[2] = new OpenFieldFactory();

    LegionUnit* units[9];
    std::cout<<std::endl;
std::cout << "/////////CREATING UNITS/////////"<<std::endl;
    units[0] = factories[0]->createInfantry();
    units[1] = factories[0]->createCavalry();
    units[2] = factories[0]->createArtillery();

    units[3] = factories[1]->createInfantry();
    units[4] = factories[1]->createCavalry();
    units[5] = factories[1]->createArtillery();

    units[6] = factories[2]->createInfantry();
    units[7] = factories[2]->createCavalry();
    units[8] = factories[2]->createArtillery();
   
   std::cout<<std::endl;
std::cout << "/////////UNITS MOVING AND ATTACKING/////////"<<std::endl;
    for (int i = 0; i < 9; i++) {
        units[i]->move();
        units[i]->attack();
    }

    for (int i = 0; i < 9; i++) {
        delete units[i];
    }

    for (int i = 0; i < 3; i++) {
        delete factories[i];
    }
    delete[] factories;

    std::cout << "**********************************\n";
    std::cout<<std::endl;

    // Clean up
    std::cout << "/////////DELETION/////////"<<std::endl;
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

    return 0;
}