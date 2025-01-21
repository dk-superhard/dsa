/* Implement solving towers of hanoi problem through recursion */

#include <stdio.h>
void towers(int n, char from, char to, char via);

int main()
{
    int no_of_disks;
    printf("Enter no of disks you wish to move from A to B using C\n");
    scanf("%d",&no_of_disks);
    towers(no_of_disks, 'A', 'B', 'C');
}

void towers(int n, char from, char to, char via)
{
    /* Base condition */
    if (n == 1) {
        printf("Move from %c to %c\n", from, to);
        return;
    } 
    /*Inductive definition */ 
    else {
        towers(n-1, from, via, to);
        towers(1, from, to, via);
        towers(n-1, via, to, from);
    }
}