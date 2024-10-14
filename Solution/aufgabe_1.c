#include <stdio.h>

int countspace(char s[])
{
    int counter = 0;
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == ' ')
        {
            counter++;
        }
    }
    return counter;
}

int counterspaceZ(char s[])
{
    int counter = 0;
    char *zeiger = &s[0];
    for (int i = 1; s[i] != '\0'; i++)
    {
        if (*(zeiger + i) == ' ')
        {
            counter++;
        }
    }
    return counter;
}
double min(double a[], int n) //was bedeutet die Aufgabe genau 
{
    if (n == 0)
    {
        return 0.0;
    }
    double zw = a[0];
    for (int i = 1; i < n; i++)
    {
        if (a[i] < zw)
        {
            zw = a[i];
        }
    }
    return zw;
}
char *strcat1(const char *dest, const char *src){ 
    int i, j;
    for (i = 0; *dest[i] != '\0'; i++)
    {
    }
    for (j = 0; *src[j] != '\0'; j++)
    {
        dest[i + j] =  src[j];
        
    }
    printf("%c\t", *dest);
    return dest;
}

int fac(int n){
    if (n == 0){
        return 1;
    }

    if (n > 1){
        int res = 1;
        for(int i = n; i > 0; i--){
            res *= i;
        }
        return res;
    }
    
    return 0;
}

double bin_koeff(int n, int k){
    if (n >= k){
        return (fac(n) / (fac(k) * fac(n-k)));
    }
    return 0;
}

int main()
{
    char s[] = "Hallo la ";
    double s1[] = {2.6, 3.6, 5.4, 3.3, 8.7, 1.52};
    printf("%.1f", min(s1, 6));
    printf(" %d ", countspace(s));
    printf("%d  ", counterspaceZ(s));
    const char a[20]="abc";
    printf("%s\n",a);
    const char  b[10]="def";
    strcat1(&a,&b);
    printf("%s\n",a);
    int res = fac(3);
    printf("%d\n", res);
    
    //double res2 = bin_koeff(3,2);
   // printf("%f\n", res2);

}
