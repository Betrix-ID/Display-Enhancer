#include <iostream>
#include <cstdlib>
#include <cstring>
#include <unistd.h>
#include <sys/stat.h>
#include <errno.h>
#include <cstdio>
#include "Display.h"
using namespace std;

// Fungsi untuk menampilkan notifikasi di sistem
void shell(const char *message) {
    char command[512];
    snprintf(command, sizeof(command),
             "cmd notification post -S bigtext -t '♨️ Display Enhancer ' 'Tag' '%s' > /dev/null 2>&1",
             message);
    system(command);
}

void view_Iphone_8plus() {
    cout << "\nDescription:\n"
         << "  [Lightweight Performance Mode]\n"
         << "  Applying a resolution preset optimized for devices with 1080p display.\n"
         << "  Focused on minimizing system load while maintaining UI responsiveness.\n"
         << "  Ideal for users prioritizing battery efficiency and smooth multitasking.\n";

    char commands[1024];
    snprintf(commands, sizeof(commands),
           
       "target_width=1080; "
       "cmd window size \"$target_width\"x\"$(printf %%0.f \"$(echo \"$(echo \"$(cmd window size|cut -f3 -d ' '|head -n 1)\"|cut -d'x' -f2)\"*\"$(echo \"$target_width\"/\"$(echo \"$(cmd window size|cut -f3 -d ' '|head -n 1)\"|cut -d'x' -f1)\"|bc -l)\"|bc)\")\"; "
            "cmd window density \"$(echo \"$(cmd window density|cut -f3 -d ' '|head -n 1)\"*\"$target_width\"/\"$(echo \"$(cmd window size|cut -f3 -d ' '|head -n 1)\"|cut -d'x' -f1)\"|bc)\"");

    int result = system(commands);
    if (result != 0) {
        printf("  Error: Gagal menerapkan pengaturan.\n");
        return;
    }
    sleep(1);
    system("for a in WM_FORCE_DEBUG_ANIM WM_FORCE_DEBUG_APP_TRANSITIONS WM_FORCE_DEBUG_APP_TRANSITIONS_ANIM "
           "WM_FORCE_DEBUG_BOOT WM_FORCE_DEBUG_CONFIGURATION WM_FORCE_DEBUG_DRAW WM_FORCE_DEBUG_FOCUS "
           "WM_FORCE_DEBUG_FOCUS_LIGHT WM_FORCE_DEBUG_IME WM_FORCE_DEBUG_KEEP_SCREEN_ON WM_FORCE_DEBUG_ORIENTATION "
           "WM_FORCE_DEBUG_RECENTS_ANIMATIONS WM_FORCE_DEBUG_REMOTE_ANIMATIONS WM_FORCE_DEBUG_RESIZE "
           "WM_FORCE_DEBUG_SCREEN_ON WM_FORCE_DEBUG_STARTING_WINDOW WM_FORCE_DEBUG_WINDOW_MOVEMENT "
           "WM_FORCE_SHOW_SURFACE_ALLOC WM_FORCE_SHOW_TRANSACTIONS; do "
           "cmd window logging disable \"$a\"; "
           "cmd window logging disable-text \"$a\"; "
           "done; cmd window logging stop'");
    system("sync");
    
    shell("Successfully Applay custem Wimdow Display");
    cout << "  Success: windowl custem settings iphone 8 plus.\n";
}

void view_Iphone_13() {
    cout << "\nDescription:\n"
         << "  [Balanced Performance Mode]\n"
         << "  Applying a resolution preset optimized for high-definition displays.\n"
         << "  Balancing smooth visuals with system resource control.\n"
         << "  Suitable for moderate to intensive usage scenarios.\n";

    char commands[1024];
    snprintf(commands, sizeof(commands),

     "target_width=1170; "
     "cmd window size \"$target_width\"x\"$(printf %%0.f \"$(echo \"$(echo \"$(cmd window size|cut -f3 -d ' '|head -n 1)\"|cut -d'x' -f2)\"*\"$(echo \"$target_width\"/\"$(echo \"$(cmd window size|cut -f3 -d ' '|head -n 1)\"|cut -d'x' -f1)\"|bc -l)\"|bc)\")\"; "
     "cmd window density \"$(echo \"$(cmd window density|cut -f3 -d ' '|head -n 1)\"*\"$target_width\"/\"$(echo \"$(cmd window size|cut -f3 -d ' '|head -n 1)\"|cut -d'x' -f1)\"|bc)\"");

    int result = system(commands);
    if (result != 0) {
        printf("  Error: Gagal menerapkan pengaturan.\n");
        return;
    }
    
    sleep(1);
    system("for a in WM_FORCE_DEBUG_ANIM WM_FORCE_DEBUG_APP_TRANSITIONS WM_FORCE_DEBUG_APP_TRANSITIONS_ANIM "
           "WM_FORCE_DEBUG_BOOT WM_FORCE_DEBUG_CONFIGURATION WM_FORCE_DEBUG_DRAW WM_FORCE_DEBUG_FOCUS "
           "WM_FORCE_DEBUG_FOCUS_LIGHT WM_FORCE_DEBUG_IME WM_FORCE_DEBUG_KEEP_SCREEN_ON WM_FORCE_DEBUG_ORIENTATION "
           "WM_FORCE_DEBUG_RECENTS_ANIMATIONS WM_FORCE_DEBUG_REMOTE_ANIMATIONS WM_FORCE_DEBUG_RESIZE "
           "WM_FORCE_DEBUG_SCREEN_ON WM_FORCE_DEBUG_STARTING_WINDOW WM_FORCE_DEBUG_WINDOW_MOVEMENT "
           "WM_FORCE_SHOW_SURFACE_ALLOC WM_FORCE_SHOW_TRANSACTIONS; do "
           "cmd window logging disable \"$a\"; "
           "cmd window logging disable-text \"$a\"; "
           "done; cmd window logging stop'");
    system("sync");
    
    shell("Successfully Applay custem Wimdow Display");
    cout << "  Success: windowl custem settings iphone 13 \n";
}

