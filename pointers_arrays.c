#include <stdio.h>

int main()
{
    int arr[] = {34, 12, 21, 54, 48};
    int largest = *arr;
    
    int i = 0;
    
    while (i < 5)
    {
        if (largest < *(arr + i))
        {
            largest = *(arr + i);
        }
        i++;
    }
    
    
    
    printf("The largest value is: %d\n", largest);
    return (0);
}
