#include <stdio.h>
int main()
{
    int a[10],i,j;
    for ( i = 0; i < 10; i++ )
        scanf("%d", &a[i] );
    for (i=0; i<10; i++ )
    {
        for ( j = 0; j < 10; j++ )
            if ( i!=j && a[i]==a[j])
                break;
        if (a[i]!=a[j])
            printf( "%d ", a[i] );
    }
}
