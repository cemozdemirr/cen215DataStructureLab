		#include<stdio.h>
		#include <stdlib.h>
		#include <string.h>
		#include <time.h>
		void swapint(int* a, int* b);
		void swapchar(char* a, char* b);

		//Print function for my number.
		void printfunc(int arr[], int size) {
			for (int i = 0; i < size; i++)
				printf("%d\t", arr[i]);
		}		
		//Quick sort algorithm for my number and name.	
		int partition(int arr[], int low, int high)
		{
			int pivot = arr[high];
			int i = (low - 1);

			for (int j = low; j <= high - 1; j++)
			{

				if (arr[j] <= pivot)
				{
					i++;
					swapint(&arr[i], &arr[j]);
				}
			}
			swapint(&arr[i + 1], &arr[high]);

			return (i + 1);
		}
		void quicksort(int arr[], int low, int high)
		{
			if (low < high)
			{
				int pi = partition(arr, low, high);

				quicksort(arr, low, pi - 1);
				quicksort(arr, pi + 1, high);
			}
		}
		int partitionchar(char arr[], int low, int high)
		{
			int pivot = arr[high];
			int i = (low - 1);

			for (int j = low; j <= high - 1; j++)
			{

				if (arr[j] <= pivot)
				{
					i++;
					swapchar(&arr[i], &arr[j]);
				}
			}
			swapchar(&arr[i + 1], &arr[high]);

			return (i + 1);
		}
		void quicksortchar(char arr[], int low, int high)
		{
			if (low < high)
			{
				int pi = partitionchar(arr, low, high);

				quicksortchar(arr, low, pi - 1);
				quicksortchar(arr, pi + 1, high);
			}
		}
		// Heap sort algorithm for my number and name.
		void heapify(int arr[], int n, int i) {
			int max = i;
			int leftChild = 2 * i + 1;
			int rightChild = 2 * i + 2;

			if (leftChild < n && arr[leftChild] > arr[max])
				max = leftChild;

			if (rightChild < n && arr[rightChild] > arr[max])
				max = rightChild;

			if (max != i) {
				swapint(&arr[i], &arr[max]);
				heapify(arr, n, max);
			}
		}

		void heapsort(int arr[], int n) {
			for (int i = n / 2 - 1; i >= 0; i--)
				heapify(arr, n, i);

			for (int i = n - 1; i >= 0; i--) {
				swapint(&arr[0], &arr[i]);

				heapify(arr, i, 0);
			}
		}
		void heapifychar(char arr[], int n, int i) {
			int max = i;
			int leftChild = 2 * i + 1;
			int rightChild = 2 * i + 2;

			if (leftChild < n && arr[leftChild] > arr[max])
				max = leftChild;

			if (rightChild < n && arr[rightChild] > arr[max])
				max = rightChild;

			if (max != i) {
				swapchar(&arr[i], &arr[max]);
				heapifychar(arr, n, max);
			}
		}

		void heapsortchar(char arr[], int n) {
			for (int i = n / 2 - 1; i >= 0; i--)
				heapifychar(arr, n, i);

			for (int i = n - 1; i >= 0; i--) {
				swapchar(&arr[0], &arr[i]);

				heapifychar(arr, i, 0);
			}
		}
		//Selection sort algortihm for my number and name.
		void selectionsort(int arr[], int size) {
			int i, j, min;
			for (i = 0; i < size - 1; i++) {
				min = i;
				for (j = i + 1; j < size; j++) {
					if (arr[j] < arr[min])
						min = j;
				}
				swapint(&arr[min], &arr[i]);
			}
		}
		//Selection sort algortihm for my number and name.
		void selectionsort(int arr[], int size) {
			int i, j, min;
			for (i = 0; i < size - 1; i++) {
				min = i;
				for (j = i + 1; j < size; j++) {
					if (arr[j] < arr[min])
						min = j;
				}
				swapint(&arr[min], &arr[i]);
			}
		}
		void selectionsortch(char ch[], int size) {
			int i, j, temp, min;
			for (i = 0; i < size - 1; i++) {
				min = i;
				for (j = i + 1; j < size; j++) {
					if (ch[j] < ch[min])
						min = j;
				}
				swapchar(&ch[min], &ch[i]);
			}
			printf("\n%s\n", ch);
		}
		// Bubble sort algorithm for my number and name.
		void bubblesort(int arr[], int size) {
			int i, j;
			for (i = 0; i < size; i++) {
				for (j = 1; j < size - i; j++) {
					if (arr[j - 1] > arr[j])
						swapint(&arr[j], &arr[j - 1]);
				}
			}
		}
		void bubblesortch(char ch[], int size) {
			int i, j;
			for (i = 0; i < size; i++) {
				for (j = 1; j < size - i; j++) {
					if (ch[j - 1] > ch[j])
						swapchar(&ch[j], &ch[j - 1]);
    			}
			}
			printf("\n%s\n", ch);
		}
		//Insertion sort algorithm for my number and name.
		void insertionsort(int arr[], int size) {
			int i, j, value;
			for (i = 1; i < size; i++) {
				value = arr[i];
				j = i - 1;
				while (arr[j] > value&& j >= 0) {
					arr[j + 1] = arr[j];
					j--;
				}
				arr[j + 1] = value;
			}
		}
		void insertionsortch(char ch[], int size) {
			int i, j; char value;
			for (i = 1; i < size; i++) {
				value = ch[i];
				j = i - 1;
				while (ch[j] > value&& j >= 0) {
					ch[j + 1] = ch[j];
					j--;
				}
				ch[j + 1] = value;
			}
			printf("\n%s\n", ch);
		}
		//Merge sort algortihm for my number and name.
		void merge(int arr[], int p, int q, int r)
		{
			int i, j, k, n1, n2;
			n1 = q-p + 1;
			n2 = r - q;
			int left[n1],right[n2];
			for (i = 0; i < n1; i++)
				left[i] = arr[p + i];
			for (j = 0; j < n2; j++)
				right[j] = arr[q + 1 + j];
			i = 0;
			j = 0;
			k = p;
			while (i < n1 && j < n2) {
				if (left[i] <= right[j]) {
					arr[k] = left[i];
					i++;
				}
				else {
					arr[k] = right[j];
					j++;
				}
				k++;
			}
			while (i < n1) {
				arr[k] = left[i];
				i++;
				k++;
			}
			while (j < n2) {
				arr[k] = right[j];
				j++;
				k++;
			}
		}

		void mergesort(int arr[], int l, int r)
		{
			if (l < r) {
				int m = l + (r - l) / 2;

				mergesort(arr, l, m);
				mergesort(arr, m + 1, r);

				merge(arr, l, m, r);
			}
		}
		void mergech(char arr[], int p, int q, int r)
		{
			int i, j, k, n1, n2;
			n1 = q-p + 1;
			n2 = r - q;

			int left[n1], right[n2];

			for (i = 0; i < n1; i++)
				left[i] = arr[p + i];
			for (j = 0; j < n2; j++)
				right[j] = arr[q + 1 + j];

			i = 0;
			j = 0;
			k = p;

			while (i < n1 && j < n2) {
				if (left[i] <= right[j]) {
					arr[k] = left[i];
					i++;
				}
				else {
					arr[k] = right[j];
					j++;
				}
				k++;
			}

			while (i < n1) {
				arr[k] = left[i];
				i++;
				k++;
			}
			while (j < n2) {
				arr[k] = right[j];
				j++;
				k++;
			}
		}

		void mergesortch(char arr[], int l, int r)
		{
			if (l < r) {
				int m = l + (r - l) / 2;
				mergesortch(arr, l, m);
				mergesortch(arr, m + 1, r);
				mergech(arr, l, m, r);
			}
		}
		//Swap function for name.
		void swapchar(char* a, char* b) {
			char temp = *a;
			*a = *b;
			*b = temp;
		}
		//Swap function for number.
		void swapint(int* a, int* b) {
			int temp = *a;
			*a = *b;
			*b = temp;
		}
		int main() {
			//The values which are my name,my number and size of them:
			int mynum[] = { 2,0,1,9,5,5,5,4,5,5 };
			char myname[] = "cemozdemir";
			int sizename = strlen(myname);
			int sizenumber = sizeof(mynum) / sizeof(mynum[2]);
		
			clock_t passedtime;
			passedtime = clock();

			//Selection:
			selectionsort(mynum, sizenumber);
			passedtime = clock() - passedtime;
			printf("Selection sort for number and name:\n");
			printf("The execute time for number:%f\n",((double)(passedtime))/CLOCKS_PER_SEC);
			printfunc(mynum, sizenumber);
			passedtime = clock() - passedtime;
			selectionsortch(myname, sizename);
			printf("The execute time for name:%f\n", ((double)(passedtime)) / CLOCKS_PER_SEC);
			//Bubble:
			bubblesort(mynum, sizenumber);
			passedtime = clock() - passedtime;
			printf("Bubble sort for number and name:\n");
			printf("The execute time for number:%f\n", ((double)(passedtime)) / CLOCKS_PER_SEC);
			printfunc(mynum, sizenumber);
			bubblesortch(myname, sizename);
			printf("The execute time for name:%f\n", ((double)(passedtime)) / CLOCKS_PER_SEC);
			//Insertion:
			insertionsort(mynum, sizenumber);
			passedtime = clock() - passedtime;
			printf("Insertion sort for number and name:\n");
			printf("The execute time for number:%f\n", ((double)(passedtime)) / CLOCKS_PER_SEC);
			printfunc(mynum, sizenumber);
			insertionsortch(myname, sizename);
			printf("The execute time for name:%f\n", ((double)(passedtime)) / CLOCKS_PER_SEC);
			//Merge:
			mergesort(mynum, 0, sizenumber - 1);
			passedtime = clock() - passedtime;
			printf("Merge sort for number and name:\n");
			printf("The execute time for number:%f\n", ((double)(passedtime)) / CLOCKS_PER_SEC);
			printfunc(mynum, sizenumber);
			mergesortch(myname, 0, sizenumber - 1);
			printf("The execute time for name:%f\n", ((double)(passedtime)) / CLOCKS_PER_SEC);
			printf("%s", myname);
			//Quick:
			quicksort(mynum, 0, sizenumber - 1);
			passedtime = clock() - passedtime;
			printf("Quick sort for number and name:\n");
			quicksortchar(myname, 0, sizenumber - 1);
			printf("The execute time for number:%f\n", ((double)(passedtime)) / CLOCKS_PER_SEC);
			printf("The execute time for name:%f\n", ((double)(passedtime)) / CLOCKS_PER_SEC);
			printf("%s\n", myname);
			//Heap:
			heapsort(mynum, sizenumber);
			passedtime = clock() - passedtime;
			printf("Heap sort for number and name:\n");
			printf("The execute time for number:%f\n", ((double)(passedtime)) / CLOCKS_PER_SEC);
			printfunc(mynum, sizenumber);
			heapsortchar(myname, sizename);
			printf("The execute time for name:%f\n", ((double)(passedtime)) / CLOCKS_PER_SEC);
			printf("%s\n", myname);


			return 0;
		}