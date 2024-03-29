#include<stdio.h>
#include<limits.h>
 
#define gc getchar_unlocked
 
void inline scanint(int *x)
{
    register int c = gc();
    *x = 0;
    for( ;(c < 48 || c > 57); c = gc())
        ;
    for( ;c > 47 && c < 58; c = gc())
    {
        *x = ( *x << 1 ) + ( *x << 3 ) + c - 48;
    }
}
 
int main()
{
    int t, n, i, count, speed, min_speed;
    scanint(&t);
    while(t--)
    {
        scanint(&n);
        min_speed = INT_MAX;
        count = 0;
        for(i = 0; i < n; i++)
        {
            scanint(&speed);
            if(speed <= min_speed)
            {
                count++;
                min_speed = speed;
            }
        }
        printf("%d\n", count);
    }
    return 0;
}  
