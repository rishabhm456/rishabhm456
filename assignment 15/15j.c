#include <stdio.h>

// Function to calculate the frequency of all elements
void findFrequency(int a[], int n)
{
    // create a count array of size `n` to store the count of all array elements
    int freq[n];

    for (int i = 0; i < n; i++) {
        freq[i] = 0;
    }

    // update frequency of each element
    for (int i = 0; i < n; i++) {
        freq[a[i]]++;
    }

    // iterate through the array to print frequencies
    for (int i = 0; i < n; i++)
    {
        if (freq[i]) {
            printf("%d appears %d times\n", i, freq[i]);
        }
    }
}

int main(void)
{
    int a[100],n,i;
    printf("Enter the size of the array:");
    scanf("%d",&n);
    printf("enter the array:");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    findFrequency(a, n);

    return 0;
}
