//
//  main.c
//  GradeCalculator
//
//  Created by Pattranit Pisantanaroj on 11/3/2560 BE.
//  Copyright © 2560 Pattranit Pisantanaroj. All rights reserved.
//

#include <stdio.h>

void convertGrade(int midterm, int final, int score) {
    int total = midterm + final + score;
    
    if (total < 50) {
        printf("F\n");
    } else if (total > 49 && total <= 54) {
        printf("D\n");
    } else if (total >= 55 && total <= 59) {
        printf("D+\n");
    } else if (total >= 60 && total <= 64) {
        printf("C\n");
    } else if (total >= 65 && total <= 69) {
        printf("C+\n");
    } else if (total >= 70 && total <= 74) {
        printf("B\n");
    } else if (total >= 75 && total <= 79) {
        printf("B+\n");
    } else if (total >= 80 && total <= 100) {
        printf("A\n");
    }
    
}

int main() {
    
    int midterm, final, score;
    
    do {
        scanf("%d", &midterm);
        if (midterm < 0 || midterm > 20) {
            printf("Enter the correct value (0 - 20) : ");
        }
    } while (midterm < 0 || midterm > 20);
    
    do {
        scanf("%d", &final);
        if (final < 0 || final > 20) {
            printf("Enter the correct value (0 - 20) : ");
        }
    } while (final < 0 || final > 20);
    
    do {
        scanf("%d", &score);
        if (score < 0 || score > 60) {
            printf("Enter the correct value (0 - 60) : ");
        }
    } while (score < 0 || score > 60);
    
    convertGrade(midterm, final, score);
    
    return 0;
}
