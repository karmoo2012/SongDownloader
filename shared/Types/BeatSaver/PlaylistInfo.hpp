#pragma once
#include "../TypeMacros.hpp"

namespace BeatSaver {
    DECLARE_JSON_CLASS(PlaylistInfo,
        ERROR_CHECK
        GETTER_VALUE(int, PlaylistId, "playlistId");
    )
}
