8. Print a triangle of numbers:
   ```
   1
   1 2
   1 2 3
   1 2 3 4
   ```
Solution:

#include <stdio.h>

int main()
{
    int n,i,j;
    scanf("%d",&n);
    for(i=0; i<n; i++){
        for(j=0; j<i+1; j++){
            printf("%d",j+1);
        }
        printf("\n");
    }

    return 0;
}
