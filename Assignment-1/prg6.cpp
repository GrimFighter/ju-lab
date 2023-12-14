#include<stdio.h>

int main(int argc, char const *argv[])
{   int key;
    printf("Enter value:");

    scanf("%d",&key);
    int arr[]={1,28,17,88,2,74,14,36,45,12,14,98};

    int size=sizeof(arr)/sizeof(int);

    for (int i = 0; i < size; i++)
    {
        if (key == arr[i])
        {
            printf("\nfound at index: %d\n",i);
        }
        
        
    }
     printf("Not found\n");
    
    return 0;
}
