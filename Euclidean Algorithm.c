
#include <stdio.h>

int main() {
    int a,b,r;
    printf("Enter a, b value\n");
    scanf("%d %d",&a,&b);
    while (b!=0)
    {
        if (a>b)
        {
        r=a%b;
        a=b;
        b=r;
        }
        else
        {
        	r=b%a;
        	a=b;
        	b=r;
		}
    }
    printf("%d",a);

    return 0;
}
