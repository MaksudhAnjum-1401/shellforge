#include <stdio.h>
#include <string.h>
#include "history.h"

static char history[100][1024];
static int history_count = 0;

void add_history(const char *command)
{
    if (command == NULL || command[0] == '\0')
        return;

    if (history_count < 100)
    {
        strncpy(history[history_count], command, 1023);
        history[history_count][1023] = '\0';
        history_count++;
    }
}

void show_history(void)
{
    for (int i = 0; i < history_count; i++)
    {
        printf("%d %s\n", i + 1, history[i]);
    }
}
