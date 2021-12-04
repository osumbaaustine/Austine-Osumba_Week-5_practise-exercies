#include <stdio.h>
#include <stdlib.h>


int main()
{
    int hi[10][2], i=0,j=0,largest, smallest;

    while(i<10)
    {
        printf("Enter a number:");
        scanf("%d", &hi[i][0]);
        i++;
    }
    smallest = hi[0][0];
    largest = hi[0][0];
    printf("The Numbers You Entered Are: ");
    while(i!=0)
    {
        hi[10-i][1] = 0;
        if(hi[10-i][0] < smallest) { smallest = hi[10-i][0]; }
        if(hi[10-i][0] > largest) { largest = hi[10-i][0]; }
        printf("%d | ", hi[10-i][0]);
        i--;
    }
    int most_freq = 0;
    for (i = 0; i < 10; i++){
        for (j = 0; j < 10; j++){
            if(hi[i][0] == hi[j][0]){
                hi[i][1]++;
                if (hi[i][1] > most_freq){
                    most_freq = hi[i][0];
                }
            }
        }
    }

    printf("\nLargest number is = %d || Smallest number is = %d", largest, smallest);
    printf("\nMost frequent is = %d\n", most_freq);
    return 0;
}