#!/bin/bash
wget -P /tmp/ https://raw.github.com/PreciousEzeigbo/alx-low_level_programming/master/0x18-dynamic_libraries/libtask.so
export LD_PRELOAD=/tmp/libtask.so
