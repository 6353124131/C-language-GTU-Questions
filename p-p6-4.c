#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    printf("Enter the number of element in array:");
    scanf("%d",&n);
    
    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int sum=0;
    for (int i = 0; i < n; i++)
    {
    sum+=arr[i];  
    }
      float AV=sum/n;
    float Product=1;
    for (int i = 0; i < n; i++)
    {
        Product*=arr[i];
    }
     float GM=pow(Product, 1.0 / n);
   float HM = 0;
    for (int i = 0; i < n; i++) {
        HM += 1.0 / arr[i];
    }
   HM = n / HM;
  
     
     
     printf("Average=%f",AV);
     printf("\nGeometric mean=%f",GM);
     printf("\nHarmonic mean=%f",HM);
     

    
    return 0;
}
