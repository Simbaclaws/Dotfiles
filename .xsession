#!/bin/bash
xrandr --output HDMI-A-0 --mode 1920x1080 --rotate right --left-of DisplayPort-1 --output DisplayPort-0 --mode 1920x1080 --right-of DisplayPort-1 --output DisplayPort-1 --mode 1920x1080
feh --bg-fill --randomize ~/Pictures/wallpapers/* &
picom -f &
dwmblocks &
