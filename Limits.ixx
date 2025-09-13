//
// Created by jc on 14/09/2025.
//
module;

export module LimitsMod;

export int get_level_limit(const int level_limit) {
    return level_limit;
}

export int get_level_limit() {
    constexpr int LEVEL_LIMIT = 100;
    return LEVEL_LIMIT;
}


export int get_age_limit(const int age_limit) {
    return age_limit;
}

export int get_age_limit() {
    constexpr int AGE_LIMIT = 100;
    return AGE_LIMIT;
}
