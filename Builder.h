#ifndef BUILDER_H
#define BUILDER_H

#include "House.h"


class Builder {
private:
    House* house;

    vector<Wall*> walls;

public:
    Builder() {
        house = new House();
    }

    void addFoundation(FoundationType foundationType) {
        house->setFoundation(new Foundation(foundationType));
    }

    void addWall(WallType wallType) {
        walls.push_back(new Wall(wallType));
    }

    void addRoof(RoofType roofType) {
        house->setRoof(new Roof(roofType));
    }

    House* build () {
        house->setWalls(walls);

        return house;
    }

};



#endif //BUILDER_H
