#include <stdio.h>
#include <stdlib.h>

int linhcanh(int a[],int x)
{
    for(int i=0;i<11;i++){
        if(a[i]==x){
            if(i<10){
                return i;
            }
            else{
                return 0;
            }
        }
    }
}



int main()
{
    int a[11];
    for(int i=0;i<11;i++){
        printf("a[%d] : ",i);
        scanf("%d",&a[i]);
    }
    printf("ket qua la : %d \n",linhcanh(a,a[10]));
    return 0;
}
