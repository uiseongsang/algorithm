/*삽입 정렬(Insertion sort) 
 * 다음 숫자들을 오름차순으로 정렬하는 프로그램을 작성하세요
 * To make the next unsorted numbers to sorted numbers like an ascending order
 * ex) 1 10 5 8 7 6 4 3 2 9 --> 1 2 3 4 5 6 7 8 9 10
 *
 * The main concept for Insertion sort is also O(N^2) time complexity same as Slective and Bubble sort. 
 *
 * Insertion sort slove problem like each number insert appropriate locations.
 * The difference of Slective and Bubble sort is only switch location when it needs.
 * In this reason, Insertion sort is fater than Slective and Bubble sort. 
 * 
 * Worst case performance: O(N^2)
 * Best case performance: O(N)
 * Average case performance: O(N^2)
 */

#include <stdio.h>

int main(void)
{
int i, j, temp;	
int array[10] = {1, 10, 5, 8, 7, 6, 4, 3, 2, 9};

// O(N) * O(N) = O(N^2)
for(i = 0; i < 9; i++) // O(N)
{
	j = i; // It is for inserting numbers in appropriate locations
	
	while(array[j] > array[j + 1]) // O(N)
	{
		//swap
		temp = array[j];
		array[j] = array[j+1];
		array[j+1] = temp;
		j--;
	}
}

//출력
for(j = 0; j < 10; j++)
{
	printf("%d ", array[j]);
 } 

	return 0;
}
