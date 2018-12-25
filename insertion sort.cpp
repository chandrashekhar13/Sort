#include<iostream>

using namespace std;

#define SZ 5

void insertion_sort (int A[], int n);

int main ()
{
    int arr [SZ];

    int i;

    for (i =0 ; i< SZ; i++)
    {
        cin>>arr[i];

    }

    insertion_sort(arr, SZ);

    for(i = 0; i<SZ; i++){
        cout<<arr[i];
    }
}

void insertion_sort (int A[],int n){
                            int i, j, item;

                            for (i = 1; i<n; i++){

                                item = A[i];
                                j=i-1;

                                while (j>=0&& A[j]>item){
                                    A[j+1]=A[j];
                                    j=j-1;
                                }

                                A[j+1]=item;
                            }

}
