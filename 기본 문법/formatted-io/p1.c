#include <stdio.h>

/* Enter a date (mm/dd/yyyy) : 2/17/2011
*  You entered the date 20110217
*/

int main(void)
{
    int month, date, year;

    printf("Enter a date (mm/dd/yyyy) : ");
    scanf("%d/%d/%d", &month, &date, &year);
    printf("You entered the date %d%.2d%.2d\n", year, month, date);

    return 0;

}
