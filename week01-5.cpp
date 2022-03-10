#include <stdio.h>
#include <string.h>
char line[1000];
int main()
{
	int sum=0;
	while(scanf("%s",line)==i)
	{
		int N=strlen(line);
		int ans=0;
		for(int i=0;i<N;i++)
		{
			if(line[i]=='2') ans++;
		}
		printf("%d\n",ans);
		sum+=ans;
	}
	printf("Total: %d\n",sum);
	return 0;
}
