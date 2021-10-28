
# initialize the Raspberry Pi Pico SDK
pico_sdk_init()

add_executable(tinyspot
        main.c
        )

# Force add the location of tinyusb to fix include
# See: https://forum.micropython.org/viewtopic.php?f=21&t=10358
target_include_directories(tinyspot PRIVATE
        ${PICO_SDK_PATH}/lib/tinyusb/src
        ${PICO_SDK_PATH}/src/rp2_common/pico_stdio_usb/include)
# Check include directories for the target.
get_target_property(INCLUDE_PATHS tinyspot INCLUDE_DIRECTORIES)
foreach(dir ${INCLUDE_PATHS})
    message("--> INCLUDING: ${dir} ")
endforeach()

# Use the (created beforehand) pico_pdm_microphone lib
target_link_libraries(tinyspot pico_stdlib tinyusb_board tinyusb_device pico_pdm_microphone)

# enable usb output, disable uart output
# See https://www.electronicshub.org/raspberry-pi-pico-serial-programming/
pico_enable_stdio_usb(hello_pdm_microphone 1)
pico_enable_stdio_uart(hello_pdm_microphone 0)

# create map/bin/hex/uf2 file in addition to ELF.
pico_add_extra_outputs(tinyspot)