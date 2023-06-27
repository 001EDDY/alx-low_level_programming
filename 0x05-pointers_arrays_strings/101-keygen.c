#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 8

/**
 * main - Generates random valid passwords for the
 * program 101-crackme.
 * Return: Always 0.
 */
char *generate_password(void)
{
char *password = (char *)malloc((PASSWORD_LENGTH + 1) * sizeof(char));
const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
srand(time(NULL));
for (int i = 0; i < PASSWORD_LENGTH; i++)
{
int index = rand() % (sizeof(charset) - 1);
password[i] = charset[index];
}
password[PASSWORD_LENGTH] = '\0';
return (password);
}
int main(void)
{
char *password = generate_password();
printf("Generated password: %s\n", password);
free(password);

return (0);
}

