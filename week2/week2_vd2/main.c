#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i, n, *p;
    printf("How many numbers do you want to enter?\n");
    while(1){
        fflush(stdin);
        scanf("%d", &n);
        if(n>0){
            break;
        }
        else{
            printf("Please enter n>0 : ");
        }
    }

    /* Allocate an int array of the proper size */
    p = (int *)malloc(n * sizeof(int));
    if (p == NULL)
    {
        printf("Memory allocation failed!\n");
        return 1;
    }
    /* Get the numbers from the user */
    fflush(stdin);
    printf("Please enter numbers now:\n");
    for (i = 0; i < n; i++){
        printf("p[%d]= ",i);
        fflush(stdin);
        scanf("%d", &p[i]);
    }
    /* Display them in reverse */
    printf("The numbers in reverse order are - \n");
    for (i = n - 1; i >= 0; --i)
        printf("%d\n",p[i]);
    free(p);
    return 0;
}
