#include<stdio.h>
#include<string.h>
void abc(char *);
void abc(char *skr)
{
	int n,i=0,j;
	char t;
	n=strlen(skr);
	j=n-1;
	while(i<j)
	{
		t=skr[i];
		skr[i]=skr[j];
		skr[j]=t;
		--j;
		++i;
	}
}
int main(void)
{
	char x;
	int i=0;
	char a[1000];
	while((x=getchar())!='\n')
    {
        a[i]=x;
        ++i;
    }
	abc(a);
	printf("%s\n",a);
	return 0;

}