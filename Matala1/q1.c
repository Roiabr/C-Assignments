#include <stdio.h>

main() {
    /*
    * this program get products from walter and calculte 
    * the final product weighs and how much pure is the prudect
    */
    printf("Welcome, please enter the weights of each ingredient:\n");
    double product = 1;//the size of the product
    int flag = 1;
    int count = 0; //the amount of the product
    double finalProduct = 0;
    while(product > 0 && flag == 1){
        
        if((scanf("%lf",&product))!=1){
           flag = 0;
        }
       else{
        if(product > 0){
            count++;
            finalProduct = (finalProduct + product);
            
            
        }
       }
    }
    if (flag == 0){
        printf("error input");
    
    }
    else{
    finalProduct = finalProduct/count;
    int pure = count * 10;
    if(count < 4)
        printf("Not enough ingredients.\n");
    else if(count > 10)
        printf("Too many ingredients.\n");
    else
        printf("The final product weighs %.3lf pounds and is %d percent pure.",finalProduct,pure);
    }
    return 0;
}
