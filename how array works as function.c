#include <stdio.h>
void function(int arr []){
arr [0]=10;
return;}

int main()
{
    int arr [5] = {1,2,3,4,5};
   printf ("%d\n", arr[1]);
    function(arr);
    printf ("%d\n", arr[0]);
    return 0;
}
