#include <iostream>
#include <cstdlib>
#include <cstring>
#include <unistd.h>
#include <sys/stat.h>
#include <errno.h>
#include <cstdio>
#include "Display.h"
using namespace std;
#define SCRIPT_VERSION "1.0 [ Window Settings Profile ]"

void Usage() {
    cout << "Display Enhancer " << SCRIPT_VERSION << " - System Performance Optimization Utility\n\n"
         << "Usage:\n"
         << "  Neslet Setup [OPTION]\n\n"
         << "Options:\n"
         << "  -O           Apply lightweight optimization profile (e.g. for 1080p screens)\n"
         << "  -B           Apply balanced performance profile (for high-definition screens)\n"
         << "  -P           Apply high-performance profile (for demanding visual workloads)\n"
         << "  -L           Apply universal optimization profile (general purpose tuning)\n"
         << "  -v           View and reset system debug/display settings\n"
         << "  -C           Clear application caches to free storage & improve responsiveness\n"
         << "  -h, --help   Show this help message and exit\n\n"
         << "Description:\n"
         << "  Neslet Setup is a performance-tuning tool for Android devices that enables\n"
         << "  dynamic system adjustments such as resolution, density, and logging behavior.\n"
         << "  Ideal for improving responsiveness, optimizing battery life, or tuning system\n"
         << "  visuals for specific usage scenarios.\n\n"
         << "Examples:\n"
         << "  Apply lightweight tuning (e.g. 1080p preset):\n"
         << "      Neslet Setup -O\n\n"
         << "  Apply balanced profile (e.g. 1170p preset):\n"
         << "      Neslet Setup -B\n\n"
         << "  Apply high-performance profile (e.g. 828p preset):\n"
         << "      Neslet Setup -P\n\n"
         << "  Apply universal optimization:\n"
         << "      Neslet Setup -L\n\n"
         << "  Reset system display/debug settings:\n"
         << "      Neslet Setup -v\n\n"
         << "  Clear cache for third-party apps:\n"
         << "      Neslet Setup -C\n\n"
         << "System Requirements:\n"
         << "  - Root access may be required to change display and debug settings.\n"
         << "  - Compatible with Android systems that support ADB shell tools.\n\n"
         << "More Info:\n"
         << "  Developer Docs: https://developer.android.com/studio/command-line/adb\n"
         << "  Forum Support : https://forum.xda-developers.com\n"
         << "  Help & Q&A    : https://stackoverflow.com/questions/tagged/android\n\n";
}

int main(int argc, char *argv[]) {
    if (argc < 2) {
        Usage();
        return 1;
    }

    for (int i = 1; i < argc; i++) {
        if (strcmp(argv[i], "-O") == 0) {
            sleep(1);
           cout << "- Applying Custem Settings view iphone 8 plus \n";
            view_Iphone_8plus();
        } else if (strcmp(argv[i], "-B") == 0) {
            sleep(1);
            cout << "- Applying Custem Settings view iphone 13 \n";
            view_Iphone_13();
        } else if (strcmp(argv[i], "-P") == 0) {
            sleep(1);
            cout << "- Applying Custem Settings view iphone XR \n";
            view_Iphone_XR();
        } else if (strcmp(argv[i], "-L") == 0) {
            sleep(1);
            cout << "- Applying Custem Settings view Unifersal  \n";
            Unifersal();
        } else if (strcmp(argv[i], "-v") == 0) {
            sleep(1);
            cout << "- Applying Custem Settings Reset view Display Window \n";
            reset_view();
        } else if (strcmp(argv[i], "-C") == 0) {
            sleep(1);
            cout << "- Clearing Application Caches\n";
            clearCache();
        } else if (strcmp(argv[i], "-h") == 0 || strcmp(argv[i], "--help") == 0) {
            Usage();
        } else {
            printf("Unknown option: %s\n", argv[i]);
            Usage();
            return 1;
        }
    }

    sleep(1);
    printf("\n");
    printf(" ⚠️ This module is protected by copyright and is\n");
    printf(" intended for use by regular users only. Any use of\n");
    printf(" this module, including its code, design, or features,\n");
    printf(" by other developers without written permission from\n");
    printf(" the copyright owner is strictly prohibited.\n");
    printf("______________________________________________(+)\n\n");
    
    
    return 0;
}