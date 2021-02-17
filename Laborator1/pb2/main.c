#include <stdio.h>
#include <stdlib.h>

int transformare(char* s)
{
    int n=0,i;
    for(i=0; s[i]!='\0'; ++i)
        if(s[i]>='0' && s[i]<='9')
            n=n*10+s[i]-'0';
    return n;
}

int main()
{
    FILE *fis;
    int s=0;
    char rand[20];
    fis = fopen("in.txt","r");

    if (fis == NULL) perror ("Error opening file");
    else
        while(fgets(rand,sizeof(rand),fis)!=NULL)
        {
            s+=transformare(rand);
        }

    printf("%d",s);
    fclose(fis);
    return 0;
}
