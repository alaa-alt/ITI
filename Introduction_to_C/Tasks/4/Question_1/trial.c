#include <stdio.h>
#include <conio.h>
#include <windows.h> // For gotoxy and Sleep

// Define key codes
#define ESC 27
#define ENTER 13
#define UP_ARROW 72
#define DOWN_ARROW 80

// Function to set the cursor position (gotoxy)
void gotoxy(int x, int y) {
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

// Function to display the menu and highlight the current option
void displayMenu(char Menu[3][10], int currentOption) {
    system("cls"); // Clear the screen

    for (int i = 0; i < 3; i++) {
        if (i == currentOption) {
            printf("\t\t\t-> %s\n\n\n", Menu[i]);  // Highlight the selected option
        } else {
            printf("\t\t\t   %s\n\n\n", Menu[i]);
        }
    }
}

int main() {
    char Menu[3][10] = {"Add    ", "Display ", "Exit    "};
    int currentOption = 0;  // Start with the first option (index 0)
    char key;

    // Display the initial menu
    displayMenu(Menu, currentOption);

    do {
        key = getch();  // Wait for user input

        if (key == 0 || key == 224) {  // Arrow keys are special (extended keys)
            key = getch();  // Get the actual key code
            switch (key) {
                case UP_ARROW:
                    currentOption = (currentOption - 1 + 3) % 3;  // Move up in the menu
                    break;
                case DOWN_ARROW:
                    currentOption = (currentOption + 1) % 3;  // Move down in the menu
                    break;
            }
            // Update the menu display after moving up/down
            displayMenu(Menu, currentOption);
        } else if (key == ENTER) {  // User pressed Enter
            switch (currentOption) {
                case 0:  // Add
                    system("cls");
                    printf("You selected 'Add'\n");
                    printf("Press ESC to return to the menu...\n");
                    while (getch() != ESC);  // Wait for ESC to return
                    displayMenu(Menu, currentOption);  // Redisplay the menu
                    break;
                case 1:  // Display
                    system("cls");
                    printf("You selected 'Display'\n");
                    printf("Press ESC to return to the menu...\n");
                    while (getch() != ESC);  // Wait for ESC to return
                    displayMenu(Menu, currentOption);  // Redisplay the menu
                    break;
                case 2:  // Exit
                    system("cls");
                    printf("Exiting...\n");
                    Sleep(1000);
                    return 0;  // Exit the program
            }
        }

    } while (key != ESC);  // Exit the loop if ESC is pressed

    return 0;
}

