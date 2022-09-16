#pragma once

#include <cstdint>
#include "prototypes.hpp"

std::size_t sim::simstring::len() const {
    return length;
}

std::size_t sim::simstring::size() const {
    return length;
}

sim::simstring& sim::simstring::del_string_data() {
    string_val = ( char* ) realloc(string_val, 0);
    return *this;
}
