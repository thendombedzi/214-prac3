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
#include "OpenField.h"
#include "Riverbank.h"
#include "RiverbankFactory.h"
#include "TacticalCommand.h"
#include "TacticalPlannner.h"
#include "UnitComponent.h"
#include "WarArchives.h"
#include "Woodland.h"
#include "WoodlandFactory.h"
#include "OpenFieldFactory.h"


int main(){


    // Create a Boatman,Infantry and ShieldBearer Unit
    BoatmanFactory boatmanFactory1;
    InfantryFactory infantryFactory1;
    ShieldBearerFactory shieldBearerFactory1;

    Soldiers* boatman1 = boatmanFactory1.createUnit();
    Soldiers* infantry1 = infantryFactory1.createUnit();
    Soldiers* shieldBearer1 = shieldBearerFactory1.createUnit();

    // Test the Boatman attributes
    std::cout<<"**********************************\n";
    std::cout<<"Boatman attributes:\n";
    std::cout << "Boatman Unit Name: " << boatman1->getUnitName() << std::endl;
    std::cout << "Health per Soldier: " << boatman1->getHealthPerSoldier() << std::endl;
    std::cout << "Damage per Soldier: " << boatman1->getDamagePerSoldier() << std::endl;
    std::cout << "Defense per Soldier: " << boatman1->getDefencePerSoldier() << std::endl;
    std::cout << "Amount of Soldiers per Unit: " << boatman1->getAmountOfSoldiersPerUnit() << std::endl;
    std::cout<<"**********************************\n";

    // Test the Infantry attributes
    std::cout<<"**********************************\n";
    std::cout<<"Infantry attributes:\n";
    std::cout << "Infantry Unit Name: " << infantry1->getUnitName() << std::endl;
    std::cout << "Health per Soldier: " << infantry1->getHealthPerSoldier() << std::endl;
    std::cout << "Damage per Soldier: " << infantry1->getDamagePerSoldier() << std::endl;
    std::cout << "Defense per Soldier: " << infantry1->getDefencePerSoldier() << std::endl;
    std::cout << "Amount of Soldiers per Unit: " << infantry1->getAmountOfSoldiersPerUnit() << std::endl;
    std::cout<<"**********************************\n";

    // Test the ShieldBearer attributes
    std::cout<<"**********************************\n";
    std::cout<<"ShieldBearer attributes:\n";
    std::cout << "ShieldBearer Unit Name: " << shieldBearer1->getUnitName() << std::endl;
    std::cout << "Health per Soldier: " << shieldBearer1->getHealthPerSoldier() << std::endl;
    std::cout << "Damage per Soldier: " << shieldBearer1->getDamagePerSoldier() << std::endl;
    std::cout << "Defense per Soldier: " << shieldBearer1->getDefencePerSoldier() << std::endl;
    std::cout << "Amount of Soldiers per Unit: " << shieldBearer1->getAmountOfSoldiersPerUnit() << std::endl;
    std::cout<<"**********************************\n";


  
// Calculate and display total health, damage, and defense per unit
   //for boatman:
    std::cout<<"Boatman's total health, damage and defense:\n";
    std::cout << "Total Health per Unit: " << boatmanFactory1.calculateTotalHealthPerUnit() << std::endl;   
    std::cout << "Total Damage per Unit: " << boatmanFactory1.calculateTotalDamagePerUnit() << std::endl;
    std::cout << "Total Defense per Unit: " << boatmanFactory1.calculateTotalDefencePerUnit() << std::endl;
    std::cout<<std::endl;

   //for Infantry:
   std::cout<<"Infantry's total health, damage and defense:\n";
    std::cout << "Total Health per Unit: " << infantryFactory1.calculateTotalHealthPerUnit() << std::endl;   
    std::cout << "Total Damage per Unit: " << infantryFactory1.calculateTotalDamagePerUnit() << std::endl;
    std::cout << "Total Defense per Unit: " << infantryFactory1.calculateTotalDefencePerUnit() << std::endl;
    std::cout<<std::endl;

   //for shieldbearer:
   std::cout<<"ShieldBearer's total health, damage and defense:\n";
    std::cout << "Total Health per Unit: " << shieldBearerFactory1.calculateTotalHealthPerUnit() << std::endl;   
    std::cout << "Total Damage per Unit: " << shieldBearerFactory1.calculateTotalDamagePerUnit() << std::endl;
    std::cout << "Total Defense per Unit: " << shieldBearerFactory1.calculateTotalDefencePerUnit() << std::endl;


    //test operations of the Boatman
    std::cout<<"**********************************\n";
    std::cout<<"Boatman engage:\n";
    boatman1->engage();
    std::cout<<"**********************************\n";

    std::cout<<"**********************************\n";
    std::cout<<"Infantry engage:\n";
    infantry1->engage();
    std::cout<<"**********************************\n";

    std::cout<<"**********************************\n";
    std::cout<<"ShieldBearer engage:\n";
    shieldBearer1->engage();
    std::cout<<"**********************************\n";



    std::cout<<"**********************************\n";
    std::cout<<"Boatman disengage:\n";
    boatman1->disengage();
    std::cout<<"**********************************\n";

    std::cout<<"**********************************\n";
    std::cout<<"Infantry disengage:\n";
    infantry1->disengage();
    std::cout<<"**********************************\n";

    std::cout<<"**********************************\n";
    std::cout<<"ShieldBearer disengage:\n";
    shieldBearer1->disengage();
    std::cout<<"**********************************\n";
    
    std::cout<<"**********************************\n";
    std::cout<<"Increasing number of soldiers:\n";

    //clone Boatman
    Soldiers* boatman2 = boatman1->cloneis();
    std::cout << "New Boatman Unit Name: " << boatman2->getUnitName() << std::endl;

    //clone Infantry
    Soldiers* infantry2 = infantry1->cloneis();
    std::cout << "New Infantry Unit Name: " << infantry2->getUnitName() << std::endl;

    //clone ShieldBearer
    Soldiers* shieldBearer2 = shieldBearer1->cloneis();
    std::cout << "New ShieldBearer Unit Name: " << shieldBearer2->getUnitName() << std::endl;

    std::cout<<"**********************************\n";

    //test Memento
    std::cout<<"**********************************\n";
    std::cout<<"Testing Memento:\n";
    Memento* Bmomento1 = boatman1->militusMemento();
    Memento* Imomento1 = infantry1->militusMemento();
    Memento* Smomento1 = shieldBearer1->militusMemento();
    
    boatman1->vivificaMemento(Bmomento1);
    infantry1->vivificaMemento(Imomento1);
    shieldBearer1->vivificaMemento(Smomento1);

    std::cout <<"adding to history\n";
    Caretaker history;
    history.addToHistory(Bmomento1);
    history.addToHistory(Imomento1);
    history.addToHistory(Smomento1);

    std::cout<<"getting specific memento\n";
    std::cout << "Memento: " << history.getState(1)->getUnitName() << std::endl;
    history.printHistory();
    
    std::cout<<"**********************************\n";

    std::cout <<"removing oldest memento\n";
    history.removeOldestMemento();
    
    history.printHistory();
    std::cout<<"**********************************\n";



    


    


    delete boatman1;
    delete boatman2;
    delete infantry1;
    delete infantry2;
    delete shieldBearer1;
    delete shieldBearer2;
    

    

    
    

    
    return 0;
}