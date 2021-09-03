#!/usr/bin/env bash

mkdir build
docker run --rm -v $PWD/src:/tmp/src -v $PWD/build:/tmp/build -w /tmp/build tinyspot-rp2040 cmake ../src
#-DCMAKE_CXX_COMPILER=g++ -DCMAKE_BUILD_TYPE=Release
docker run --rm -v $PWD/src:/tmp/src -v $PWD/build:/tmp/build -w /tmp/build tinyspot-rp2040 make

