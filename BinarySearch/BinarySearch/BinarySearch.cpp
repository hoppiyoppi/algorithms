#include "BinarySearch.h"

static int BinarySearch(int target, int numbers[], int length)
{
	int* a = NULL;
	int count = 0;

	std::cout << length;
	if (numbers[length / 2] == target)
	{
		std::cout << "Found " << numbers[length / 2];
		delete [] a;
		a = NULL;
		return 0;
	}
	else if (numbers[length / 2] < target)
	{
		std::cout << "less than target";
		a = new int[length- (length / 2)];
		for (int i = 0; i < length-(length/2); i++)
		{
			a[i] = numbers[(length/2)+i];
			count++;
		}
		length = count;
	}
	else if (numbers[length / 2] > target)
	{
		std::cout << "greater than target";
		a = new int[length - (length / 2)];
		for (int i = 0; i < length - (length / 2); i++)
		{
			a[i] = numbers[i];
			count++;
		}
		length = count;
	}
	BinarySearch(target, a,length);
}

int main()
{
	int target = 15;
	int numbers[10000];
	for (int i = 0; i <= 9999; i++)
	{
		numbers[i] = i;
	}
	int length = sizeof(numbers) / sizeof(int);
	BinarySearch(target, numbers, length);
	return 0;
}
