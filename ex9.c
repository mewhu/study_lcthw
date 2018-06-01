#include <stdio.h>
int main()
{
    char name1[4] = {'A'};
    char name2[4] = {'B'};
    
    printf("\nname2 : %s", name2);
    name2[3] = 'C';
    printf("\nname2 : %s", name2);

    return 0;
}
