#include <stdio.h>
#define SAX 10
struct node
{
    int v1;
    int v2;
    int weight;
};

struct node Arr[SAX];

void kruskalgal(int start, int num)
{
}

void main()
{
    int num, num1;

    printf("Enter the number of edge ");
    scanf("%d", &num);

    for (int i = 0; i < num; i++)
    {
        printf("Enter the first vertex ");
        scanf("%d", &Arr[i]);
    }
}