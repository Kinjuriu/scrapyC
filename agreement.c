# include <stdio.h>
# include <cs50.h>

int main(void)
{
    // Pronmpt user to agree 
    // When using a single character, use single quotes
    char c = get_char("Do you agree? ");

    // Check whether user agreed

    if (c == 'y' || c == 'Y')
    {
        printf("Agreed.\n");
    }
    else if (c == 'n' || c == 'N')
    {
        printf("Not Agreed.\n");
    }
}
