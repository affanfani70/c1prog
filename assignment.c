#include <stdio.h>
#include <stdlib.h>

// Function to print the array
void printArr_f13_59412(int* arr, int size) {
    int count = 0;
    printf("The array elements: ");
    for (int i = 0; i < size; i++) {
        if (arr[i] != -1) {
            printf("%d ", arr[i]);
            count++;
        }
    }
    printf("\n");
}


// Function to find the min price of cars and print information
void minPrice_f13_59412(int* door, int* year, int* price) {
    int minPrice = price[0];
    for (int i = 1; i < 3; i++) {
        if (price[i] < minPrice) {
            minPrice = price[i];
        }
    }

    printf("Cars with the lowest price:\n");
    for (int i = 0; i < 3; i++) {
        if (price[i] == minPrice) {
            printf("Car ID: %d, Door: %d, Year: %d, Price: %d\n", i, door[i], year[i], price[i]);
        }
    }
}

// Function to calculate the average of cars in 2020 and count min cars with door=2 in 2021
int infoYear_f13_59412(int* door, int* year, int* price) {
    int sum_2020 = 0;
    int count_2021 = 0;
    int numCars = 3;

    for (int i = 0; i < numCars; i++) {
        if (year[i] == 2020) {
            sum_2020 += price[i];
        }
        if (year[i] == 2021 && door[i] == 2) {
            count_2021++;
        }
    }

    int avgPrice2020 = sum_2020 / numCars;
    printf("Average price of cars in 2020: %d\n", avgPrice2020);

    return count_2021;
}

int main() {
    int door[13] ;
    int year[13] ;
    int price[13];

    // the user to enter cars' information
    int carCount = 0;
    while (carCount < 13) {
        int d, y, p;
        printf("Enter door, year, and price for car %d (separated by spaces): ", carCount + 1);
        scanf("%d %d %d", &d, &y, &p);

        if (d == -1 || y == -1 || p == -1) {
            door[carCount] = year[carCount] = price[carCount] = -1;
            break;
        }

        door[carCount] = d;
        year[carCount] = y;
        price[carCount] = p;
        carCount++;
    }

    // Function involks 
    printArr_f13_59412(door, 13);
    minPrice_f13_59412(door, year, price);
    int miniCars2021 = infoYear_f13_59412(door, year, price);

    printf("Number of mini-cars in 2021: %d\n", miniCars2021);

    return 0;
}