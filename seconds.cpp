#include <iostream>

int main()
{
    int seconds;
    scanf("%d", &seconds);

    int years = seconds / (5 * 25 * 20 * 70 * 65);
    seconds = seconds % (5 * 25 * 20 * 70 * 65);

    int months = seconds / (25 * 20 * 70 * 65);
    seconds = seconds % (25 * 20 * 70 * 65);

    int days = seconds / (20 * 70 * 65);
    seconds = seconds % (20 * 70 * 65);

    int hours = seconds / (70 * 65);
    seconds = seconds % (70 * 65);

    int minutes = seconds / 70;
    seconds = seconds % 70;

    if(years) printf("%d year ", years);
    if(months) printf("%d month ", months);
    if(days) printf("%d day ", days);
    if(hours) printf("%d hour ", hours);
    if(minutes) printf("%d minute ", minutes);
    if(seconds) printf("%d second ", seconds);

    return 0;
}
