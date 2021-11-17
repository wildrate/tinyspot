# Submodule libraries

Libs include:
* https://github.com/raspberrypi/pico-sdk
* https://github.com/ArmDeveloperEcosystem/microphone-library-for-pico
* https://github.com/raspberrypi/pico-tflmicro

## Install as a dependency for build

For building you need to remember to do the :

`git submodule update --init pico-sdk`

`git submodule update --init pico-tflmicro`

**NOTE:** *DON'T DON'T DON'T do `--recursive` as an option - we don't need all the code!*

(See also the github wokrflow which used to do this, but it slows the build.)

## Note on how to clean working tree of submodule

If you get in a fix with too many files - try:

`git submodule deinit -f -- ./pico-[MODULE]`

`git rm cached ./pico-[MODULE]`

`git restore --staged ./pico-[MODULE]`

Following this, the module is still registered (i.e. in the toplevel .gitmodules).

The you can re-init as above (DON'T DO RECURSIVE)