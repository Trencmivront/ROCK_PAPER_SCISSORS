#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    
    int select_p, select_b;
    char slct;
    
    printf("\t\tROCK-PAPER-SCISSORS\n\n");
    
    while(1){
    
    printf("\tPlease select one of the following;\n");
    
    printf("\t\t1.Rock\n\t\t2.Paper\n\t\t3.Scissors\n\n\t\t  ");
    
    scanf(" %d", &select_p);
    
    select_b = rand() % 3 + 1;
    
    if(select_b == select_p)
       
        printf("DRAW!!");
    
    else if(select_p == 1 && select_b == 2)
        
        printf("\aRock wrapped by paper! You have Lost!");
    
    else if (select_p == 1 && select_b == 3)
    
        printf("Rock breaks Scissors! You have Won!");
    
    else if (select_p == 2 && select_b == 1)
        
        printf("Paper wraps rock! You have Won!");
        
    else if(select_p == 2 && select_b == 3)
    
        printf("\aPaper turned into a snowflake by Scissors! You have Lost!");
        
    else if(select_p == 3 && select_b == 1)
    
        printf("\aScissors smashed brutaly by the great force of Rock! You have Lost!");
        
    else if (select_p == 3 && select_b == 2)
    
        printf("Scissors cuts through Paper! You have Won!");
        
    else {
        
        printf("WRONG INPUT");
        exit(1);
    }
    
    printf("\n\tDo you want to continue? (Y/N)\n\t");
    
    scanf(" %c", &slct);
    
    if (slct == 'Y')
    
        printf("Restarting...\n\n");
    
    else if (slct == 'N') return 0;
    
    }
    return 0;
}
