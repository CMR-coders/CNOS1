#include <stdio.h>
#include <conio.h>

int main()
{
    int i, sn;
    int st[20];
    char op;
    printf("\nHow many stations: ");
    scanf("%d", &sn);

    do
    {
        printf("\nEnter status of stations");
        for (i = 0; i < sn; i++)
        {
            printf("\nEnter status of station %d: ", i + 1);
            scanf("%d", &st[i]);
        }

        // Print ready stations
        for (i = 0; i < sn; i++)
        {
            if (st[i] == 1)
            {
                printf("\nStation %d is ready to transmit", i + 1);
            }
        }

        printf("\nRepeat? Press Y: ");
        scanf(" %c", &op); // Space before %c to ignore any newline character

    } while (op == 'y' || op == 'Y');

    getch();
    return 0;
}