#include <stdio.h>

int main(void)
{
    printf("|%6d,%4d|\n", 86, 1040);
    printf("|0000|\n");
    printf("|%12.5e|\n", 30.253);
    printf("|00|\n");
    printf("|%.4f|\n", 83.162);
    printf("||\n");
    printf("|%-6.2g|\n", .0000009979);
    printf("|00|\n");

    return 0;
}
