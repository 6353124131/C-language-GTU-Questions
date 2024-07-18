#include<stdio.h>
int main()
{
    int n;
    printf("Entre array size:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter Array Element:");
    for (int i = 0; i < n; i++)
    {
            scanf("%d",&arr[i]);

    }
    int a=arr[0];
    for (int i = 0; i < n; i++)
    {
        for(int j=i; j<n; j++){

        if(arr[i]>arr[j])
        {
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            

        }
        }
        
        
    }
    printf("Resulting array is : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    
    
    return 0;
}
