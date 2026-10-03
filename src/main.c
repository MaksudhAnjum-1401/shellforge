#include <stdio.h>
#include <string.h>
#include "history.h"

int main(void)
{
    char command[1024];

    printf("Welcome to Shellforge!\n");

    while (1)
    {
        printf("shellforge> ");

        if (fgets(command, sizeof(command), stdin) == NULL)
            break;

        command[strcspn(command, "\n")] = '\0';

        if (strcmp(command, "exit") == 0)
            break;

        if (strcmp(command, "") == 0)
            continue;

        add_history(command);

        if (strcmp(command, "history") == 0)
        {
            show_history();
        }
        else
        {
            printf("You entered: %s\n", command);
        }
    }

    return 0;
}
