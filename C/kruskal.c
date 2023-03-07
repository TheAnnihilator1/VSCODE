#include <stdio.h>

#define max 10

struct node
{
    int numnei;
    int weight[max];
    int nei[max];
};

struct node Arr[max];

void bubblygamd(int array[], int size)
{
    for (int step = 0; step < size - 1; ++step)
    {
        for (int i = 0; i < size - step - 1; ++i)
        {
            if (array[i] > array[i + 1])
            {
                int temp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = temp;
            }
        }
    }

    for (int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
}

void kruskal(int num)
{
    int vis[num];
    int flag = 0;

    bubblygamd(Arr, num);
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

    kruskal(num);
}