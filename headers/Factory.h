//
// Created by Robert on 16/02/2025.
//

#ifndef FACTORY_H
#define FACTORY_H

class Factory {
public:
    Factory(const Factory&) = delete;
    Factory& operator=(const Factory&) = delete;

    static Factory* getInstance();

private:
    Factory();
};

#endif //FACTORY_H
