
# initialize the Raspberry Pi Pico SDK
pico_sdk_init()

add_executable(tinyspot
        main.c
        )

#target_include_directories(tinyspot PRIVATE ../lib/tinyusb/src/)

# Use the (created beforehand) pico_pdm_microphone lib
target_link_libraries(tinyspot pico_stdlib pico_pdm_microphone)

# enable usb output, disable uart output
# See https://www.electronicshub.org/raspberry-pi-pico-serial-programming/
pico_enable_stdio_usb(hello_pdm_microphone 1)
pico_enable_stdio_uart(hello_pdm_microphone 0)

# create map/bin/hex/uf2 file in addition to ELF.
pico_add_extra_outputs(tinyspot)