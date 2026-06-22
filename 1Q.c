#include<stdio.h>
#include<limits.h>

int main()
{
int n;

printf("Enter n: ");
scanf("%d",&n);

int dp[n+1];

dp[0]=0;

for(int i=1;i<=n;i++)
{
dp[i]=INT_MAX;

for(int j=1;j*j<=i;j++)
{
if(dp[i-j*j]+1<dp[i])
dp[i]=dp[i-j*j]+1;
}
}

printf("Min Count = %d",dp[n]);
Input
Enter n: 12
Output
Min Count = 3

return 0;
}
