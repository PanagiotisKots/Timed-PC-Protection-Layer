#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <direct.h>
#include <time.h>

int main() {
    // Detach from the console to run in the background
    FreeConsole();

    // Define the static path to the "Hello" folder on the desktop
    char folderPath[260];
    snprintf(folderPath, sizeof(folderPath), "C:\\Users\\PC\\Desktop\\Hello");

    int folderExists = 0;  // Variable to track if the folder exists
    int secondsWaited = 0; // Track how many seconds have passed

    // Keep checking for 40 seconds if the folder exists
    while (secondsWaited < 40) {
        // Check if the folder "Hello" exists
        if (_access(folderPath, 0) != -1) {
            folderExists = 1;  // Folder exists
            break;
        }

        // Wait for 1 second before checking again
        Sleep(1000); // Sleep for 1000 milliseconds (1 second)
        secondsWaited++;
        // No console output here to keep it in the background
    }

    // After 40 seconds, if the folder doesn't exist, shutdown the PC
    if (!folderExists) {
        system("shutdown /s /t 0");
    }

    return 0;
}

