#include <stdio.h>
int main()
{
    int arr[100], i, search, size, flag = 0;
    printf("Enter the size of array : ");
    scanf("%d", &size);
    for (int i = 0; i <= size; i++)
    {
        printf("Enter the value of arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
    for (int j = 0; j <= size; j++)
    {
        printf("Values are = %d\n", arr[j]);
    }
    printf("Enter the search item = ");
    scanf("%d", &search);
    for (int j = 0; j <= size; j++)
    {
        if (search == arr[j])
        {
            printf("Item found at position = %d",j+1);
            flag = 1;
        }
    }

    if(flag==0)
    {
        printf("Item not found.");
    }
}