#include <stdio.h>
int max;
int main()
{
    int n;
    scanf("%d",&n);
    printf("\n");
    int arrn[n][3];
    for(int i=0;i<n;i++)
    {
        for(int j = 0;j<3;j++)
        {
            scanf("%d",&arrn[i][j]);
        }
    }
    
    for(int i=0;i<n;i++)
    {
        int arr[3];
        for(int j = 0;j<3;j++)
        {
            arr[j] = arrn[i][j];
        }
       
        int t = isRectangle(arr);
    
        if(t==1)
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        } 
        
    }
    
    return 0;
}

int isRectangle(int arr[3])
{
    int flag=0;
    max=arr[0];
    for(int i=0;i<3;i++)
    {
        if(max<=arr[i])
        {
            max=arr[i];
        }
    }
    for(int i=0;i<3;i++)
    {
        int diff = max - arr[i];
        int pre = arr[i];
        int current = i;
        if((arr[i]==arr[i+1]) && (arr[i+2]%2==0))
        {
            flag = 1;
            break;
        }
        else if((arr[i]==arr[i+2]) && (arr[i+1]%2==0))
        {
            flag = 1;
            break;
        }
        else
        {
            if(diff>0)
            for(int j = 0;j<3;j++)
            {
                if((diff == arr[j]) && (j!=i))
                {
                    flag=1;
                    break;
                }
            } 
        }
        
    }
    return flag;
}