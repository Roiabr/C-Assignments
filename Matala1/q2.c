#include <stdio.h>

main() {
    /*
    this program get a specific char(M||m||s||S) and get the number of the char from a chars sequnces and his ascii code
    */
    char C;
    int NUMBER = 0;
    int count = 0;
    printf("Enter char to count:");
    if(scanf("%d", &NUMBER){
        printf("please enter a char")
    }
    else{
        scanf(" %c",&C);
        if (C == 'M' || C == 'm' || C == 'S' || C == 's'){
            printf("Enter the chars sequence:");
            char m;
            while( m != '$'){
                scanf(" %c",&m);
                if(m == C){
                    count++;
                }
            }   
        if(count > 0)
            printf("The char with ASCII code %d appeared %d times.",C,count);
        }
    }
}