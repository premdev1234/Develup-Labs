#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int main()
{
    int num,guess,nguess = 0 ;
    srand(time(0));
    num = rand()%100+1 ; /*generate a number between 1 and 100*/
    // printf("The number is %d",num);

    do
    {
        printf("Guess the number :  ");
        scanf("%d",&guess);
        if (guess<num){
            printf("higher number please!\n");
        }
        else if (guess>num){
            printf("lower number please !!!\n");
        }
        else{
            printf("you guessed in %d attempts \n",nguess);
        }
        nguess++ ;
    } while (guess!=num);
    
     return 0;
}