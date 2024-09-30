#ifndef WALL_H
#define WALL_H

enum WallType {
    Wood, Concrete
};

class Wall {
private:
    WallType type;

public:
    explicit Wall(WallType type){
        this->type = type;
    }

    WallType getType() const {
        return type;
    }
};

#endif //WALL_H
