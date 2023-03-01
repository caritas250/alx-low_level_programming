#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    char password[13];  // 12 characters for password + 1 for null terminator
    int i, random_num;

    srand(time(NULL));  // Seed the random number generator with the current time

    // Generate 12 random characters for the password
    for (i = 0; i < 12; i++)
    {
        random_num = rand() % 62;  // Generate a random number between 0 and 61
        if (random_num < 26)
            password[i] = 'a' + random_num;  // If random_num is between 0 and 25, add lowercase letter
        else if (random_num < 52)
            password[i] = 'A' + (random_num - 26);  // If random_num is between 26 and 51, add uppercase letter
        else
            password[i] = '0' + (random_num - 52);  // If random_num is between 52 and 61, add digit
    }

    password[12] = '\0';  // Add null terminator at the end of the password

    printf("%s\n", password);  // Print the generated password

    return 0;
}
