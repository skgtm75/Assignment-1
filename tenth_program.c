#include<stdio.h>

int main(int argc, char const *argv[])
{
    // WAP to take date as an input in below given format and convert the date format and display the result as given below.
    // User Input date format – “DD/MM/YYYY” (27/11/2022)
    // Output format – “Day – DD , Month – MM , Year – YYYY” (Day – 27 ,Month – 07 , Year – 2022)
    
    int day, month, year;
    printf("Enter date in format DD/MM/YYYY: ");
    scanf("%d/%d/%d", &day, &month, &year);
    printf("Day - %02d , Month - %02d , Year - %d\n", day, month, year);
    return 0;
}
