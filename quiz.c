#include <stdio.h>
int main(){
    int score = 0;
    int q1, q2, q3, q4, q5;
    printf("Welcome to the Quiz!\n");
    printf("------------------------------------------------------------\n");
    printf("Question 1: What is the name of the capital of France?\n");
    printf("1. Berlin\n2. Madrid\n3. Paris\n4. Rome\n");
    do {
        printf("Enter your answer (1-4): ");
        scanf("%d", &q1);
        if (q1 < 1 || q1 > 4) {
            printf("Invalid input! Please enter a number between 1 and 4.\n");
        }
    } while (q1 < 1 || q1 > 4);

    if (q1 == 3) {
        score++;
        q1 = 1;
    } else {
        q1 = 0;
    }
    printf("------------------------------------------------------------\n");
    printf("Question 2: What is 2 + 2?\n");
    printf("1. 3\n2. 4\n3. 5\n4. 6\n");
    do {
        printf("Enter your answer (1-4): ");
        scanf("%d", &q2);
        if (q2 < 1 || q2 > 4) {
            printf("Invalid input! Please enter a number between 1 and 4.\n");
        }
    } while (q2 < 1 || q2 > 4);

    if(q2 == 2) {
        score++;
        q2 = 1;
    } else {
        q2 = 0;
    }
    printf("------------------------------------------------------------\n");
    printf("Question 3: What is the largest planet in our solar system?\n");
    printf("1. Earth\n2. Jupiter\n3. Mars\n4. Saturn\n");
    do {
        printf("Enter your answer (1-4): ");
        scanf("%d", &q3);
        if (q3 < 1 || q3 > 4) {
            printf("Invalid input! Please enter a number between 1 and 4.\n");
        }
    } while (q3 < 1 || q3 > 4);

    if(q3 == 2) {
        score++;
        q3 = 1;
    } else {
        q3 = 0;
    }
    printf("------------------------------------------------------------\n");
    printf("Question 4: Who wrote 'Hamlet'?\n");
    printf("1. Charles Dickens\n2. Mark Twain\n3. William Shakespeare\n4. Jane Austen\n");
    do {
        printf("Enter your answer (1-4): ");
        scanf("%d", &q4);
        if (q4 < 1 || q4 > 4) {
            printf("Invalid input! Please enter a number between 1 and 4.\n");
        }
    } while (q4 < 1 || q4 > 4);

    if(q4 == 3) {
        score++;
        q4 = 1;
    } else {
        q4 = 0;
    }
    printf("------------------------------------------------------------\n");
    printf("Question 5: When was the Constitution of India brought into force?\n");
    printf("1. 1947\n2. 1948\n3. 1949\n4. 1950\n");
    do {
        printf("Enter your answer (1-4): ");
        scanf("%d", &q5);
        if (q5 < 1 || q5 > 4) {
            printf("Invalid input! Please enter a number between 1 and 4.\n");
        }
    } while (q5 < 1 || q5 > 4);

    if(q5 == 4) {
        score++; 
        q5 = 1;
    } else {
        q5 = 0;
    }

    printf("------------------------------------------------------------\n");
    printf("Your total score is: %d out of 5\n", score);

if (q1 == 1) {
    printf("Question 1: Correct\n");
} else {
    printf("Question 1: Incorrect\n");
}
if (q2 == 1) {
    printf("Question 2: Correct\n");
} else {
    printf("Question 2: Incorrect\n");
}
if (q3 == 1) {
    printf("Question 3: Correct\n");
} else {
    printf("Question 3: Incorrect\n");
}
if (q4 == 1) {
    printf("Question 4: Correct\n");
} else {
    printf("Question 4: Incorrect\n");
}
if (q5 == 1) {
    printf("Question 5: Correct\n");
} else {
    printf("Question 5: Incorrect\n");
}
    printf("------------------------------------------------------------\n");
if (score == 5) {
    printf("Excellent! You got all answers correct.\n");
} else if (score >= 3) {
    printf("Good job! You passed the quiz.\n");
} else {
    printf("Better luck next time.\n");
}
    printf("Thank you for participating in the quiz!\n");
    return 0;
}
