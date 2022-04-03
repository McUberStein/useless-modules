#!/bin/bash
# A script to install pip, download youtube-dl and download the Bad Apple video. 
if ! command -v pip &> /dev/null # Check if pip is installed
then
    echo "Pip could not be found!"
    exit
fi


if ! command -v mpv &> /dev/null # Check if mpv is installed
then
    echo "MPV could not be found!"
    exit
fi

sudo pip install youtube-dl # Download pip system-wide

mkdir ~/.ascii # Make a directory to store the video

youtube-dl https://www.youtube.com/watch?v=FtutLA63Cp8 -o badapple && mv badapple.mkv ~/.ascii/ # Download video from youtube and move it to directory

