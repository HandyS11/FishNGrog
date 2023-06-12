#ifndef STUB_H
#define STUB_H

#include <QString>

#include "fish.h"
#include "enums.h"

using namespace std;

class Stub
{
public:
    list<Fish> loadFish() const;
};

#endif // STUB_H
