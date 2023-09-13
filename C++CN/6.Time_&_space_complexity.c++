#include <sys/time.h>
#include <iostream>
using namespace std;
long getTimeinMicroSecond()
{
    struct timeval start;
    gettimeofday(&start, NULL);
    return start.tv_sec * 1000000 + start.tv_usec;
}
void merge(int arr[], int start, int mid, int end)
{
    int temp[end - start];
    int i = start;
    int j = mid + 1;
    int k = 0;
    while (i <= mid && j <= end)
    {
        if (arr[i] < arr[j])
        {
            temp[k++] = arr[i++];
        }
        else
        {
            temp[k++] = arr[j++];
        }
    }
    if (i <= mid)
    {
        while (i <= mid)
        {
            temp[k++] = arr[i++];
        }
    }
    else if (j <= end)
    {
        while (j <= end)
        {
            temp[k++] = arr[j++];
        }
    }
    k = 0;
    for (int l = start; l <= end; l++)
    {
        arr[l] = temp[k++];
    }
}

void mergesort(int arr[], int start, int end)
{
    if (start >= end)
    {
        return;
    }
    int mid = (end + start) / 2;
    mergesort(arr, start, mid);
    mergesort(arr, mid + 1, end);
    merge(arr, start, mid, end);
}

int main()
{
    for (int n = 10; n <= 1000000; n *= 10)
    {
        int *arr = new int[n];
        long starttime, endtime;
        for (int i = 0; i < n; i++)
        {
            arr[i] = n - 1;
        }
        starttime = getTimeinMicroSecond();
        mergesort(arr, 0, n - 1);
        endtime = getTimeinMicroSecond();
        cout << "merge sort n= " << n << "time=" << endtime - starttime << endl;
    }
    return 0;
}
// all time very little bit

// merge sort n= 10time=1
// merge sort n= 100time=5
// merge sort n= 1000time=91
// merge sort n= 10000time=783
// merge sort n= 100000time=8008
// merge sort n= 1000000time=91264


