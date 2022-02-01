# include <stdio.h>
# include <math.h>
# include <cs50.h>

int main(void)
{
    float amount = get_float("Shilling amount: ");
    int cents= round(amount * 100);
    printf("Cents: %i\n", cents);
}
