#!/bin/bash
# A script to install pip, download youtube-dl and download the Bad Apple video. 
sudo pip install youtube-dl # Download pip system-wide
if ! command -v mpv &> /dev/null # Check if mpv is installed
then
    echo "MPV could not be found!"
    exit
fi

mkdir ~/.ascii # Make a directory to store the video
youtube-dl https://www.youtube.com/watch?v=FtutLA63Cp8 -o badapple && mv badapple.mkv ~/.ascii/ # Download video from youtube and move it to directory

