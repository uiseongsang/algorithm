/*퀵 정렬(Quick sort) 
 * 다음 숫자들을 오름차순으로 정렬하는 프로그램을 작성하세요
 * To make the next unsorted numbers to sorted numbers like an ascending order
 * ex) 1 10 5 8 7 6 4 3 2 9 --> 1 2 3 4 5 6 7 8 9 10
 *
 * Quick sort is faster than Slective, Bubble, Insertion sort.
 *
 * The main concept for Quick sort is one big problem divide two small problems
 * Let say easier that particular value is made standard(Pivot). Atfer large number and small number switch, array is divided half.
 *
 * Worst case performance: O(N^2)
 * Best case performance: O(n log n)
 * Average case performance: O(n log n)
 */

#include <stdio.h>

int number = 10;
int data[10] = {10, 1, 5, 8, 7, 6, 4, 3, 2, 9};

void quickSort(int *data, int start, int end)
{
	if(start >= end) // only one element
	{
		return;
	}
	
	int key = start; // key is the first element
	int i = start + 1;
	int j = end;
	int temp;
	
	while(i <= j ) // repeat until they are cross
	{
		while(data[i] <= data[key]) // repeat until key meet larger than key value 
		{
			i++;
		}
		while(data[j] >= data[key] && j > start) // repeat until key meet smaller than key value
		{
			j--;
		}
		if(i > j) // key value and j(end) are switched wehn they are crossed
		{
			temp = data[j];
			data[j] = data[key];
			data[key] = temp;
		}
		else
		{
			temp = data[j];
			data[j] = data[i];
			data[i] = temp;
			
		}
	}
	
	// recursion 
	quickSort(data, start, j - 1);
	quickSort(data, j + 1, end);
	
}

int main(void)
{

quickSort(data, 0, number - 1);
for(int i = 0; i < number; i++)
{
	printf("%d ", data[i]);
}
	
}
