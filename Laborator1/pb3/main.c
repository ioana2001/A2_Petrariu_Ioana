#include <stdio.h>
#include <stdlib.h>

void interschimbare(char a[],char b[])
{
    char aux[100];
    strcpy(aux,a);
    strcpy(a,b);
    strcpy(b,aux);
}

int main()
{
    char a[20][20],s[200];
    int i,j;
    fgets(s, sizeof(s), stdin);

    char *p=strtok(s," ");
    int k=0;
    while(p)
    {
        k++;
        strcpy(a[k],p);
        //printf("%d  %s\n",k,a[k]);
        p=strtok(NULL," ");
    }
    k--;

    for(i=1; i<k; i++)
        for(j=i+1; j<=k; j++)
            if(strlen(a[i])<strlen(a[j]) || strlen(a[i])==strlen(a[j]) && strcmp(a[i],a[j]))
                interschimbare(a[i],a[j]);

    for(i=1; i<=k; i++)
        printf("%s",a[k]);

    return 0;
}
