#include<iostream>

using namespace std;

#define SZ 10

void selection_sort (int A[], int n);

int main  ()
{

    int arr[SZ];

    int i;

    for (i = 0; i< SZ; i++)
    {
        cin>>arr[i];
    }

    selection_sort(arr,SZ);

    for(i = 0; i < SZ; i++){

        cout<<arr[i]<<"\t";
    }

    return 0;


}

void selection_sort (int A [], int n){

                            int i,j,min,temp;

                            for ( i = 0; i < n - 1; i++){

                                min = i;

                                for ( j = i + 1; j < n; j++){

                                    if ( A[i] > A[j]){
                                        min=j;
                                    }
                                }
                                if ( min != i)
                                {
                                    A[i] = temp;

                                    A[i] = A[min];

                                    A[min] = temp ;





                                }
                            }

}
