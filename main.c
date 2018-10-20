#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int count,length=0;

    char a[1000];

    printf("Enter string to find length: ");
    gets(a);

    /*Keep going through each character of the string till it ends*/
    for(count=0; a[count] !='\0'; count++)
    {
        length++;
    }
    printf("Length of %s = %d\n",a, length);
    return 0;
}
