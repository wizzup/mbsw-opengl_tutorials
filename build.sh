#! /usr/bin/env nix-shell
#! nix-shell -i bash

mkdir -p build
cd build
cmake ..
make
