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
    int physics, chemistry, maths;
    float average;
    printf("Enter physics marks:");
    scanf("%d", &physics);
    printf("Enter chemistry marks:");
    scanf("%d", &chemistry);
    printf("Enter maths marks:");
    scanf("%d", &maths);
    average = (physics + chemistry + maths)/3.0;
    printf("average = %.2f\n",average);
    (average >= 50) ? printf("eligible"):printf("not eligible\n");

    return 0;
}