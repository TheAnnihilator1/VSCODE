#include <stdio.h>

struct node
{
    int numnei;
    int weight[10];
    int nei[10];
};

struct node Arr[10];

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
            printf("Enter neighbour %d \n", j + 1);
            scanf("%d", &Arr[i].nei[j]);
            printf("Enter the weight of the edge - ");
            scanf("%d", &Arr[i].weight);
            if (Arr[i].nei[j] > num)
            {
                printf("Invalid input, try again");
                j--;
            }
        }
    }

    printf("Enter the node to start from :- ");
    int start;
    scanf("%d", &start);
}