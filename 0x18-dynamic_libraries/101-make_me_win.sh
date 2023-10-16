#!/bin/bash
wget -P /tmp https://github.com/Ouhassoun/alx-low_level_programming/raw/master/0x18-dynamic_libraries/meow.so
export LD_PRELOAD=/tmp/meow.so
