#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n1, n2;
    printf("Enter number of elements for two arrays: ");
    scanf("%d %d", &n1, &n2);

    int arr1[n1], arr2[n2], arr3[n1 + n2];
    printf("1st Array: ");

    for (int i = 0; i < n1; i++)
    {
        scanf("%d", &arr1[i]);
    }
    getchar();
    printf("2nd Array: ");


    for (int i = 0; i < n2; i++)
    {
        scanf("%d", &arr2[i]);
    }
    int i = 0, j = 0,k=0;

    do
    {
        if (arr1[i] < arr2[j])
        {
            arr3[k++] = arr1[i++];
        }

        else 
        {
            arr3[k++] = arr2[j++];
        }
        
    }while (i < n1 && j < n2);

     while (i < n1 )
    {

            arr3[k++] = arr1[i++];
        
    }

     while ( j < n2)
    {
        {
            arr3[k++] = arr2[j++];
        }
        
    }
    printf("New Array: ");
    for (int i = 0; i < n1+n2; i++)
    {
        printf("%d ", arr3[i]);
    }
    



    return 0;
}
