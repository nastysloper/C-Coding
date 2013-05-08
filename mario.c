// Program to draw Super Mario-style pyramid

#include <stdio.h>
#include <cs50.h>


int main (void)
{
    int height;
    
    // Get input for pyramid in range (0 to 23 steps)
    do
    {
        printf("Enter a number of steps for Mario: ");
        height = GetInt();
    }
    while(height > 23 || height < 0);
    
   
    // Draw pyramid. 3 cases: empty set, 1 row, 2 or more rows.
   
    if(height == 0);
    // Do nothing. Program ends.
    
    else if(height == 1)
    {
        printf("##");
        printf("\n");
    }   
    
    else
    {
    
        int line_length = height + 1;
        int hashes = 2;
        int spaces = line_length - hashes;
        int counter;
        
        
        for(int i = 0; i < height; i++)
        {
             
            counter = spaces;
            while(counter > 0)
                {
                    printf(" ");
                    counter--;
                }
            spaces--;    
                
            counter = hashes;        
            while(counter > 0)
                {
                    printf("#");
                    counter--;
                }
            hashes++;
            printf("\n");
        }
    }
    
    return 0;
}
