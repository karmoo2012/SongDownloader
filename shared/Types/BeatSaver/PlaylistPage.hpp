#pragma once
#include "../TypeMacros.hpp"
#include "PlaylistInfo.hpp"

#include <vector>

namespace BeatSaver {
    DECLARE_JSON_CLASS(PlaylistPage,
        ERROR_CHECK
        GETTER_VALUE(std::vector<BeatSaver::PlaylistInfo>, Docs, "docs");
    )
}
