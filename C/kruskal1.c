#include <stdio.h>
#define SAX 10
struct node
{
    int ed;
    int v1;
    int v2;
    int weight;
};

struct node Arr[SAX];

void kruskalgal(int num)
{
    int vis[num];
    int flag = 0;

    for (int step = 0; step < num - 1; ++step)
    {
        for (int i = 0; i < num - step - 1; ++i)
        {
            if (Arr[i].weight > Arr[i + 1].weight)
            {
                struct node temp = Arr[i];
                Arr[i] = Arr[i + 1];
                Arr[i + 1] = temp;
            }
        }
    }

    vis[flag] = Arr[flag].v1;
    flag++;
    vis[flag] = Arr[flag].v2;
    flag++;

    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < flag; j++)
        {
            if (Arr[i].v1 != vis[j])
            {
                vis[flag] = Arr[i].v1;
                flag++;
            }
            if (Arr[i].v2 != vis[j])
            {
                vis[flag] = Arr[i].v2;
                flag++;
            }
        }
    }

    for (int i = 0; i < num; i++)
    {
        printf("Edge %d -> \n", Arr[i].ed);
    }

    printf("\n Final Output \n");

    for (int i = 0; i < num; i++)
    {
        printf("%d -> ", vis[i]);
    }
}

void main()
{
    int num, num1;

    printf("Enter the number of edges :- ");
    scanf("%d", &num);
    printf("\n");

    for (int i = 0; i < num; i++)
    {
        printf("Edge %d \n", i + 1);
        Arr[i].ed = i + 1;

        printf("Enter the first vertex ");
        scanf("%d", &Arr[i].v1);

        printf("Enter the second vertex ");
        scanf("%d", &Arr[i].v2);

        printf("Enter the weight ");
        scanf("%d", &Arr[i].weight);

        printf("\n");
    }

    kruskalgal(num);
}