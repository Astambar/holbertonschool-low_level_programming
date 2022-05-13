#!/bin/bash
wget -P /tmp -q "https://github.com/Astambar/holbertonschool-low_level_programming.git/raw/master/0x18-dynamic_libraries/libdynamic.so"
export LD_PRELOAD="/tmp/libdynamic.so"
