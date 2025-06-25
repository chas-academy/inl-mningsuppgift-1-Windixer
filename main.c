#include <stdio.h>
#include <stdlib.h>

int main()
{
    // The Line below must *NOT* be changed or test will fail!
    srand(1);

   
    // Your code goes here
        int number_storage[100];
        int random_number;
        int number_occurences[6] = {0, 0, 0, 0, 0, 0}; // Array to count occurrences of numbers 1-6
        int sum = 0;
for (int i = 0; i < 100;)
{
    random_number = rand() % 6 + 1; // Generate a random number between 1 and 6
    printf("%d\n", random_number);
    number_storage[i] = random_number;
    sum += random_number; // Add the random number to the sum
    if (number_storage[i] == 1) {
        number_occurences[0]++;
    } else if (number_storage[i] == 2) {
        number_occurences[1]++;
    } else if (number_storage[i] == 3) {
        number_occurences[2]++;
    } else if (number_storage[i] == 4) {
        number_occurences[3]++;
    } else if (number_storage[i] == 5) {
        number_occurences[4]++;
    } else if (number_storage[i] == 6) {
        number_occurences[5]++;
    }
    i++;
}

printf("Occurrences of numbers 1-6:\n");
for (int i = 0; i < 6; i++) {
    printf("Number %d: %d times\n", i + 1, number_occurences[i]);
}
printf("Sum of all random numbers: %d\n", sum);
float average = sum / 100.0; // Calculate the average of the random numbers
printf("Average of random numbers: %.1f\n", average);
    return 0;
}
