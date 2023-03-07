#include <stdio.h>

struct node
{
    int numnei;
    int weight[10];
    int nei[10];
};

struct node Arr[10];

int min(int arr[], int len)
{
    len--;
    int min = 0;
    for (int i = 0; i < len; i++)
    {
        if (arr[min] > arr[i])
        {
            min = i;
        }
    }
    return min;
}

void prim(int start, int num)
{
    int vis[num];
    int flag = 0;
    vis[start] = 1;
    flag++;

    while (flag <= num)
    {
        printf("%d -> ", start);
        int num1 = Arr[start].numnei;

        for (int i = 0; i < num1; i++)
        {
            int arr[num1];
            for (int i = 0; i < num1; i++)
            {
                arr[i] = Arr[start].weight[i];
            }
            int mini = min(arr, num1);

            if (vis[mini] != 1)
            {
                start = Arr[start].nei[mini];
                vis[start] = 1;
                flag++;
                break;
            }
        }
    }
}

/*void main()
{
    int arr[] = {1, 20, 40, 50, 60000, 70, 30, 40, 10, 234, 60};
    int a = min(arr, 10);
    printf("Min at %d", a + 1);
}*/

void main()
{
    int num, num1;

    printf("Enter the number of nodes ");
    scanf("%d", &num);

    for (int i = 0; i < num; i++)
    {
        printf("\n");
        printf("Node %d :- \n", i + 1);

        printf("Enter the number of neighbours - ");
        scanf("%d", &num1);
        Arr[i].numnei = num1;

        for (int j = 0; j < num1; j++)
        {
            printf("Enter neighbour number %d - ", j + 1);
            scanf("%d", &Arr[i].nei[j]);
            if (Arr[i].nei[j] > num)
            {
                printf("Invalid input, try again \n");
                j--;
                continue;
            }
            printf("Enter the weight of the edge - ");
            scanf("%d", &Arr[i].weight[j]);
        }
        printf("\n");
    }

    /*for (int i = 0; i < num; i++)
    {
        printf("\n");
        printf("Node %d :- \n", i + 1);

        printf("The neighbours are :- ");

        num1 = Arr[i].numnei;
        for (int j = 0; j < num1; j++)
        {
            printf("%d , ", Arr[i].nei[j]);
        }
        printf("The weights are :- ");
        for (int j = 0; j < num1; j++)
        {
            printf("%d , ", Arr[i].weight[j]);
        }
        printf("\n");
    }*/

    printf("Enter the node to start from :- ");
    int start;
    scanf("%d", &start);

    prim(start, num);
}