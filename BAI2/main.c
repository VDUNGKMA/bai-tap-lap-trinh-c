#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n,count = 0;
    printf("nhap n nho hon 2 ty: ");
    scanf("%d", &n);
    for (int m = 13; m <= n; m++)
    {
        int k = m;
        int max = k % 10, min = k % 10;
			while (k != 0)
        {
            if (min > k % 10)
                min = k % 10;
            if (max < k % 10)
                max = k % 10;
				k /= 10;
        }
        if ((max - min) == 2)
        {
		printf("%d\n", m);
		count++;
        }
    }
    printf("co %d so", count);
    return 0;
}
