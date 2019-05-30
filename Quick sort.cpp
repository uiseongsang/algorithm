/*�� ����(Quick sort) 
 * ���� ���ڵ��� ������������ �����ϴ� ���α׷��� �ۼ��ϼ���
 * To make the next unsorted numbers to sorted numbers like an ascending order
 * ex) 1 10 5 8 7 6 4 3 2 9 --> 1 2 3 4 5 6 7 8 9 10
 *
 * Quick sort is faster than Slective, Bubble, Insertion sort.
 *
 * The main concept for Quick sort is one big problem divide two small problems
 * Let say easier that particular value is made standard(Pivot). Atfer large number and small number switch, array is divided half.
 *
 * The Quick sort is 
 *
 *
 * Worst case performance: O(N^2)
 * Best case performance: O(n log n)
 * Average case performance: O(n log n)
 */

#include <stdio.h>

int number = 1-
int data[10] = {10, 1, 5, 8, 7, 6, 4, 3, 2, 9}	;

void quickSort(int *data, int start, int end)
{
	if(start >= end) // only one element
	{
		return;
	}
	
	int key = start; // key is the first element
	int i = start + 1;
	int k = end;
	int temp;
	
	while(i <= j ) // repeat until they are cross
	{
		while(data[i] <= data[key]) // repeat until meet key
		{
			i++;
		}
		while(data[j] >= data[key && j > start]) //
	}
	
}

void main(void)
{


	
}