#!/system/bin/sh
# Checking ID shell
if [ "$(id -u)" -ne 2000 ]; then
    echo "[ Error |@UnixeID(Yeye)]"
    exit 1
fi
# Smart Notification
shell() {
    sor="$1"
    cmd notification post -S bigtext -t '♨️ Display Enhancer' 'Tag' "$sor" > /dev/null 2>&1
}
# Style display Terminal
    echo
    echo "     ☆================================☆"
    echo
    echo "       ~ Description. Display Enhancer.... "
    echo
    echo "       - Author                 :  @UnixeID"
    echo "       - Point                    :  1.0"
    echo "       - Release               :  17 - April - 2025"
    echo "       - Name Shell         :  Display Enhancer"
    echo
    echo "    |_______________________________________|"
    echo "    \______________________________________/"
    echo
    echo "   Priority Window Display Mode Custem. "
    sleep 2
    echo
    echo
     rm -rf /data/local/tmp/*
     cp /sdcard/Displayl/std /data/local/tmp 
     chmod +x /data/local/tmp/std
     if [ "$1" = "-O" ]; then
          shell "Applying Window Display optimization profile. Please wait 1-6 seconds..."
          /data/local/tmp/std -O
     elif [ "$1" = "-B" ]; then
          shell "Applying Window Display  performance profile. Please wait 1-4 seconds..."
          /data/local/tmp/std -B
     elif [ "$1" = "-P" ]; then
          shell "Applying Window Display  high-performance profile. Please wait 1-3 seconds..."
          /data/local/tmp/std -P
     elif [ "$1" = "-C" ]; then
           shell "Clearing cache and stopping background services. Please wait 1-3 seconds..."
           /data/local/tmp/std -C
     elif [ "$1" = "-L" ]; then
           shell "Applying Universal system performance profile. Please wait 1-3 seconds..."
           /data/local/tmp/std -L
      elif [ "$1" = "-v" ]; then
           shell "Applying Reset system shell Window Display profile. Please wait 1-3 seconds..."
           /data/local/tmp/std -v
     elif [ "$1" = "-h" ] || [ "$1" = "--help" ]; then
           /data/local/tmp/std --help
        else
          printf "Failed to apply requested profile. Unknown option: %s\n" "$1"
         fi