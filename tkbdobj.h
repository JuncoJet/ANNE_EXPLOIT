#ifndef TKBDOBJ_H
#define TKBDOBJ_H
#include "tkeymap.h"

class TKbdObj : public TKeyMap
{
public:
    TKbdObj();
    TKbdObj(int vid,int pid);
};

#endif // TKBDOBJ_H
