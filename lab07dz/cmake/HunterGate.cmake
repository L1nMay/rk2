include(CMakeParseArguments)

function(hunter_gate)
    cmake_parse_arguments(HUNTER "" "URL;SHA1" "" ${ARGN})

    if(NOT HUNTER_URL)
        set(HUNTER_URL "https://github.com/cpp-pm/hunter/archive/v0.23.314.tar.gz")
    endif()

    if(NOT HUNTER_SHA1)
        set(HUNTER_SHA1 "a8c1ff1a9f9a8b5a7456b89b818e5aef3460f890")
    endif()

    include(FetchContent)
    FetchContent_Declare(
        hunter
        URL ${HUNTER_URL}
        URL_HASH SHA1=${HUNTER_SHA1}
    )
    FetchContent_MakeAvailable(hunter)
endfunction()
