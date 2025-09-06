#include <stdio.h>
int main()
{
    int value;
    printf("Please enter a value in the range (1-7) : \n");
    scanf("%d", &value);
    switch (value)
    {
    case 1:
        printf("You entered Monday\n");
        break;
    case 2:
        printf("You entered Tuesday\n");
        break;
    case 3:
        printf("You entered Wednesday\n");
        break;
    case 4:
        printf("You entered Thursday\n");
        break;
    case 5:
        printf("You entered Friday\n");
        break;
    case 6:
        printf("You entered Saturday\n");
        break;
    case 7:
        printf("You entered Sunday\n");
        break;
    default:
        printf("You entered a value out of range\n");
        break;
    }

    return 0;
}

//? Alternative solution

/* int main(){
     char days[7][10]={"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};
     int value;
     printf("Please enter a value in the range (1-7) : \n");
     scanf("%d", &value);
     if (value>7 || value < 1){
         printf("You entered a value out of range\n");
         return 0 ;
     }
     printf("You entered %s\n",days[value-1]);
     return 0;
 } 
     */
