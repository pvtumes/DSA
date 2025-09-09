// #include <iostream>
// using namespace std;
// void merge(int *arr, int start, int end)
// {
//     int mid = start + (end - start) / 2;
//     int len1 = mid - start + 1;
//     int len2 = end - mid;

//     int *first = new int[len1];
//     int *second = new int[len2];
//     int main_array_index = start;
//     for (int i = 0; i < len1; i++)
//     {
//         first[i] = arr[main_array_index++];
//     }
//     for (int i = 0; i < len2; i++)
//     {
//         second[i] = arr[main_array_index++];
//     }
//     int index1 = 0;
//     int index2 = 0;
//     main_array_index = start;
//     while (index1 < len1 && index2 < len2)
//     {
//         if (first[index1] <= second[index2])
//         {
//             arr[main_array_index++] = first[index1++];
//         }
//         else
//         {
//             arr[main_array_index++] = second[index2++];
//         }
//     }
//     while (index1 < len1)
//     {
//         arr[main_array_index++] = first[index1++];
//     }
//     while (index2 < len2)
//     {
//         arr[main_array_index++] = second[index2++];
//     }
//     delete[] first;
//     delete[] second;
// }

// void merge_sort(int arr[], int start, int end)
// {
//     int mid = start + (end - start) / 2;
//     if (start >= end)
//     {
//         return;
//     }
//     merge_sort(arr, start, mid);
//     merge_sort(arr, mid + 1, end);
//     merge(arr, start, end);
// }
// int main()
// {
//     int arr[10] = {1, 5, 9, 4, 8, 7, 2, 6, 3, 0};
//     int size = 10;
//     merge_sort(arr, 0, 9);
//     for (int i = 0; i < size; i++)
//     {
//         cout << arr[i] << " ";
//     }

//     return 0;
// }





#include<iostream>
using namespace std;

void merge(int arr[],int start,int end){
    int mid=start+(end-start)/2;

    int len1=mid-start+1;
    int len2=end-mid;

    int * arr1= new int[len1];
    int *arr2=new int[len2];
    int k=start;


    for(int i=0;i<len1;i++){
        arr1[i]=arr[k++];

    }

    for (int i = 0; i < len2; i++)
    {
        arr2[i] = arr[k++];
    }

    int index1=0;
    int index2=0;
     k=start;

    while(index1<len1 && index2<len2){
        if(arr1[index1]<=arr2[index2]){
            arr[k++]=arr1[index1++];
        }
        else{
            arr[k++] = arr2[index2++];
        }
    }

    while (index1 < len1 )
    {
        arr[k++] = arr1[index1++];
    }

    while (index2 < len2)
    {
        arr[k++] = arr2[index2++];
    }
    delete []arr1;
    delete []arr2;
}

void merge_sort(int arr[],int start,int end){
    if(start>=end){
        return;
    }
    int mid=start+(end-start)/2;
    //short the left side
    merge_sort(arr,start,mid);
    //short the right side
    merge_sort(arr, mid+1, end);
    // short the right side
    merge(arr,start,end);


}
int main(){

    int arr[5]={1,4,0,3,5};
    merge_sort(arr,0,4);

    for(int i=0;i<5;i++){
        cout<<arr[i]<<"->";
    }


    return 0;
}