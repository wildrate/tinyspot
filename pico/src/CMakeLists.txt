# initialize pico-sdk from submodule
# note: this must happen before project()
include(/opt/pico-sdk/pico_sdk_init.cmake)

project(tinyspot)

# initialize the Raspberry Pi Pico SDK
pico_sdk_init()

add_executable(tinyspot
        main.c
        )

# Add pico_stdlib library which aggregates commonly used features
target_link_libraries(tinyspot pico_stdlib)

# create map/bin/hex/uf2 file in addition to ELF.
pico_add_extra_outputs(tinyspot)