#pragma once

#include <cstdint>

namespace spm::mapdata {

struct MapData
{
    const char * name;
    uint8_t unknown_0x4[0x18 - 0x4];
    void * script; // set by game's rel prolog
};
static_assert(sizeof(MapData) == 0x1c);

#define MAP_ID_MAX 0x1d4

extern "C" {

extern MapData *mapDataList[MAP_ID_MAX];

MapData *mapDataPtr(const char *mapName);

}

}