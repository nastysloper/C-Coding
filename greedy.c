/*    Greedy Algorithm implementation.
 *    Program calculates the minimum number of coins 
 *    to equal user input.
*/

#include <stdio.h>
#include <math.h>
#include <cs50.h>

int main(void)
{
    float money_in;
    int coin_count = 0;
    int cents;
    float raw_cents;
    
    do
    {
        printf("Hi, there! How much change is owed? ");
        money_in = GetFloat();
    }
    while(money_in < 0);
    
    float placeholder = money_in;
    while(placeholder > 1)
    {
        placeholder--;
    }
    
    placeholder *= 100;
    
    if(money_in == 0)
        printf("%d\n", coin_count);
    // Program terminates.
        
    else
    {
        // Convert money_in to all cents.
        
        raw_cents = money_in * 100;
   
        
        double d = round(raw_cents);
        cents = d;
     
        
        while(cents >= 25)
        {
            int temp = cents / 25;
            coin_count += temp;
            cents = cents % 25;
        }
   
     
        while(cents >= 10)
        {
            int temp = cents / 10;
            coin_count += temp;
            cents = cents % 10;
        }
          
        
         while(cents >= 5)
        {
            int temp = cents / 5;
            coin_count += temp;
            cents = cents % 5;
        }
        

        
        while(cents >= 1)
        {
            int temp = cents / 1;
            coin_count += temp;
            cents = 0;
            
        }
        
        
        printf("%d\n", coin_count);
    }
    
    return 0;
}

