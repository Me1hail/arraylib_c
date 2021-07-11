/* arr.h
* Михаил Main - Habr
* The C None Standard Library "arr.h" header.
*/
#pragma once
#ifndef ARR_H
#define ARR_H

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>


#define ALLOC_LEN_OF_STR(_str) (sizeof(_str) / sizeof(char))/*используйте asprintf(&str,"%s","string") из stdio.h и define _GNU_SOURCE
use asprintf(&str,"%s","string") from stdio.h and define _GNU_SOURCE , статья на хабре https://habr.com/ru/post/326108/*/
#define LEN_OF_STR(_str) (sizeof(_str) / sizeof(char)-1)//пожалуйста используйте strlen из string.h / please use strlen from string.h
#define SIZE_OF_ARRAY(_array) (sizeof(_array) / sizeof(_array[0]))//измерение длины массива / length of array
#define get_max(arr) (get_max_args(SIZE_OF_ARRAY(arr),arr))//поиск максимального значения / finding max number in array
#define get_min(arr) (get_min_args(SIZE_OF_ARRAY(arr),arr))//поиск минимального /  finding min number in array
#define get_array(arr) (get_array_args(SIZE_OF_ARRAY(arr),arr)//вывод массива на консоль  / print array 
#define get_arr_pointer(arr, n) (get_arr_pointer_args(n,SIZE_OF_ARRAY(arr),arr))/*указатель на заданое число в массиве 
pointer to number in array*/

__forceinline int get_max_args(int n,int arr[])
{

	int max = arr[0];
	
    for (int i = 1; i <n; i++) 
	{
        if (arr[i] > max) {
            max = arr[i];
        }
    }
	return max;
}
__forceinline int get_min_args(int n , int arr[])
{
	int min = arr[0];
	for (int i = 0; i < n; i++)
	{		
        if (arr[i] < min) 
		{
            min = arr[i];
        }
    }
	return min;
}

__forceinline int get_array_args(int n , int arr[])
{	
	for (int i = 0; i < n; i++)
	{
		printf("%i\n",arr[i]);
    }
	return EXIT_SUCCESS;
}

__forceinline int *get_arr_pointer_args(int n ,int el,int arr[])
 {
	 int *id;
	
	 for(int i; i < n; i++)
	 {
		 if(el==arr[i])
		 {
			 id = &arr[i];
		 }
		
	 }
	assert(id!=NULL);
	return id;
 }
 
 
__forceinline int *get_pointer(int n)
 {
	 int *pn;
	 return pn=&n;
 }
 __forceinline int Del_el (int index,int arr[])
 {
	 int s  =  SIZE_OF_ARRAY(arr);
	 int new_arr[s];
	 for(int i = 0; i < SIZE_OF_ARRAY(arr);i++)
	 {

		 if(i== index)
		 {
			 i++;
		 }
	 }
 }


#endif /*ARR_H*/
