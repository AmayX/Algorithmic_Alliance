#include <stdio.h>
#include <time.h>

void fun()
{
    int sum=0;
    for (int i=1;i<=1000;i++)
    sum+=i;
    printf("%d\n",sum);
}

int main()
{
	clock_t t;
	t = clock();
    fun();
	t = clock() - t;
	double time_taken = ((double)t)/CLOCKS_PER_SEC;
	printf("Time Taken: %lf microseconds", 1000*time_taken);
	return 0;
}
