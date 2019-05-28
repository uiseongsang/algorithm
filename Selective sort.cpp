/*선택 정렬(selection sort) 
 * 다음 숫자들을 오름차순으로 정렬하는 프로그램을 작성하세요
 * To make the next unsorted numbers to sorted numbers like an ascending order
 * ex) 1 10 5 8 7 6 4 3 2 9 --> 1 2 3 4 5 6 7 8 9 10
 * The main point is the smallest number in this selection sort
 * At first, the smallest number will put at the beginning.
 */

/* selection sort is not that effective, but it is easy to imprement.
 * why slection sort is not effective than other sort?
 * 
 * Let's check the compartive operation for the example of selection sort
 * 10 + 9 + 8 ... + 1
 * 10 * (10 + 1) / 2 = 55
 * N * (N + 1 ) / 2   
 * N * N  <== why?  Computer ignore +1 and / 2 because those are not that big meaning for computer
 * Therefore, to write as BIg O notation
 * "O(N^2)" ==> time complexity
 */ 
#include <stdio.h>

int main(void)
{
	int i, j, min, index, temp;

	int array[10] = {10, 1, 5, 8, 7, 6, 4, 3, 2, 9}	;
	for(i = 0; i < 10; i++)
	{
		min = 9999; // just big random number
		for(j = i; j < 10; j++)
		{
			if(min > array[j])
			{
				min = array[j];
				index = j;
			}
		}
		
		// swap
		temp = array[i];
		array[i] = array[index];
		array[index] = temp;
		
	}
	
	// print 
	for(i = 0; i < 10; i++)
	{
		printf("%d ", array[i]);
	}
	return 0;
}
