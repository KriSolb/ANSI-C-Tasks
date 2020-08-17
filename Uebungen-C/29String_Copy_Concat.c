#include <stdio.h>
#include <stdlib.h>

int main()
{
//    char text1[] = {'W','i','n','d','o','w','s','\0'};
//    char text2[] = {"Windows"};
//    char text3[] = "Windows";
//    printf("%s\n", text1);
//    printf("%s\n", text2);
//    printf("%s\n", text3);

//    const int MAX = 20;
//
//    char string1[MAX];
//    printf("\nEnter string (max. 19 chars):\n");
//
//    fgets(string1, MAX, stdin);
//    printf("\nOutput string:\n%s", string1);
//
//    int length = strlen(string1);
//    printf("\nString length %d.\n", length );

    char source[101] = "copy cat";
    char desti[101];

    strncpy(desti, source, 30);
    printf("\n%s\n%s\n", source, desti);

    for(int i= 0; i <=100; i++)
    {
        strncat(desti, source, 1);
    }

    printf("\n%s\n", desti);

    return 0;
}
