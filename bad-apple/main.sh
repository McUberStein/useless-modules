sudo pip install youtube-dl 
if ! command -v mpv &> /dev/null
then
    echo "MPV could not be found!"
    exit
fi

mkdir ~/.ascii
youtube-dl https://www.youtube.com/watch?v=FtutLA63Cp8 -o badapple && mv badapple.mkv ~/.ascii/ 

