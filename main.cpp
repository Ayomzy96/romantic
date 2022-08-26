//JUST A SIMPLE TRIVIAL GAME THAT ASKS DEEP QUESTIONS//



#include <cstdio>
int main() {
    int game;
    puts("input any number ranging from 1-15: ");
    scanf("%i", &game);
    switch (game) {
        case 1:
            puts("whats your favorite movie and what made it your best?");
            break;
        case 2:
            puts("Whats the thing you've always wanted to do but you're scared of trying?");
            break;
        case 3:
            puts("If you're to restart your life from beginning what would you do differently?");
            break;
        case 4:
            puts("If have the choice to travel to one country which one will it be?");
            break;
        case 5:
            puts("What's the happiest moment you can remember?");
        case 6:
            puts("What's the best life choice you've made and are thankful for?");
        case 7:
            puts("Which movie made you emotional?");
        case 8:
            puts("what's your favourite song?");
        case 9:
            puts("Do you believe in the supernatural and why?");
        case 10:
            puts("If you had one day left on earth to live what would you do or who would you spend it with?");
            break;
        case 11:
            puts("If you had only 2 wishes what would it be?");
            break;
        case 12:
            puts("Do you believe in love or love at first sight?");
            break;
        case 13:
            puts("What's your best subject in school?");
            break;
        case 14:
            puts("Do you believe people are made for each other?");
            break;
        case 15:
            puts("What's your favorite childhood memory?");
            break;
        default :
            puts("invalid input!!!!!!");
    }
}