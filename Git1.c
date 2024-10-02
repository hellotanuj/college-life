#include <stdio.h>

void frontSeatScenario();
void middleSeatScenario();
void lastSeatScenario();
void afterInduction();
void cafeteriaScenario();
void libraryScenario();
void hostelScenario();
void nextDayScenario();
void mysteryCallScenario();

int main() 
{
    int gen;
    char gender[10];
    int seatChoice;

    printf("Hello! Welcome to College Life Simulator. This is just a game.\n");
    printf("For each situation, you'll make choices using numbers.\n");
    printf("Example: Type 1 to choose option 1.\n");

    printf("You enter college for BTech CSE.\n");
    printf("Choose your character:\n1. Boy\n2. Girl\n3. Neutral\n");

    if (scanf("%d", &gen) != 1) {
        printf("Invalid input! Defaulting to Neutral.\n");
        gen = 3;
    }

    if (gen == 1) {
        printf("You chose Boy.\n");
        sprintf(gender, "Boy");
    } else if (gen == 2) {
        printf("You chose Girl.\n");
        sprintf(gender, "Girl");
    } else if (gen == 3) {
        printf("You chose Neutral.\n");
        sprintf(gender, "Neutral");
    } else {
        printf("Invalid choice! Defaulting to Neutral.\n");
        sprintf(gender, "Neutral");
    }

    printf("You are now playing as: %s\n", gender);

    printf("Your first day of college begins. You go to the auditorium for the induction.\n");
    printf("Where do you sit?\n1. Front\n2. Middle\n3. Last\n");

    if (scanf("%d", &seatChoice) != 1) {
        printf("Invalid input! You randomly sit in the middle.\n");
        middleSeatScenario();
    } else {
        if (seatChoice == 1) {
            frontSeatScenario();
        } else if (seatChoice == 2) {
            middleSeatScenario();
        } else if (seatChoice == 3) {
            lastSeatScenario();
        } else {
            printf("Invalid choice! You randomly sit in the middle.\n");
            middleSeatScenario();
        }
    }

    afterInduction();

    return 0;
}

void frontSeatScenario() {
    int choice;
    printf("You sit at the front. A guy with glasses is sitting beside you.\n");
    printf("What will you do?\n1. Greet him\n2. Hit him\n3. Sit somewhere else\n4. Ignore him\n");

    if (scanf("%d", &choice) != 1) {
        printf("Invalid input! You sit quietly through the event.\n");
        return;
    }

    switch (choice) {
        case 1:
            printf("You greet him. He seems friendly, and you start a conversation.\n");
            break;
        case 2:
            printf("You hit him. Security gets involved, and you're asked to leave the induction.\n");
            break;
        case 3:
            printf("You sit somewhere else. You miss out on a good conversation.\n");
            break;
        case 4:
            printf("You ignore him. The induction continues.\n");
            break;
        default:
            printf("Invalid choice! You sit quietly through the event.\n");
            break;
    }
}

void middleSeatScenario() {
    int choice;
    printf("You sit in the middle. A person next to you greets you.\n");
    printf("What will you do?\n1. Insult him\n2. Greet him back\n3. Ignore him\n4. Move to another seat\n");

    if (scanf("%d", &choice) != 1) {
        printf("Invalid input! You sit quietly.\n");
        return;
    }

    switch (choice) {
        case 1:
            printf("You insult him. He looks hurt and stops talking to you.\n");
            break;
        case 2:
            printf("You greet him back. You exchange numbers and plan to meet up later.\n");
            break;
        case 3:
            printf("You ignore him. The induction goes on.\n");
            break;
        case 4:
            printf("You move to another seat. You feel isolated.\n");
            break;
        default:
            printf("Invalid choice! You sit quietly.\n");
            break;
    }
}

void lastSeatScenario() {
    printf("You sit at the back. It's relaxed, and you daydream through the event.\n");
}

