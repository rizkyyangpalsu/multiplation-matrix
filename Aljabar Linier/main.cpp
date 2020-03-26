//
//  main.cpp
//  Aljabar Linier
//
//  Created by Proxima Centauri on 26/03/20.
//  Copyright © 2020 PT. Travel Anak Bangsa. All rights reserved.
//

#include <stdio.h>

int main(void) {
    int matrixA[2 * 3];
    int matrixB[3 * 3];
    
    
    for (int loop = 0; loop <= 1; loop++) {
        int length;
        int height;
        if (loop == 0) {
            printf("Deklarasikan Matriks A Ordo (2x3)\n");
            
            length = 3;
            height = 2;
        } else {
            printf("Deklarasikan Matriks B Ordo (3x3)\n");
            
            length = 3;
            height = 3;
        }

        int counter = 0;

        for (int i = 0; i < height; i++)
        {
            for (int j = 0; j < length; j++)
            {
                int angka = 0;

                printf("Masukkan angka kolom %d baris %d: ", i + 1, j + 1);
                scanf("%d", &angka);
                
                if (loop == 0) {
                    matrixA[counter] = angka;
                } else {
                    matrixB[counter] = angka;
                }
                counter++;
            }
            
        }
        
        counter = 0;
        
        if (loop == 0) {
            printf("A = ");
        } else {
            printf("B = ");
        }
        for (int i = 0; i < height; i++)
        {
            for (int j = 0; j < length; j++)
            {
                if (loop == 0) {
                    printf("| %d |", matrixA[counter]);
                } else {
                    printf("| %d |", matrixB[counter]);
                }
                counter++;
            }
            printf("\n");
            printf("    ");
        }
        printf("\n");
    }
    
    printf("A x B = \n");

    int result[2 * 3];
    int counter = 0;

    for (int j = 0; j <= 1; j++) {
        int counter1 = 0;
        if (j == 0) {
            for (int i = 0; i <= 2; i++) {
                result[counter] = matrixA[0]*matrixB[counter1] + matrixA[1]*matrixB[counter1 + 3] + matrixA[2]*matrixB[counter1 + 6];
                printf("| %dx%d + %dx%d + %dx%d |", matrixA[0], matrixB[counter1], matrixA[1], matrixB[counter1 + 3], matrixA[2], matrixB[counter1 + 6]);
                counter1++;
                counter++;
            }
            printf("\n");
        } else {
            for (int i = 0; i <= 2; i++) {
                result[counter] = matrixA[3]*matrixB[counter1] + matrixA[4]*matrixB[counter1 + 3] + matrixA[5]*matrixB[counter1 + 6];
                printf("| %dx%d + %dx%d + %dx%d |", matrixA[3], matrixB[counter1], matrixA[4], matrixB[counter1 + 3], matrixA[5], matrixB[counter1 + 6]);
                counter1++;
                counter++;
            }
            printf("\n");
        }
    }

    printf("=============================================");

    counter = 0;

    printf("\nA x B = ");

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("| %d |", result[counter]);
            counter++;
        }
        printf("\n");
        printf("        ");
    }

    return 0;
}
