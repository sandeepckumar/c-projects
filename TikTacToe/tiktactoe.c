#include <stdio.h>
#include <stdlib.h>

#define PLAYER_1 'x'
#define PLAYER_2 'o'
#define NO_WINNER 'N'


#define INVALID_CELL 0xFF

char playground[3][3] = {
    {' ',' ',' ',},
    {' ',' ',' ',},
    {' ',' ',' ',}
};

void render_playground(void);
int get_player_input(void);
char judge(void);

int main(void) {
    int num_empty_cells = 9;
    char winner;
    char current_player = PLAYER_1;
    int choice;
    int msg = 0;

    while (num_empty_cells != 0 ) {
        winner = judge();
        render_playground();
        if (msg = CELL_BUSY) {
            printf("The selected is is already selected. Please select an emtpy cell.\n");
        } else if (msg = INVALID_CELL) {
            printf("The selected cell in invalid. Please try another cell.\n");
        }
        if (winner != NO_WINNER) {
            printf("%c has won the game!\n", winner);
            return 0;
        }
        choice = get_player_input();
        if ((choice == CELL_BUSY) || (choice == INVALID_CELL)) {
            msg = choice;
        } else {
            playground[choice / 10 -1][choice % 10 -1] = current_player;
            current_player = current_player == PLAYER_1 ? PLAYER_2 : PLAYER_1;
            num_empty_cells--;
        }
    }
    
}

void render_playground(void){
    system("clear");
    printf("\n");
    printf(" _  _  _ \n");
    for (int i=0; i<3; i++) {
        printf("| %c | %c | %c |\n", playground[i][0], playground[i][1], playground[i][2]);
    }
    printf(" _  _  _  \n");

}

int get_player_input(void){
    int choice;
    scanf("%d", &choice);
    switch(choice) {
        case 11:
        case 12:
        case 13:
        case 21:
        case 22:
        case 23:
        case 31:
        case 32:
        case 33:
            if (playground[choice / 10 - 1][choice % 10 - 1] != ' ' ) {
                return CELL_BUSY;
            }
            break;
        default:
            return INVALID_CELL;
            break;
    }
    return choice;
}

char judge(void){
    // diagonal
    if ((playground[0][0] == playground[1][1]) && (playground[1][1] == playground[2][2])) {
        if (playground[1][1] != ' ') {
            return playground[0][0];
        }
    }

    if ((playground[0][2] == playground[1][1])  && (playground[1][1] == playground[2][0])) {
        if (playground[1][1] != ' ') {
            return playground[0][2];
        }
    }

    // rows and cols
    for (int i=0; i<3; i++) {
        if ((playground[i][0] == playground[i][1]) && (playground[i][1] == playground[i][2])) {
            if (playground[i][0] != ' ') {
                return playground[i][0];
            }
        }

        if ((playground[0][i] == playground[1][i]) && (playground[1][i] == playground[2][i])) {
            if (playground[0][i] != ' ') {
                return playground[0][i];
            }
        }
    }
    return NO_WINNER;
}