void afterInduction() {
    int choice;
    printf("The induction ends. You have free time before your next class.\n");
    printf("What will you do?\n1. Go to the cafeteria\n2. Go to the library\n3. Head back to the hostel\n");

    if (scanf("%d", &choice) != 1) {
        printf("Invalid input! You waste time.\n");
        return;
    }

    switch (choice) {
        case 1:
            cafeteriaScenario();
            break;
        case 2:
            libraryScenario();
            break;
        case 3:
            hostelScenario();
            break;
        default:
            printf("Invalid choice! You waste time.\n");
            break;
    }
}

void cafeteriaScenario() {
    int choice;
    printf("You head to the cafeteria. It's crowded with students.\n");
    printf("What will you do?\n1. Join classmates\n2. Sit alone\n3. Order food and leave\n");

    if (scanf("%d", &choice) != 1) {
        printf("Invalid input! You waste time.\n");
        return;
    }

    switch (choice) {
        case 1:
            printf("You join your classmates. You make friends and hear about a party later.\n");
            printf("Do you go to the party?\n1. Yes\n2. No\n");

            if (scanf("%d", &choice) != 1) {
                printf("Invalid input! You skip the party and focus on your studies.\n");
            } else {
                if (choice == 1) {
                    printf("You attend the party and meet lots of people.\n");
                } else {
                    printf("You skip the party and focus on your studies.\n");
                }
            }
            break;
        case 2:
            printf("You sit alone, but a student strikes up a conversation.\n");
            break;
        case 3:
            printf("You order food and leave. A quiet break.\n");
            break;
        default:
            printf("Invalid choice! You waste time.\n");
            break;
    }

    nextDayScenario();
}

void libraryScenario() {
    int choice;
    printf("You visit the library. It's quiet and full of students studying.\n");
    printf("A professor approaches you.\n");
    printf("What will you do?\n1. Talk to him\n2. Politely excuse yourself\n3. Ignore him\n");

    if (scanf("%d", &choice) != 1) {
        printf("Invalid input! You sit quietly.\n");
        return;
    }

    switch (choice) {
        case 1:
            printf("You have a good conversation, and he invites you to join his research team.\n");
            break;
        case 2:
            printf("You excuse yourself. The professor seems disappointed.\n");
            break;
        case 3:
            printf("You ignore him. Nothing happens.\n");
            break;
        default:
            printf("Invalid choice! You sit quietly.\n");
            break;
    }

    nextDayScenario();
}

void hostelScenario() {
    int choice;
    printf("You return to your hostel room. Your roommate invites you to play a game.\n");
    printf("What will you do?\n1. Play the game\n2. Study\n3. Go for a walk\n");

    if (scanf("%d", &choice) != 1) {
        printf("Invalid input! You waste time.\n");
        return;
    }

    switch (choice) {
        case 1:
            printf("You play the game and have a lot of fun!\n");
            break;
        case 2:
            printf("You study and feel prepared for your classes.\n");
            break;
        case 3:
            printf("You go for a walk and find a hidden spot on campus.\n");
            break;
        default:
            printf("Invalid choice! You waste time.\n");
            break;
    }

    nextDayScenario();
}

void nextDayScenario() {
    int choice;
    printf("It's the next day. The professor assigns a group project.\n");
    printf("What will you do?\n1. Join friends\n2. Join the smart group\n3. Work alone\n");

    if (scanf("%d", &choice) != 1) {
        printf("Invalid input! The professor assigns you a random group.\n");
        return;
    }

    switch (choice) {
        case 1:
            printf("You join your friends. It's fun, but not very productive.\n");
            break;
        case 2:
            printf("You join the smart group. You get good grades but feel left out.\n");
            break;
        case 3:
            printf("You work alone. It's tough, but you manage.\n");
            break;
        default:
            printf("Invalid choice! The professor assigns you a random group.\n");
            break;
    }

    mysteryCallScenario();
}

void mysteryCallScenario() {
    printf("Your phone rings. It's an unknown number.\n");
    printf("A voice says, 'We know what you’ve been up to. Meet us at the old locked door at midnight.'\n");
    printf("The call ends abruptly. To be continued...\n");
}
