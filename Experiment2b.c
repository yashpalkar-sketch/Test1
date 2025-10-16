/*
Name - Yash palkar
Age- 18
Class- F.E.
DIV- D (Mechanical)
UIN - 251M038
*/
#include <stdio.h>

int main()
{
    int start, end, sum = 0, i;
    printf("Enter the starting number:");
    scanf("%d", &start);
    printf("Enter the ending number:");
    scanf("%d", &end);
    if(start>end){
        int temp = start;
        start = end;
        end = temp;
    }
    if (start % 2 ==0){
        start++;
    }
    for (i = start; i <= end; i+=2){
        sum += i;
    }
    printf("The sum of all the odd numbers between %d and %d is:%d\n",start,end,sum);
    return 0;
}