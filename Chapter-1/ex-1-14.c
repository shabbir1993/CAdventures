#include <stdio.h>

main() {
    int userInput;
    int i, j;

    int characters[92] = { 0 };

    while((userInput = getchar()) != '\n'){
        if(userInput >= 30 && userInput <= 122){
            if(userInput != '\n'){
                ++characters[(userInput-30)];
            }

            if(userInput == '\n'){
                break;
            }
        }
    }

    printf("Character\t|\tFrequency\n");

    for(i = 0; i < 92; ++i){
        printf("%c\t\t|\t\t%d : ", i+30, characters[i]);
        
        for(j = 0; j < characters[i]; j++){
            printf("=");
        }
        printf("\n");
    }
}