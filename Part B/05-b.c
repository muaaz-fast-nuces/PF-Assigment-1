#include <stdio.h> 

int print_result(int *numbers_0_pt,int total);

int main(){
    short int user_input_num;
    int total = 0 ;
    int numbers [total];
    int valid_input ;
    while(1){
        printf("Enter any integer number (0-9) :");
        valid_input = scanf("%d",&user_input_num);
        if(valid_input == 0 || user_input_num > 9 || user_input_num < 0){
            break;
        }
        numbers[total] = user_input_num;
        total++;
    }
    print_result(&numbers[0],total);
    return 0 ;
}



int print_result(int *numbers_0_pt,int total){
    if (total ==0){
        printf("No number is inputted");
        return 0;
    }
    int occurences[10]= {0,0,0,0,0,0,0,0,0,0}; //? Ordered/Sorted list of occurences of numbers from 0 - 9 
    for (int i=0;i<total;i++){
        occurences[*numbers_0_pt] += 1;
        numbers_0_pt++;
    }
    int *occ_pt = &occurences[0];
    printf("Number \t Number of Occurrences\n");
    for (int i=0;i<10;i++){
        int value = *occ_pt;
        if (value == 0){
            occ_pt++;
            continue;
        }
        printf("%d \t %d\n",i,value);
        occ_pt++;
    }

    return 0;
}