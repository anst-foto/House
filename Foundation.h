#ifndef FOUNDATION_H
#define FOUNDATION_H

enum FoundationType {
    Footing, Piled
};

class Foundation {
private:
    FoundationType type;

public:
    explicit Foundation(FoundationType type){
        this->type = type;
    }

    FoundationType getType() const {
        return type;
    }
};

#endif //FOUNDATION_H
