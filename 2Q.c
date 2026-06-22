#include<stdio.h>

int main()
{
int n;

printf("Enter number of characters: ");
scanf("%d",&n);

int freq[50];

printf("Enter frequencies:\n");

for(int i=0;i<n;i++)
scanf("%d",&freq[i]);

int cost=0;


for(int i=0;i<n;i++)
{
for(int j=i+1;j<n;j++)
{
if(freq[i]>freq[j])
{
int temp=freq[i];
freq[i]=freq[j];
freq[j]=temp;
}
}
}


while(n>1)
{

int sum=freq[0]+freq[1];

cost+=sum;


for(int i=2;i<n;i++)
freq[i-2]=freq[i];


freq[n-2]=sum;

n--;


for(int i=0;i<n;i++)
{
for(int j=i+1;j<n;j++)
{
if(freq[i]>freq[j])
{
int temp=freq[i];
freq[i]=freq[j];
freq[j]=temp;
}
}
}

}

printf("Minimum Cost = %d",cost);

return 0;
}
Input
Enter number of characters: 5

Enter frequencies:
5
9
12
13
16
Output
Minimum Cost = 224
