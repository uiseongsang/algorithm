/*���� ����(Bubble sort) 
 * ���� ���ڵ��� ������������ �����ϴ� ���α׷��� �ۼ��ϼ���
 * To make the next unsorted numbers to sorted numbers like an ascending order
 * ex) 1 10 5 8 7 6 4 3 2 9 --> 1 2 3 4 5 6 7 8 9 10
 *
 * The main concept for Bubble sort is to compare with the next number
 * smaller number will be moved left 
 *
 * The bubble sort is the easiest implement and the most ineffective sort
 *
 *  Let's check the compartive operation for the example of Bubble sort
 * 10 + 9 + 8 + 7 ... + 1
 * N * (N+1) / 2
 * O(N^2)
 * The Big O is the same as Selective sort
 * But Bubble sort take more time than Selective sort
 * Becasue the Bubble sort has so many comparison number than Selective sort.
 *
 * Worst case performance: O(N^2)
 * Best case performance: O(N)
 * Average case performance: O(N^2)
 */

#include <stdio.h>

int main(void)
{
	int i,j,temp;
	
	int array[10] = {10, 1, 5, 8, 7, 6, 4, 3, 2, 9}	;
	
	// O(N) * O(N) = O(N^2)
	for(i = 0; i < 10 ; i++) // O(N)
	{
		for(j = 0; j < 9 - i; j++) // O(N)
		{
			if(array[j] > array[j+1]) // compare with left number and right number
			{
				// swap
				temp = array[j];
				array[j] = array[j+1];
				array[j+1] = temp;
			}
		}
	}
	
	// print output
	for(i = 0; i< 10; i++)
	{
		printf("%d ", array[i]);
	}
}
