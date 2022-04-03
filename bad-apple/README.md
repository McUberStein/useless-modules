# Bad Apple
A simple kernel module that plays Bad Apple in ASCII art through MPV and redirects the output to `/dev/pts/0`. Requires sudo, pip and mpv. The resolution might be off.

# Build
To make the module and download Bad Apple, run `make`. If the video is already downloaded and you simply want to make the module, run `make novid`.

# Disclaimer
Do not launch as root. You will be prompted for a password when `main.sh` is executed by the Makefile, however running `sudo make` tends to fail.