void view_Iphone_XR() {
    cout << "\nDescription:\n"
         << "  [High Performance Mode]\n"
         << "  Applying a resolution preset for maximum resource allocation.\n"
         << "  Enhances system responsiveness under heavy graphical workloads.\n"
         << "  Recommended for demanding tasks and graphics-intensive applications.\n";

    char commands[1024];
    snprintf(commands, sizeof(commands),    

      "target_width=828; "
      "cmd window size \"$target_width\"x\"$(printf %%0.f \"$(echo \"$(echo \"$(cmd window size|cut -f3 -d ' '|head -n 1)\"|cut -d'x' -f2)\"*\"$(echo \"$target_width\"/\"$(echo \"$(cmd window size|cut -f3 -d ' '|head -n 1)\"|cut -d'x' -f1)\"|bc -l)\"|bc)\")\"; "
      "cmd window density \"$(echo \"$(cmd window density|cut -f3 -d ' '|head -n 1)\"*\"$target_width\"/\"$(echo \"$(cmd window size|cut -f3 -d ' '|head -n 1)\"|cut -d'x' -f1)\"|bc)\"");

    int result = system(commands);
    if (result != 0) {
        printf("  Error: Gagal menerapkan pengaturan.\n");
        return;
    }
    
    sleep(1);
    system("for a in WM_FORCE_DEBUG_ANIM WM_FORCE_DEBUG_APP_TRANSITIONS WM_FORCE_DEBUG_APP_TRANSITIONS_ANIM "
           "WM_FORCE_DEBUG_BOOT WM_FORCE_DEBUG_CONFIGURATION WM_FORCE_DEBUG_DRAW WM_FORCE_DEBUG_FOCUS "
           "WM_FORCE_DEBUG_FOCUS_LIGHT WM_FORCE_DEBUG_IME WM_FORCE_DEBUG_KEEP_SCREEN_ON WM_FORCE_DEBUG_ORIENTATION "
           "WM_FORCE_DEBUG_RECENTS_ANIMATIONS WM_FORCE_DEBUG_REMOTE_ANIMATIONS WM_FORCE_DEBUG_RESIZE "
           "WM_FORCE_DEBUG_SCREEN_ON WM_FORCE_DEBUG_STARTING_WINDOW WM_FORCE_DEBUG_WINDOW_MOVEMENT "
           "WM_FORCE_SHOW_SURFACE_ALLOC WM_FORCE_SHOW_TRANSACTIONS; do "
           "cmd window logging disable \"$a\"; "
           "cmd window logging disable-text \"$a\"; "
           "done; cmd window logging stop'");
    system("sync");
    
    shell("Successfully Applay custem Wimdow Display");
    cout << "  Success: windowl custem settings iphone XR.\n";
}

