#pragma once
#include "../TypeMacros.hpp"
#include "Beatmap.hpp"

namespace BeatSaver {
    DECLARE_JSON_CLASS(PlaylistMap,
        ERROR_CHECK
        GETTER_VALUE(BeatSaver::Beatmap, Map, "map");
        GETTER_VALUE(float, Order, "order");
    )
}
