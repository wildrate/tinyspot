# MIT License
#
# Copyright (c) 2021 Wildrate
#
# Permission is hereby granted, free of charge, to any person obtaining a copy
# of this software and associated documentation files (the "Software"), to deal
# in the Software without restriction, including without limitation the rights
# to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
# copies of the Software, and to permit persons to whom the Software is
# furnished to do so, subject to the following conditions:
#
# The above copyright notice and this permission notice shall be included in all
# copies or substantial portions of the Software.
#
# THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
# IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
# FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
# AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
# LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
# OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
# SOFTWARE.

FROM ubuntu:latest

MAINTAINER Wildrate <hello@wildrate.org>

RUN apt-get update && apt-get -y install \
    cmake \
    gcc-arm-none-eabi \
    libnewlib-arm-none-eabi \
    libstdc++-arm-none-eabi-newlib

RUN apt-get -y install \
    git-all

WORKDIR /tmp

RUN git clone https://github.com/raspberrypi/pico-sdk.git

WORKDIR /tmp/pico-sdk

RUN git submodule update --init

WORKDIR /tmp

ENV PICO_SDK_PATH=/tmp/pico-sdk

#CMD ["cmake"]
# For debug - enable this to enter with docker run -it tinyspot-rp2040
#ENTRYPOINT ["/bin/bash"]
#COPY CMakeLists.txt main.c
#RUN mkdir build; cd build; cmake ..