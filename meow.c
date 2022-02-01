# include <stdio.h>


int main(void)
{
    for (int i = 0; i < 3; i++) // the syntatic sugar increases the value of a variable by 1
    {
        printf("meow\n"); 
    }
}


// the for loop but in a different sense
// here the variable exists only inside the 4 lines of code

// for (int i = 0; i < 3; i++)
// {
//    printf("meow\n"); 
// }

// // Create a function meow

// void meow(void)
// {
//    printf("meow\n"); 
// }

// int main(void)
// {
//     for (int i = 0; i < 3; i++)
//     {
//         meow();
//     }
// }

// // or we can write the function this way

// void meow(int n);

// int main(void)
// {
//     meow(3);
// }
// void meow(int n)
// {
//     for (int i = 0; i < 3; i++)
//     {
//         printf("meow\n");
//     }
// }
