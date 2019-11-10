/* mario less */

// #include <cs50.h>
// #include <stdio.h>

// void print(int input){
//     for(int i = 0; i < input; i++){
//         for(int j = input; j > i; j--){
//             printf(" ");
//         }
//         for(int k = 0; k <= i; k++){
//             printf("#");
//         }
//         printf("\n");
//     }
// }

// int main(void){
//     int input = get_int("Height: ");
//     if(input < 1 || input > 8){
//         return main();
//     }
//     print(input);
// }

/* mario more */
#include <cs50.h>
#include <stdio.h>

void hash(int i){
    for(int k = 0; k <= i; k++){
        printf("#");
    }
}

void space(int input, int i){
    for(int j = input; j > i; j--){
        printf(" ");
    }
}

void print(int input){
    for(int i = 0; i < input; i++){
        space(input, i);
        hash(i);
        printf("  ");
        hash(i);
        space(input, i);
        printf("\n");
    }
}

int main(void){
    do
    {
        int input = get_int("Height: ");
    }
    while(input < 1 || input > 8);
    print(input);
}