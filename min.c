#include<stdio.h>

int main()
{
        char arr[1024];
        char a;
        int i,counter=0;

        printf("enter string :: ");
        fgets(arr,sizeof(arr),stdin);

        for(i=0;i<strlen(arr);i++)
                counter++;

        for(i=0;i<strlen(arr);i++)
        {
                if(i==(counter/2))
                {
                	printf("%c\n",arr[i-1]);
					printf("%c%c\n", arr[i-1],arr[i]);
					printf("%c%c%c\n", arr[i-1],arr[i],arr[i+1]);
					printf("%c%c%c%c\n", arr[i-1],arr[i],arr[i+1],arr[0]);
					printf("%c%c%c%c%c\n", arr[i-1],arr[i],arr[i+1],arr[0],arr[1]);

                }
        }
        return 0;
}