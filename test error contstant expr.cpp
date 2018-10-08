#include<stdio.h>

void int main()
{
	int n, i, j, c;
	scanf("%d", &n);
	int arr[n], sort[n];
	
	for(i = 0; i<n; i++)
	{
		scanf("%d", &arr[i]);
	}
	
	for(j = 0; j < n; j++)
	{
	
		int min = arr[0], max = arr[0];
	
		for(i = 0; i < n; i++)
		{
			if(arr[i] > max)
			{
				max = arr[i];	// MAX value
			}
		}
		
	
		for(i = 0; i<n; i++)
		{
			if(arr[i] < min)
			{
				min = arr[i];	// MIN value
				c = i;
			}
		}
		
		
		sort[j] =  min;
		arr[c] = max;
			
	}
	
	for(i = 0; i<n; i++)
	{
		printf("%d\t", sort[i]);
	}     
	
	return 0;
}
