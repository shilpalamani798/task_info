#include<stdio.h>
int main()
{
    char str[50];
    int j=0;
    printf("enter a line: ");
    scanf("%[^\n]",str);
   for(int i=0;str[i]!='\0';i++)
   {
      if(str[i]!=' ')
        str[j++]=str[i];
      else if(j>0 && str[j-1]!=' ')
        str[j++]=' ';
        
   }
   if(str[j-1]==' ')
      str[j-1]='\0';
      else
        str[j]='\0';
        
  
       printf("%s",str);
   
    return 0;
}
