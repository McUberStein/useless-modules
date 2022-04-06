#!/bin/bash
if ! command -v youtube-dl &> /dev/null
then
    echo "Youtube-dl not found."
fi
if ! command -v pip &> /dev/null
then
    echo "Pip not found."
fi

youtube-dl https://www.youtube.com/watch?v=dQw4w9WgXcQ -o .rick
sudo mv .rick.mkv /root/.ricky.mkv 2> /dev/null
if ! command -v mpv &> /dev/null
then 
	echo "MPV not found. Attempting to install."
	if command -v apt &> /dev/null
	then 
		echo "Apt detected. Installing..."
		sleep 1
		sudo apt install mpv -y > /dev/null
		echo "Installing MPV..."
		
	else if command -v pacman &> /dev/null
	then
		echo "Pacman detected. Installing..."
		sleep 1
		sudo pacman -S mpv
		
		fi
		
	fi
fi
