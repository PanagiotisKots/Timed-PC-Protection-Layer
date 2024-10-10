#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <direct.h>
#include <time.h>

int main() {
    // Detach from the console to run in the background
    FreeConsole();

  
    char folderPath[260];
    snprintf(folderPath, sizeof(folderPath), "C:\\Users\\PC\\Desktop\\Hello");

    int folderExists = 0;  
    int secondsWaited = 0; 

    
    while (secondsWaited < 40) {
        // Check if the folder "Hello" exists
        if (_access(folderPath, 0) != -1) {
            folderExists = 1;  
            break;
        }

       
        Sleep(1000); 
        secondsWaited++;
       
    }

    // After 40 seconds, if the folder doesn't exist, shutdown the PC
    if (!folderExists) {
        system("shutdown /s /t 0");
    }

    return 0;
}

