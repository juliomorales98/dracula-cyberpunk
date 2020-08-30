#!/bin/sh
xrandr --output DisplayPort-0 --off --output DisplayPort-1 --off --output HDMI-A-0 --off --output HDMI-A-1 --mode 1600x900 --pos 0x0 --rotate normal --output DVI-D-0 --primary --mode 1360x768 --pos 1600x0 --rotate normal
~/.config/i3/launch_polybar.sh &
