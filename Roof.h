#ifndef ROOF_H
#define ROOF_H

enum RoofType {
    Tile, Metal
};

class Roof {
private:
    RoofType type;

public:
    explicit Roof(RoofType type){
        this->type = type;
    }

    RoofType getType() const {
        return type;
    }
};

#endif //ROOF_H
