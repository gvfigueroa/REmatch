#!/bin/bash
# Change to parent directory
cd "$(dirname "$0")/.."

cmake -H. -Bbuild/Debug -DCMAKE_BUILD_TYPE=Debug
cmake --build build/Debug
