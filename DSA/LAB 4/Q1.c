#include <stdio.h>
#include <stdlib.h>
#include<time.h>

int comprcms = 0;
int comprcqs=0;
int wrtms=0;
int wrtqs=0; 

void merge(int array[], int left, int mid, int right){
    int n1 = mid - left + 1;
    int n2 = right - mid;
 
    int subar1[n1];
    int subar2[n2];
 
    for (int i = 0; i < n1; i++)
        subar1[i] = array[left + i];
    for (int j = 0; j < n2; j++)
        subar2[j] = array[mid + 1 + j];
    wrtms=n1+n2;    
 
    int isubar1= 0;
    int isubar2= 0;
    int ima = left;
 
   
    while ((isubar1 < n1) && (isubar2 < n2)) {
        comprcms++;
        if (subar1[isubar1] <= subar2[isubar2]) {
            array[ima] = subar1[isubar1];
            isubar1++;
            comprcms++;
            wrtms++;
        }
        else {
            array[ima] = subar2[isubar2];
            isubar2++;
            comprcms++;
            wrtms++;
        }
        ima++;
    }
    while (isubar1 < n1) {
        array[ima] = subar1[isubar1];
        isubar1++;
        ima++;
        comprcms++;
        wrtms++;
    }
    while (isubar2 < n2) {
        array[ima] = subar2[isubar2];
        isubar2++;
        ima++;
        comprcms++;
        wrtms++;
    }
   
}
void merge_sort(int array[], int begin, int end){
if (begin >= end){
    comprcms++;
    return;}
    auto mid = begin + (end - begin) / 2;
    merge_sort(array, begin, mid);
    merge_sort(array, mid + 1, end);
    merge(array, begin, mid, end);
}
void swap(int *a,int *b){
    int t=*a;
    *a=*b;
    *b=t;
}
int partition(int array[], int low, int high){
    int pivot = array[high]; 
    int i = (low - 1);
  
    for (int j = low; j <= high - 1; j++) 
    { 
        comprcqs++;
        if (array[j] < pivot) 
        { 
            comprcqs++;
            i++; 
            swap(&array[i], &array[j]);
            wrtqs+=2; 
        } 
    } 
    swap(&array[i + 1], &array[high]); 
    wrtqs+=2;
    return (i + 1);
 
}
void quick_sort(int array[], int low, int high){
    if (low < high) 
    { 
        comprcqs++;
        int pi = partition(array, low, high); 
        quick_sort(array, low, pi - 1); 
        quick_sort(array, pi + 1, high); 
    }
}
int *create_copy(int *arr, int arr_size){
    int *copy = (int *)malloc(sizeof(int)*arr_size);
    if(copy == NULL){
        printf("array copy not allocated\n");
        exit(0);
    }   
    for(int i = 0; i < arr_size; i++)
        copy[i] = arr[i];
   
    return copy;
}
void print_array(int *arr, int arr_size){
    printf(" Array elements are:\t");
    for(int i = 0; i < arr_size; i++)
        printf("%d  ", arr[i]);
    printf("\n");
}
void get_large_input(int *arr, int arr_size){
    for(int i = 0; i < arr_size; i++){
        arr[i] = rand()%1000 + 1;
    }
}
void get_small_input(int *arr, int arr_size){
    int val;
    printf("enter array elements\n");
    for(int i = 0; i < arr_size; i++){
        scanf("%d", &val);
        arr[i] = val;
    }
}
 

void get_input(int *arr, int arr_size,int a){
    if (a==1)
    get_small_input(arr, arr_size);
    else
    get_large_input(arr, arr_size);
}
 
int main(){
    srand(time(NULL));
    int arr_size;
    printf("enter the size of the array\n");
    scanf("%d", &arr_size);
    int *arr = (int *)malloc(arr_size * sizeof(int));
    if(arr == NULL){
        printf("memory allocation failed\n");
        exit(0);
    }
    get_input(arr, arr_size,1); 
    printf("USING SMALL INPUT FUNCTION \n"); 
    print_array(arr, arr_size);
    int *copy1 = create_copy(arr, arr_size);
    double time_spentqs = 0.0;
    clock_t begin = clock();
    quick_sort(copy1,0,arr_size-1);
    clock_t end = clock();
    time_spentqs += (double)(end - begin) / CLOCKS_PER_SEC;
    printf(" After quick sort ");
    print_array(copy1, arr_size);
    int *copy2 = create_copy(arr, arr_size);
    double time_spentms = 0.0;
    begin = clock();
    merge_sort(copy2,0,arr_size-1);
    printf(" After merge sort ");
    end = clock();
    time_spentms += (double)(end - begin) / CLOCKS_PER_SEC;
    print_array(copy1, arr_size);
    printf(" Running time of quick sort:%.9lf",time_spentqs);
    printf("\n Running time of merge sort:%.9lf",time_spentms);
    printf("\n Number of comparisions made in quick sort:%d",comprcqs);
    printf("\n Number of comparisions made in merge sort:%d",comprcms);
    printf("\n Number of writes made in quick sort:%d",wrtqs);
    printf("\n Number of writes made in merge sort:%d",wrtms);

    int c=0;
    for(int i=0;i<arr_size;i++){
        if(arr[i]>1000){
            c++;
            break;
        }
    }
    if(c!=0){
    get_input(arr, arr_size,2);
    printf("\nUSING LARGE INPUT FUNCTION \n");
    int comprcms = 0;
    comprcqs=0;
    wrtms=0;
    wrtqs=0; 
    //print_array(arr, arr_size);
    int *copyy1 = create_copy(arr, arr_size);
    int *copyy2 = create_copy(arr, arr_size);
    print_array(copyy1, arr_size);
    time_spentqs = 0.0;
    begin = clock();
    quick_sort(copyy1,0,arr_size-1);
    end = clock();
    time_spentqs += (double)(end - begin) / CLOCKS_PER_SEC;
    printf(" After quick sort ");
    print_array(copyy1, arr_size);
    time_spentms = 0.0;
    begin = clock();
    merge_sort(copyy2,0,arr_size-1);
    printf(" After merge sort ");
    end = clock();
    time_spentms += (double)(end - begin) / CLOCKS_PER_SEC;
    print_array(copyy2, arr_size);
    printf(" Running time of quick sort:%.9lf",time_spentqs);
    printf("\n Running time of merge sort:%.9lf",time_spentms);
    printf("\n Number of comparisions made in quick sort:%d",comprcqs);
    printf("\n Number of comparisions made in merge sort:%d",comprcms);
    printf("\n Number of writes made in quick sort:%d",wrtqs);
    printf("\n Number of writes made in merge sort:%d",wrtms);
    }
      
    /* Tasks to do
   
        1. Complete quick sort and merge sort code.
        2. Compare them on the basis of running time, number of comparisons, and number of writes.
 
        3. After evaluaing the random input, check for the sensitivity of input.
    */
    return 0;
}

