#include <stdio.h>
#include <ctype.h>

int main() {
    char signal;
    int hour;

    printf("Enter traffic signal color (R/Y/G): ");
    scanf(" %c", &signal);
    signal = toupper(signal);
    printf("Enter current hour in 24-hour format (0-23): ");
    scanf("%d", &hour);

    switch(signal) {
        case 'R':
            if (hour >= 22 || (hour>=0 &&hour<=5)) {
                printf("Stop, but night caution allowed\n");
            } else {
                printf("Stop and wait\n");
            }
            break;

        case 'Y':
            printf("Get Ready\n");
            break;

        case 'G':
            printf("Go\n");
            break;

        default:
            printf("Invalid Signal\n");
            break;
    }

    return 0;
}
