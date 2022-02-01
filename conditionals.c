# include <stdio.h>
# include <cs50.h>

int main(void)
{
    const int MINE = 4;
    int my_points = get_int("How many points did you lose?");

    if (my_points < MINE)
    {
        printf("You have lost fewer points than me.\n");
    }
    else if (my_points > MINE)
    {
        printf("You have lost more points than me.\n");
    }
    else
    {
        printf("We have the same points!.\n");
    }
}
