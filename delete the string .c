#include<stdio.h>
#include<string.h>

int main()
{
    int i, j = 0, k = 0,n = 0;
    int flag = 0;

    char str[100], neww[100], word[100];

    printf("Enter Any String to Remove a Word from String: ");
    gets(str);

    printf("\n\n Enter Any Word You Want to be Removed: ");
    gets(word);

    for(i = 0 ; str[i] != '\0' ; i++)
    {
        k = i;
        printf("value of i :%d\n",i);

        while(str[i] == word[j])
        {
            i++,j++;
            if(j == strlen(word))
            {
                flag = 1;
                break;
            }
        }
    j = 0;
     printf("value of i :%d\n",i);

    if(flag == 0)
        i = k;
    else
        flag = 0;
  printf("value of i :%d\n",i);


//printf("value of new :%s\n",neww);
printf("value of n:%d\n",n);


    neww[n++] = str[i];
     printf("value of n :%s\n",neww);
      printf("value of n :%d\n",n);
    }

    neww[n] = '\0';

    printf("\n\n After Removing Word From String: %s",neww);
}
