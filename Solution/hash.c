#include <stdio.h>
#define MAX 2

    enum status
    {
        frei,
        voll,
        geloescht
    };
    struct element
    {
        int wert;
        enum status s;//Soll nicht gleich frei sein 
    };
    struct element s1[MAX];

int insert(int a)
{
    int x = a % MAX;
    for (int i = 0; i < MAX; i++)
    {
        if (s1[x].s == frei || s1[x].s==geloescht)
        {
            s1[x].wert = a;
            s1[x].s = voll;
            return 1;
        }
        else
        {
            x =x + 1;
            x=x% MAX;
        }
    }
    return 0;
}
//     [1,3] 1   

int delete (int a)
{
    int x = a % MAX;
    for (int i = 0; i < MAX; i++)
    {
        if (s1[x].wert == a && s1[x].s != geloescht) //wo wird das Element geloescht
        {
            s1[x].s = geloescht;
            //s1[x].wert = NULL;
            return 1;
        }
        else
        {
            x = (x + 1);
            x=x % MAX;
        }
    }
    return 0;
}

int member(int a){
    int x = a % MAX;
        for (int i = 0; i < MAX; i++)
        {
            if (s1[x].wert == a && s1[x].s != geloescht)
            {
                return 1;
            }
            else
            {
                x = (x + 1);
                x=x % MAX;
            }
        }
        return 0;
    }

int main()
    {
        printf("%d\n", insert(1));
        printf("%d\n", insert(3));
        printf("%d\n", delete(1));
        for(int j = 0; j < MAX; j++){
            printf("%d\n", s1[j].wert );
        }
        printf("%d\n", insert(5));
        printf("%d\n", member(5));
        for(int j = 0; j < MAX; j++){
            printf("%d\n", s1[j].wert );
        }
        return 0;
    }