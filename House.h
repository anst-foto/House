#ifndef HOUSE_H
#define HOUSE_H

#include <vector>

#include "Foundation.h"
#include "Wall.h"
#include "Roof.h"

using namespace std;

class House {
private:
    Foundation* foundation;
    vector<Wall*> walls;
    Roof* roof;

public:
    House() = default;

    Foundation* getFoundation() const {
        return foundation;
    }
    void setFoundation(Foundation* foundation) {
        this->foundation = foundation;
    }

    Roof* getRoof() const {
        return roof;
    }
    void setRoof(Roof* roof) {
        this->roof = roof;
    }

    vector<Wall*> getWalls() const {
        return walls;
    }

    void setWalls(const vector<Wall*> &walls) {
        this->walls = walls;
    }
};



#endif //HOUSE_H
