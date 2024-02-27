	#include<stdio.h>
	#include<assert.h>
	char* my_strncat(char* arr, const char* arr2, int n)
	{
		assert(arr && arr2);
		char * rel= arr;
		while (*arr)
		{
			arr++;
		}
		while (n > 0 && (*arr++ = *arr2++))
		{
			n--;
		}
		
		if(n==0)
			*arr = '\0';
		return rel;
	}
	int main()
	{
		char arr[112] = "aavgeee\0ghdseeeuuueds";
		char arr2[] = "abcd";
		//int n = 0;
		//scanf_s("%d", &n);
		my_strncat(arr, arr2,5);
		printf("%s", arr);
		return 0;
	}