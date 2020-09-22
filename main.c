#include <stdio.h>
int summition(int array[], int num2){
    int result = 0;
    for (int i =0; i < num2; i++){
        result+= array[i];
    }
    printf("\nThe summition of non duplicated numbers is %d", result);
    return 0;
}
int main()
{
    int size=20, array1[200], array2[200], num = 0, i, j;

    printf("Enter 20 numbers");

    for (i = 0; i < size; i++)
        scanf("%d", &array1[i]);

    for (i = 0; i< size; i++)
    {
        for (j = 0; j < num; j++)
        {
            if(array1[i] == array2[j])
                break;
        }
        if (j == num)
        {
            array2[num] = array1[i];
            num++;
        }
    }

    printf("The numbers of the array after deleting the duplicated numbers\t");

    for (i = 0; i < num; i++)
    {
        printf("%d, ", array2[i]);
    }
    return summition(array2,num);
}

