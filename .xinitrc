#!/bin/bash
/usr/bin/pipewire &
/usr/bin/wireplumber &
/usr/bin/pipewire-pulse &
xrandr --output HDMI-1 --mode 1920x1080 --rotate right --left-of DP-2 -0-output DP-1 --mode 1920x1080 --right-of DP-2 --output DP-2 --mode 1920x1080
feh --bg-fill --randomize ~/Pictures/wallpapers/* &
picom -f &
dwmblocks &
