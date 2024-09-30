#include <iostream>

#include "Builder.h"

using namespace std;

int main() {
    Builder* builder1 = new Builder();
    builder1->addFoundation(FoundationType::Piled);
    builder1->addWall(WallType::Wood);
    builder1->addWall(WallType::Wood);
    builder1->addWall(WallType::Wood);
    builder1->addWall(WallType::Wood);
    builder1->addRoof(RoofType::Tile);
    House* house1 = builder1->build();
    cout << house1->getFoundation() << endl;


    Builder* builder2 = new Builder();
    builder2->addFoundation(FoundationType::Footing);
    builder2->addWall(WallType::Concrete);
    builder2->addWall(WallType::Concrete);
    builder2->addWall(WallType::Concrete);
    builder2->addWall(WallType::Concrete);
    builder2->addWall(WallType::Concrete);
    builder2->addRoof(RoofType::Metal);
    House* house2 = builder2->build();
    cout << house2->getFoundation() << endl;

    
    return 0;
}