void Unifersal() {
      cout << "\nDescription:\n"
           << "  [Universal Optimization]\n"
           << "  Applying general performance tuning suitable for all usage types.\n"
           << "  Aims to maintain system balance and reduce background overhead.\n"
           << "  Designed for users who want a stable daily configuration.\n";

    char commands[1024];
    snprintf(commands, sizeof(commands),    
             
      "target_width=720; "
      "cmd window size \"$target_width\"x\"$(printf %%0.f \"$(echo \"$(echo \"$(cmd window size|cut -f3 -d ' '|head -n 1)\"|cut -d'x' -f2)\"*\"$(echo \"$target_width\"/\"$(echo \"$(cmd window size|cut -f3 -d ' '|head -n 1)\"|cut -d'x' -f1)\"|bc -l)\"|bc)\")\"; "
      "cmd window density \"$(echo \"$(cmd window density|cut -f3 -d ' '|head -n 1)\"*\"$target_width\"/\"$(echo \"$(cmd window size|cut -f3 -d ' '|head -n 1)\"|cut -d'x' -f1)\"|bc)\"");

    int result = system(commands);
    if (result != 0) {
        printf("  Error: Gagal menerapkan pengaturan.\n");
        return;
    }
    sleep(1);
    system("for a in WM_FORCE_DEBUG_ANIM WM_FORCE_DEBUG_APP_TRANSITIONS WM_FORCE_DEBUG_APP_TRANSITIONS_ANIM "
           "WM_FORCE_DEBUG_BOOT WM_FORCE_DEBUG_CONFIGURATION WM_FORCE_DEBUG_DRAW WM_FORCE_DEBUG_FOCUS "
           "WM_FORCE_DEBUG_FOCUS_LIGHT WM_FORCE_DEBUG_IME WM_FORCE_DEBUG_KEEP_SCREEN_ON WM_FORCE_DEBUG_ORIENTATION "
           "WM_FORCE_DEBUG_RECENTS_ANIMATIONS WM_FORCE_DEBUG_REMOTE_ANIMATIONS WM_FORCE_DEBUG_RESIZE "
           "WM_FORCE_DEBUG_SCREEN_ON WM_FORCE_DEBUG_STARTING_WINDOW WM_FORCE_DEBUG_WINDOW_MOVEMENT "
           "WM_FORCE_SHOW_SURFACE_ALLOC WM_FORCE_SHOW_TRANSACTIONS; do "
           "cmd window logging disable \"$a\"; "
           "cmd window logging disable-text \"$a\"; "
           "done; cmd window logging stop'");
    system("sync");
    
   shell("Successfully Applay custem Wimdow Display");
    cout << "  Success: windowl custem settings view Unifersal.\n";
}

void reset_view() {
    cout << "\nDescription:\n"
         << "  [Reset Display & Logging]\n"
         << "  Reverting system display settings and re-enabling debug logging.\n"
         << "  Useful to return to stock configuration and inspect performance states.\n";

    char cmd[1024];
    snprintf(cmd, sizeof(cmd),
    
            "for a in WM_FORCE_DEBUG_ANIM WM_FORCE_DEBUG_APP_TRANSITIONS WM_FORCE_DEBUG_APP_TRANSITIONS_ANIM "
           "WM_FORCE_DEBUG_BOOT WM_FORCE_DEBUG_CONFIGURATION WM_FORCE_DEBUG_DRAW WM_FORCE_DEBUG_FOCUS "
           "WM_FORCE_DEBUG_FOCUS_LIGHT WM_FORCE_DEBUG_IME WM_FORCE_DEBUG_KEEP_SCREEN_ON WM_FORCE_DEBUG_ORIENTATION "
           "WM_FORCE_DEBUG_RECENTS_ANIMATIONS WM_FORCE_DEBUG_REMOTE_ANIMATIONS WM_FORCE_DEBUG_RESIZE "
           "WM_FORCE_DEBUG_SCREEN_ON WM_FORCE_DEBUG_STARTING_WINDOW WM_FORCE_DEBUG_WINDOW_MOVEMENT "
           "WM_FORCE_SHOW_SURFACE_ALLOC WM_FORCE_SHOW_TRANSACTIONS; do "
           "cmd window logging enable \"$a\"; "
           "cmd window logging enable-text \"$a\"; "
           "done; cmd window logging stop && '"            
            "cmd window size reset && "
            "cmd window density reset && "
            "cmd window reset && "
            "sync");
            
    int result = system(cmd);
    if (result != 0) {
        printf("  Error: Failed to read kernel perf parameters.\n");
        return;
    }
    shell("Successfully Reset custem Wimdow Display");
    cout << "  Success: Reset view custem Window display \n";
}


void clearCache() {
   cout << "\nDescription:\n"
        << "  This function clears application cache to free up storage and improve\n"
        << "  app responsiveness. It scans installed applications, excluding specific\n"
        << "  protected apps, and removes their temporary cache files. Additionally,\n"
        << "  it optimizes storage usage by executing system-level cache management\n"
        << "  commands.\n\n";

    FILE *fp;
    char package[256];

    fp = popen("pm list package -3 | cut -f2 -d:", "r");
    if (fp == NULL) {
        perror("Failed to run command");
        return;
    }

    while (fgets(package, sizeof(package), fp) != NULL) {
        package[strcspn(package, "\n")] = 0;

        if (strcmp(package, "com.mobile.legends") != 0 && strcmp(package, "com.tencent.ig") != 0 && strcmp(package, "com.levelinfinite.sgameGlobal") != 0) {
            char command[512];
            snprintf(command, sizeof(command), "rm -rf /sdcard/Android/data/%s/cache", package);
            system(command);
            snprintf(command, sizeof(command), "cmd activity profile stop --user 0 %s", package);
            system(command);
            snprintf(command, sizeof(command), "cmd activity make-uid-idle --user 0 %s", package);
            system(command);
            system("cmd package trim-caches 500M internal");
            system("cmd activity set-stop-user-on-switch false > /dev/null 2>&1");
            system("sm idle-maint run");
            system("cmd activity kill-all ");
            printf("  Cache cleared for %s\n", package);
        }
    }

    pclose(fp);
    shell("Cache Cleared Successfully");
    cout << "  Success: Restriction settings Cache Cleared.\n";
    
}