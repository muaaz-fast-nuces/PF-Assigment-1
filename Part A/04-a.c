#include <stdio.h>
int get_pocker_num(short int *num);
int main(){
    short int a =0 , b =0, c=0 , d=0, e=0 ; // initialize variables for 5 pocker hand
    short int valid_input =0 ;
    // Repetetion is not allowed therefore :
    valid_input = get_pocker_num(&a);
    if(valid_input==0) return 0; 
    valid_input = get_pocker_num(&b);
    if(valid_input==0) return 0;  
    valid_input = get_pocker_num(&c);
    if(valid_input==0) return 0; 
    valid_input = get_pocker_num(&d);
    if(valid_input==0)return 0; 
    valid_input =get_pocker_num(&e);
    if(valid_input==0)return 0; 

    

    int countA = 1;
    int countB = 1;
    int countC = 1;
    int countD = 1;
    int countE = 1;

    if (a == b) countA++;
    if (a == c) countA++;
    if (a == d) countA++;
    if (a == e) countA++;

    if (b == a) countB = 0;
    else {
        if (b == c) countB++;
        if (b == d) countB++;
        if (b == e) countB++;
    }

    if (c == a || c == b) countC = 0;
    else {
        if (c == d) countC++;
        if (c == e) countC++;
    }

    if (d == a || d == b || d == c) countD = 0;
    else {
        if (d == e) countD++;
    }
    if (e == a || e == b || e == c || e == d) countE = 0; 


    if (countA==3||countB==3||countC==3||countD==3||countE==3){
        if(countA==2||countB==2||countC==2||countD==2||countE==2){
            printf(" Your poker hand is a full house");
        }
    }
    printf("Your poker hand is not a full house");



    
    

    return 0;
}

int get_pocker_num(short int *num){
    printf("Choose the poker hand by choosing exactly 5 numbers (1-13): \n ");
    int is_valid = scanf("%hd",num);
    
    if(is_valid==0 || *num > 13 || *num<=0){
        printf("Invalid inputs , Choose integers between (1-13)\n");
        return 0;
    } 

    return 1;
}