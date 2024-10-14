#include <stdio.h>
#define MAX 8
#include <stdlib.h>

typedef struct element
{
    int wert;
    struct element *next;
} el;

el *array[MAX];

int funkhash(int a)
{
    return a % MAX;
}

int insert(int a)
{
    el *zeiger = (el *)malloc(sizeof(el));
    int x = funkhash(a);
    el *pointer = array[x];
    if (zeiger != NULL)
    {
        zeiger->wert = a;
        zeiger->next = pointer;
        array[x] = zeiger;
        return 1;
    }
    else
    {
        return 0;
    }
}
int member(int a)
{
    int x = funkhash(a);
    if (array[x] == NULL)
    {
        return 0;
    }
    else
    {
        el *pointer = array[x];
        while (pointer != NULL)
        {
            if (pointer->wert == a)
            {
                return 1;
            }
            else
            {
                pointer = pointer->next;
            }
        }
        return 0;
    }
}
int delete (int a)
{
    int x = funkhash(a);
    el *p = array[x];
    el *p1 = p;
    if (array[x] == NULL)
    {
        return 0;
    }
    else
    {
        if (p->wert == a)
        {
            array[x] = p->next;
            return 1;
        }
        while (p != NULL)
        {
            if (p->wert == a)
            {
                p1->next = p->next;
                return 1;
            }
            p1 = p;
            p = p->next;
        }
        return 0;
    }
    return 0;
}
void baba(int pos)
{
    struct element *node, *pointer;
    if (array[pos] == NULL)
    {
        return;
    }
    else
    {
        // printf("\n %s", "baba");
        pointer = array[pos];
        while (pointer != NULL)
        {

            printf("%d  ", pointer->wert);
            pointer = pointer->next;
        }
    }
}
int main()
{
    int i;
    for (i = 1; i <= 2 * MAX; i++)
    {
        printf("%d", insert(i));
    }
    printf("\n");
    for (i = 0; i <= 2 * MAX; i++)
    {
        baba(i);
    }
    printf("\n");
    for (i = 1; i <= MAX; i++)
    {
        printf("%d", member(i));
    }

    printf("%d  ", delete (2));
    printf("\n");
    for (i = 0; i <= 2 * MAX; i++)
    {
        baba(i);
    }
    printf("\n");
    for (i = 1; i <= 2 * MAX; i++)
    {
        printf("%d  ", member(i));
    }

    return 0;
}
