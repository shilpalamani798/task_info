#include<stdio.h>
#include<stdlib.h>
char *vowel_check(char *str)

{

    for(int i=0;str[i]!='\0';i++)

    {

        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u')

        {
           for(int j=i;str[j];j++)
           str[j]=str[j+1];
           i--;
        }

    }
     
     return str;
}

int main()

{

    char *str;
    int n;

    printf("enter number of character: ");

    scanf("%d",&n);

    str=(char*)malloc(n*sizeof(char));

    printf("enter a string: ");

    scanf("%s",str);

    printf("result: %s\n",vowel_check(str));

    return 0;

}
