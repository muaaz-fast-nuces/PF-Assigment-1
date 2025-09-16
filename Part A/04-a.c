#include <stdio.h>
int get_pocker_num(short int *num,int is_first);
int main()
{
    short int a = 0, b = 0, c = 0, d = 0, e = 0; 
    short int valid_input = 0;
    
    valid_input = get_pocker_num(&a,1);
    if (valid_input == 0)
        return 0;
    valid_input = get_pocker_num(&b,0);
    if (valid_input == 0)
        return 0;
    valid_input = get_pocker_num(&c,0);
    if (valid_input == 0)
        return 0;
    valid_input = get_pocker_num(&d,0);
    if (valid_input == 0)
        return 0;
    valid_input = get_pocker_num(&e,0);
    if (valid_input == 0)
        return 0;

    int cards_numbers[13] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int index_filed_cards[5] = {0, 0, 0, 0, 0};

    cards_numbers[a] += 1;
    index_filed_cards[0] = a;
    cards_numbers[b] += 1;
    index_filed_cards[1] = b;
    cards_numbers[c] += 1;
    index_filed_cards[2] = c;
    cards_numbers[d] += 1;
    index_filed_cards[3] = d;
    cards_numbers[e] += 1;
    index_filed_cards[4] = e;

    if (cards_numbers[index_filed_cards[0]] == 3 || cards_numbers[index_filed_cards[1]] == 3 || cards_numbers[index_filed_cards[2]] == 3 || cards_numbers[index_filed_cards[3]] == 3 || cards_numbers[index_filed_cards[4]] == 3){
        if (cards_numbers[index_filed_cards[0]] == 2 || cards_numbers[index_filed_cards[1]] == 2 || cards_numbers[index_filed_cards[2]] == 2 || cards_numbers[index_filed_cards[4]] == 2 || cards_numbers[index_filed_cards[4]] == 2){
        printf("Your poker hand is a full house\n");
            return 0;
        }
    }
        printf("Your poker hand is not a full house\n");
        return 0;
}

int get_pocker_num(short int *num,int is_first){
    if (is_first==1){printf("Choose the poker hand by choosing exactly 5 numbers (1-13):\n");}
    int is_valid = scanf("%hd", num);

    if (is_valid == 0 || *num > 13 || *num <= 0)
    {
        printf("Invalid inputs , Choose integers between (1-13)\n");
        return 0;
    }

    return 1;
}