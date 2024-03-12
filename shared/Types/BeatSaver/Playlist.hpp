#pragma once
#include "../TypeMacros.hpp"
#include "PlaylistMap.hpp"
#include <vector>

namespace BeatSaver {
    DECLARE_JSON_CLASS(Playlist,
        ERROR_CHECK
        GETTER_VALUE(std::vector<BeatSaver::PlaylistMap>, Maps, "maps");
    )
}
