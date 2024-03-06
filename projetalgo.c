#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

struct Team
{
char name[50];
int points,v,bp,bc,n,p,db;
int nextMatch;
int lastScore;
int rank;
int cpt;
};
void Day1(){
    printf("\033[1;31m ________  ________      ___    ___       _____     \n");
printf("|\\   ___ \\|\\   __  \\    |\\  \\  /  /|     / __  \\    \n");
printf("\\ \\  \\_|\\ \\ \\  \\|\\  \\   \\ \\  \\/  / /    |\\/_|\\  \\   \n");
printf(" \\ \\  \\ \\ \\ \\   __  \\   \\ \\    / /     \\|/ \\\\ \\  \\  \n");
printf("  \\ \\  \\_\\\\ \\  \\ \\  \\   \\/  /  /           \\ \\  \\ \n");
printf("   \\ \\_______\\ \\__\\ \\__\\__/  / /              \\ \\__\\\n");
printf("    \\|_______|\\|__|\\|__|\\___/ /                \\|__|\n");
printf("                       \\|___|/                       \n\033[0m");
}
void Day2(){
    printf("\033[1;31m ________  ________      ___    ___       _______     \n");
printf("|\\   ___ \\|\\   __  \\    |\\  \\  /  /|     /  ___  \\    \n");
printf("\\ \\  \\_|\\ \\ \\  \\|\\  \\   \\ \\  \\/  / /    /__/|_/  /|   \n");
printf(" \\ \\  \\ \\\\ \\ \\   __  \\   \\ \\    / /     |__|//  / /   \n");
printf("  \\ \\  \\_\\\\ \\ \\  \\ \\  \\   \\/  /  /          /  /_/__  \n");
printf("   \\ \\_______\\ \\__\\ \\__\\__/  / /           |\\________\\\n");
printf("    \\|_______|\\|__|\\|__|\\___/ /             \\|_______|\n");
printf("                       \\|___|/                         \n\n\033[0m");
}
void Day3(){
    printf("\033[1;31m ________  ________      ___    ___      ________     \n");
printf("|\\   ___ \\|\\   __  \\    |\\  \\  /  /|    |\\_____  \\    \n");
printf("\\ \\  \\_|\\ \\ \\  \\|\\  \\   \\ \\  \\/  / /    \\|____|\\ /_   \n");
printf(" \\ \\  \\ \\\\ \\ \\   __  \\   \\ \\    / /           \\|\\  \\  \n");
printf("  \\ \\  \\_\\\\ \\ \\  \\ \\  \\   \\/  /  /           __\\_\\  \\ \n");
printf("   \\ \\_______\\ \\__\\ \\__\\__/  / /            |\\_______\\\n");
printf("    \\|_______|\\|__|\\|__|\\___/ /             \\|_______|\n");
printf("                       \\|___|/                         \n\n\033[0m");
}
void Day4(){
    printf("\033[1;31m ________  ________      ___    ___      ___   ___     \n");
printf(" |\\   ___ \\|\\   __  \\    |\\  \\  /  /|    |\\  \\ |\\  \\    \n");
printf(" \\ \\  \\_\\ \\ \\  \\|\\  \\   \\ \\  \\/  / /    \\ \\  \\\\ \\  \\   \n");
printf("  \\ \\  \\ \\\\ \\ \\   __  \\   \\ \\    / /      \\ \\______  \\  \n");
printf("   \\ \\  \\_\\\\ \\ \\  \\ \\  \\   \\/  /  /        \\|_____ |\\  \\ \n");
printf("    \\ \\_______\\ \\__\\ \\__\\__/  / /                 \\ \\__\\\n");
printf("     \\|_______|\\|__|\\|__|\\___/ /                   \\|__|\n");
printf("                        \\|___|/                          \n\n\033[0m");
}
void Day5(){
    printf("\033[1;31m ________  ________      ___    ___      ________      \n");
printf("|\\   ___ \\|\\   __  \\    |\\  \\  /  /|    |\\   ____\\     \n");
printf("\\ \\  \\_\\ \\ \\  \\|\\  \\   \\ \\  \\/  / /    \\ \\  \\___|_    \n");
printf(" \\ \\  \\ \\\\ \\ \\   __  \\   \\ \\    / /      \\ \\_____  \\   \n");
printf("  \\ \\  \\_\\\\ \\ \\  \\ \\  \\   \\/  /  /        \\|____|\\  \\  \n");
printf("   \\ \\_______\\ \\__\\ \\__\\__/  / /            ____\\_\\  \\ \n");
printf("    \\|_______|\\|__|\\|__|\\___/ /            |\\_________\\\n");
printf("                       \\|___|/             \\|_________|\n\n\033[0m");
}
void Day6(){
    printf("\033[1;31m ________  ________      ___    ___      ________     \n");
printf("|\\   ___ \\|\\   __  \\    |\\  \\  /  /|    |\\   ____\\    \n");
printf("\\ \\  \\_\\ \\ \\  \\|\\  \\   \\ \\  \\/  / /    \\ \\  \\___|    \n");
printf(" \\ \\  \\ \\\\ \\ \\   __  \\   \\ \\    / /      \\ \\  \\____   \n");
printf("  \\ \\  \\_\\\\ \\ \\  \\ \\  \\   \\/  /  /        \\ \\  ___  \\ \n");
printf("   \\ \\_______\\ \\__\\ \\__\\__/  / /           \\ \\_______\\\n");
printf("    \\|_______|\\|__|\\|__|\\___/ /             \\|_______|\n");
printf("                       \\|___|/                         \n\n\033[0m");
}
void Day7(){
    printf("\033[1;31m ________  ________      ___    ___      ________  \n");
printf("|\\   ___ \\|\\   __  \\    |\\  \\  /  /|    |\\_____  \\ \n");
printf("\\ \\  \\_\\ \\ \\  \\|\\  \\   \\ \\  \\/  / /     \\|___/  /|\n");
printf(" \\ \\  \\ \\\\ \\ \\   __  \\   \\ \\    / /          /  / / \n");
printf("  \\ \\  \\_\\\\ \\ \\  \\ \\  \\   \\/  /  /          /  / /  \n");
printf("   \\ \\_______\\ \\__\\ \\__\\__/  / /           /__/ /   \n");
printf("    \\|_______|\\|__|\\|__|\\___/ /            |__|/    \n");
printf("                       \\|___|/                     \n\n\033[0m");
}
void Day8(){
    printf("\033[1;31m ________  ________      ___    ___      ________     \n");
printf("|\\   ___ \\|\\   __  \\    |\\  \\  /  /|    |\\   __  \\    \n");
printf("\\ \\  \\_\\ \\ \\  \\|\\  \\   \\ \\  \\/  / /    \\ \\  \\|\\  \\   \n");
printf(" \\ \\  \\ \\\\ \\ \\   __  \\   \\ \\    / /      \\ \\   __  \\  \n");
printf("  \\ \\  \\_\\\\ \\ \\  \\ \\  \\   \\/  /  /        \\ \\  \\|\\  \\ \n");
printf("   \\ \\_______\\ \\__\\ \\__\\__/  / /           \\ \\_______\\\n");
printf("    \\|_______|\\|__|\\|__|\\___/ /             \\|_______|\n");
printf("                       \\|___|/                         \n\n\033[0m");
}
void Day9(){
    printf("\033[1;31m ________  ________      ___    ___     ________     \n");
printf("|\\   ___ \\|\\   __  \\    |\\  \\  /  /|    |\  ___  \\    \n");
printf("\\ \\  \\_\\ \\ \\  \\|\\  \\   \\ \\  \\/  / /    \\ \\____   \\   \n");
printf(" \\ \\  \\ \\\\ \\ \\   __  \\   \\ \\    / /      \\|____|\\  \\  \n");
printf("  \\ \\  \\_\\\\ \\ \\  \\ \\  \\   \\/  /  /           __\\_\\  \\ \n");
printf("   \\ \\_______\\ \\__\\ \\__\\__/  / /            |\\_______\\\n");
printf("    \\|_______|\\|__|\\|__|\\___/ /             \\|_______|\n");
printf("                       \\|___|/                         \n\n\033[0m");
}
void Day10(){
    printf("\033[1;31m________  ________      ___    ___       _____  ________     \n");
printf("|\\   ___ \\|\\   __  \\    |\\  \\  /  /|     / __  \\|\\   __  \\    \n");
printf("\\ \\  \\_\\ \\ \\  \\|\\  \\   \\ \\  \\/  / /    |\\/_|\\  \\ \\  \\|\\  \\   \n");
printf(" \\ \\  \\ \\\\ \\ \\   __  \\   \\ \\    / /     \\|/ \\ \\  \\ \\  \\\\\\  \\  \n");
printf("  \\ \\  \\_\\\\ \\ \\  \\ \\  \\   \\/  /  /           \\ \\  \\ \\  \\\\\\  \\ \n");
printf("   \\ \\_______\\ \\__\\ \\__\\__/  / /              \\ \\__\\ \\_______\\\n");
printf("    \\|_______|\\|__|\\|__|\\___/ /                \\|__|\\|_______|\n");
printf("                       \\|___|/                                 \n\n\033[0m");
}
void Day11(){
    printf("\033[1;31m     ,---,                                      ,---,     ,---,\n");
printf("   .'  .' `\\                                 ,`--.' |  ,`--.' |\n");
printf(" ,---.'     \\                               /    /  : /    /  :\n");
printf(" |   |  .`\\  |                             :    |.' ':    |.' '\n");
printf(" :   : |  '  |  ,--.--.        .--,        `----':  |`----':  |\n");
printf(" |   ' '  ;  : /       \\     /_ ./|           '   ' ;   '   ' ;\n");
printf(" '   | ;  .  |.--.  .-. | , ' , ' :           |   | |   |   | |\n");
printf(" |   | :  |  ' \\__\\/ : . ./___/ \\: |           '   : ;   '   : ;\n");
printf(" '   : | /  ;  ,\" .--.; | .  \\  ' |           |   | '   |   | '\n");
printf(" |   | '` ,/  /  /  ,.  |  \\  ;   :           '   : |   '   : |\n");
printf(" ;   :  .'   ;  :   .'   \\  \\  \\  ;           ;   |.'   ;   |.'\n");
printf(" |   ,.'     |  ,     .-./   :  \\  \\          '---'     '---'\n");
printf(" '---'        `--`---'        \\  ' ;\n");
printf("                               `--`\n\n\033[0m");
}
void Day12(){
    printf("\033[1;31m     ,---,                                      ,---,      ,----,  \n");
printf("   .'  .' `\\                                 ,`--.' |    .'   .' \\ \n");
printf(" ,---.'     \\                               /    /  :  ,----,'    |\n");
printf(" |   |  .`\\  |                             :    |.' '  |    :  .  ;\n");
printf(" :   : |  '  |  ,--.--.        .--,        `----':  |  ;    |.'  / \n");
printf(" |   ' '  ;  : /       \\     /_ ./|           '   ' ;  `----'/  ;  \n");
printf(" '   | ;  .  |.--.  .-. | , ' , ' :           |   | |    /  ;  /   \n");
printf(" |   | :  |  ' \\__\\/ : . ./___/ \\: |           '   : ;   ;  /  /-, \n");
printf(" '   : | /  ;  ,\" .--.; | .  \\  ' |           |   | '  /  /  /.`| \n");
printf(" |   | '` ,/  /  /  ,.  |  \\  ;   :           '   : |./__;      : \n");
printf(" ;   :  .'   ;  :   .'   \\  \\  \\  ;           ;   |.'|   :    .'  \n");
printf(" |   ,.'     |  ,     .-./   :  \\  \\          '---'  ;   | .'     \n");
printf(" '---'        `--`---'        \\  ' ;                 `---'        \n");
printf("                              `--`                                \n\n\033[0m");
}
void Day13(){
    printf("\033[1;31m                                                       .--,-``-.\n");
printf("    ,---,                                      ,---, /   /     '.\n");
printf("  .'  .' `\\                                 ,`--.' |/ ../        ;\n");
printf(",---.'     \\                               /    /  :\\ ``\\  .`-    '\n");
printf("|   |  .`\\  |                             :    |.' ' \\___\\/   \\   :\n");
printf(":   : |  '  |  ,--.--.        .--,        `----':  |      \\   :   |\n");
printf("|   ' '  ;  : /       \\     /_ ./|           '   ' ;      /  /   / \n");
printf("'   | ;  .  |.--.  .-. | , ' , ' :           |   | |      \\  \\   \\ \n");
printf("|   | :  |  ' \\__\\/ : . ./___/ \\: |           '   : ;  ___ /   :   |\n");
printf("'   : | /  ;  ,\" .--.; | .  \\  ' |           |   | ' /   /\\   /   :\n");
printf("|   | '` ,/  /  /  ,.  |  \\  ;   :           '   : |/ ,,/  ',--    .\n");
printf(";   :  .'   ;  :   .'   \\  \\  \\  ;           ;   |.'\\ ''\\        ;\n");
printf("|   ,.'     |  ,     .-./   :  \\  \\          '---'   \\   \\     .'\n");
printf("'---'        `--`---'        \\  ' ;                   `--`-,,-'  \n");
printf("                              `--`                               \n\n\033[0m");
}
void Day14(){
    printf("\033[1;31m                                                             ,--,   \n");
printf("    ,---,                                      ,---,      ,--.'|   \n");
printf("  .'  .' `\\                                 ,`--.' |   ,--,  | :  \n");
printf(",---.'     \\                               /    /  :,---.'|  : '  \n");
printf("|   |  .`\\  |                             :    |.' ';   : |  | ;  \n");
printf(":   : |  '  |  ,--.--.        .--,        `----':  ||   | : _' |  \n");
printf("|   ' '  ;  : /       \\     /_ ./|           '   ' ;:   : |.'   \n");
printf("'   | ;  .  |.--.  .-. | , ' , ' :           |   | ||   ' '  ; : \n");
printf("|   | :  |  ' \\__\\/ : . ./___/ \\: |           '   : ;\\   \\  .' . \n");
printf("'   : | /  ;  ,\" .--.; | .  \\  ' |           |   | ' `---`:  | ' \n");
printf("|   | '` ,/  /  /  ,.  |  \\  ;   :           '   : |      '  ; | \n");
printf(";   :  .'   ;  :   .'   \\  \\  \\  ;           ;   |.'      |  : ; \n");
printf("|   ,.'     |  ,     .-./   :  \\  \\          '---'        '  ,/  \n");
printf("'---'        `--`---'        \\  ' ;                       '--'   \n");
printf("                              `--`                                \n\n\033[0m");
}
void Day15(){
    printf("\033[1;31m                                                            ,----,.\n");
printf("                                                         ,'   ,' |\n");
printf("    ,---,                                      ,---,   ,'   .'   |\n");
printf("  .'  .' `\\                                 ,`--.' | ,----.'    .'\n");
printf(",---.'     \\                               /    /  : |    |   .'\n");
printf("|   |  .`\\  |                             :    |.' ' :    :  |--, \n");
printf(":   : |  '  |  ,--.--.        .--,        `----':  | :    |  ;.' \\\n");
printf("|   ' '  ;  : /       \\     /_ ./|           '   ' ; |    |      |\n");
printf("'   | ;  .  |.--.  .-. | , ' , ' :           |   | | `----'.'\\   ;\n");
printf("|   | :  |  ' \\__\\/ : . ./___/ \\: |           '   : ;   __  \\  .  |\n");
printf("'   : | /  ;  ,\" .--.; | .  \\  ' |           |   | ' /   /\\/  /  :\n");
printf("|   | '` ,/  /  /  ,.  |  \\  ;   :           '   : |/ ,,/  ',-   .\n");
printf(";   :  .'   ;  :   .'   \\  \\  \\  ;           ;   |.'\\ ''\\       ; \n");
printf("|   ,.'     |  ,     .-./   :  \\  \\          '---'   \\   \\    .'\n");
printf("'---'        `--`---'        \\  ' ;                   `--`-,-'  \n");
printf("                              `--`                                \n\n\033[0m");
}
void Day16(){
    printf("\033[1;31m     ,---,                                      ,---,            \n");
printf("  .'  .' `\\                                 ,`--.' |    ,---.   \n");
printf(",---.'     \\                               /    /  :   /     \\  \n");
printf("|   |  .`\\  |                             :    |.' '  /    / '  \n");
printf(":   : |  '  |  ,--.--.        .--,        `----':  | .    ' /   \n");
printf("|   ' '  ;  : /       \\     /_ ./|           '   ' ;'    / ;    \n");
printf("'   | ;  .  |.--.  .-. | , ' , ' :           |   | ||   :  \\    \n");
printf("|   | :  |  ' \\__\\/ : . ./___/ \\: |           '   : ;;   |   `. \n");
printf("'   : | /  ;  ,\" .--.; | .  \\  ' |           |   | ''   ;      \\\n");
printf("|   | '` ,/  /  /  ,.  |  \\  ;   :           '   : |'   |  .\\  |\n");
printf(";   :  .'   ;  :   .'   \\  \\  \\  ;           ;   |.'|   :  ';  :\n");
printf("|   ,.'     |  ,     .-./   :  \\  \\          '---'   \\   \\    / \n");
printf("'---'        `--`---'        \\  ' ;                   `---`--`  \n");
printf("                              `--`                              \n\n\033[0m");
}
void Day17(){
    printf("\033[1;31m                                                             ,----,  \n");
printf("                                                           .'   .`|  \n");
printf("    ,---,                                      ,---,    .'   .'   ;  \n");
printf("  .'  .' `\\                                 ,`--.' |  ,---, '    .'\n");
printf(",---.'     \\                               /    /  :  |   :     ./ \n");
printf("|   |  .`\\  |                             :    |.' '  ;   | .'  /  \n");
printf(":   : |  '  |  ,--.--.        .--,        `----':  |  `---' /  ;   \n");
printf("|   ' '  ;  : /       \\     /_ ./|           '   ' ;    /  ;  /    \n");
printf("'   | ;  .  |.--.  .-. | , ' , ' :           |   | |   ;  /  /     \n");
printf("|   | :  |  ' \\__\\/ : . ./___/ \\: |           '   : ;  /  /  /      \n");
printf("'   : | /  ;  ,\" .--.; | .  \\  ' |           |   | './__;  /       \n");
printf("|   | '` ,/  /  /  ,.  |  \\  ;   :           '   : ||   : /        \n");
printf(";   :  .'   ;  :   .'   \\  \\  \\  ;           ;   |.';   |/         \n");
printf("|   ,.'     |  ,     .-./   :  \\  \\          '---'  `---'          \n");
printf("'---'        `--`---'        \\  ' ;                                \n");
printf("                              `--`                                  \n\n\033[0m");
}
void Day18(){
    printf("\033[1;31m                                                        ,---.-,   \n");
printf("                                                      '   ,'  '. \n");
printf("    ,---,                                      ,---, /   /      \\\n");
printf("  .'  .' `\\                                 ,`--.' |.   ;  ,/.  :\n");
printf(",---.'     \\                               /    /  :'   |  | :  ;\n");
printf("|   |  .`\\  |                             :    |.' ''   |  ./   :\n");
printf(":   : |  '  |  ,--.--.        .--,        `----':  ||   :       ,\n");
printf("|   ' '  ;  : /       \\     /_ ./|           '   ' ; \\   \\     / \n");
printf("'   | ;  .  |.--.  .-. | , ' , ' :           |   | |  ;   ,   '\\ \n");
printf("|   | :  |  ' \\__\\/ : . ./___/ \\: |           '   : ; /   /      \\\n");
printf("'   : | /  ;  ,\" .--.; | .  \\  ' |           |   | '.   ;  ,/.  :\n");
printf("|   | '` ,/  /  /  ,.  |  \\  ;   :           '   : |'   |  | :  ;\n");
printf(";   :  .'   ;  :   .'   \\  \\  \\  ;           ;   |.''   |  ./   :\n");
printf("|   ,.'     |  ,     .-./   :  \\  \\          '---'  |   :      / \n");
printf("'---'        `--`---'        \\  ' ;                  \\   \\   .'  \n");
printf("                              `--`                    `---`-'    \n\n\033[0m");
}
void Day19(){
    printf("\033[1;31m ____                            _     __      \n");
printf("/\\  _`\\                        /' \\  /'_ `\\    \n");
printf("\\ \\ \\/\\ \\     __     __  __   /\\_, \\/\\ \\L\\ \\   \n");
printf(" \\ \\ \\ \\ \\  /'__`\\  /\\ \\/\\ \\  \\/_/\\ \\ \\___, \\  \n");
printf("  \\ \\ \\_\\ \\/\\ \\L\\.\\_\\ \\ \\_\\ \\    \\ \\ \\/__,/\\ \\ \n");
printf("   \\ \\____/\\ \\__/\\_\\/`____ \\    \\ \\_\\   \\ \\_\\\n");
printf("    \\/___/  \\/__/\\/_/ `/___/> \\    \\/_/    \\/_/\n");
printf("                         /\\___/                \n");
printf("                         \\/__/                 \n\n\033[0m");
}
struct Team teams[20];
char  NomDeLaLeague[50];
int matchjouer[22][22],day;

void showNews(int n){
    int op;
    int plotted[n];

    for(int i=0;i<n;i++){
        plotted[i] = 0;
    }

for(int i=0;i<n;i++){
    op = teams[i].nextMatch;
    if(op >= 0 && plotted[i] == 0){

    printf("%s %d vs %d %s\n",teams[i].name,teams[i].lastScore,teams[op].lastScore,teams[op].name);
    printf("----------------------------------------------------------------------\n");
    plotted[i] = 1;
    plotted[op] = 1;

    }

}

}




int isDone(int n){

    for(int i=0;i<n;i++){
        for (int j=i+1; j<=n; j++)
        {
            if(day<=matchjouer[i][j]){
                return 0;
            }
        }
    }

    return 1;
}

void resetRank(int n){
    for(int i=0;i<n;i++){
        teams[i].rank = 1;
    }
}

void calculateRank(int n){
    resetRank(n);

        for (int i = 0; i < n-1; i++) {
        for (int j = i+1; j < n; j++) {
            if (teams[i].points < teams[j].points) {
                teams[i].rank++;
            } else if (teams[i].points == teams[j].points) {
                if (teams[i].db < teams[j].db) {
                    teams[i].rank++;
                } else if (teams[i].db == teams[j].db && i < j) {
                    teams[i].rank++;
                } else {
                    teams[j].rank++;
                }
            } else {
                teams[j].rank++;
            }
        }
    }

}

void playMatches(int n){
    int score,op;

    for(int i=0;i<n;i++){
        if(teams[i].nextMatch != -1){
        teams[i].lastScore = rand() % 5;
        }else{
            teams[i].lastScore = -1;
        }
    }

       for(int i=0;i<n;i++){
        op = teams[i].nextMatch;
        if(teams[i].lastScore != -1){
             teams[i].bp=teams[i].bp+teams[i].lastScore;
             teams[i].bc=teams[i].bc+teams[op].lastScore;
             teams[i].db=teams[i].bp-teams[i].bc;
      if (teams[i].lastScore>teams[op].lastScore){
      teams[i].v+=1;                     teams[op].p+=1;
       teams[i].points+=3;
       }
       else if (teams[i].lastScore==teams[op].lastScore){
      teams[i].n+=1;
      teams[i].points+=1;
     }
        }
    }



    calculateRank(n);


}




void chooseOp(int n){
    for(int i=0;i<n;i++){
        for (int j=i+1; j<=n; j++)
        {
            if(matchjouer[i][j] == day){
                if(j==n){
                    teams[i].nextMatch = -1;
                    printf("%s Wont play today\n",teams[i].name);
                }else{
                teams[i].nextMatch = j;
                teams[j].nextMatch = i;

                teams[i].cpt ++;
                teams[j].cpt ++;
                }
            }
        }
    }
    }


void creatematchi(int n){
    int k=2,x;

    if(n%2==0){
    for(int j=1;j<n;j++){
        matchjouer[0][j] = j;
    }

    for(int i=1;i<n;i++){
        for(int j=i+1;j<n;j++){
            x = (matchjouer[i-1][j]+1)%n;
            if(x==0){
                matchjouer[i][j] = 1;
            }else{
                matchjouer[i][j]=x;
            }
        }
    }

    for (int i=1; i<n; i++)
    {
       matchjouer[i][n-1] = k;
        k = k+2;
        if(k>=n){
            k = 1;
        }

    }


    }else{

    for(int j=1;j<n+1;j++){
        matchjouer[0][j] = j;
    }

    for(int i=1;i<n;i++){
        for(int j=i+1;j<n;j++){
            x = (matchjouer[i-1][j]+1)%n;
            if(x==0){
                matchjouer[i][j] = n;
            }else{
                matchjouer[i][j]=x;
            }
        }
    }

    for (int i=1; i<n; i++)
    {
       matchjouer[i][n] = k;
        k = k+2;
        if(k>n){
            k = 1;
        }

    }
    }
}

void newGame(int n){

    for(int i=0;i<n;i++){
        teams[i].rank = 1;
        teams[i].cpt = 0;
    }
    day=1;
    creatematchi(n);
}


void showRank(int n){
    int k=1;
    printf("\n\033[0;36mLeague:                 \033[0m");  puts(NomDeLaLeague);
    printf("\nRank   Name            Mj    V    N    P    BP     BC    DB     POINT \n");
    for(int j=0;j<n;j++){

        for(int i=0;i<n;i++){
            if(teams[i].rank == k){

                printf("%-2d |%-15s  | %-2d | %-3d | %-2d | %-2d | %-3d | %-4d | %-5d | %-4d |\n",teams[i].rank,teams[i].name,teams[i].cpt,teams[i].v,teams[i].n,teams[i].p,teams[i].bp,teams[i].bc,teams[i].db,teams[i].points);
                printf("----------------------------------------------------------------------\n");            }
    }
    k += 1;
    }
}
void champion(int n){
  printf("\033[0;35m       #################################\033[0m\n");
    for(int i = 0; i < n; i++) {
        if(teams[i].rank == 1) {
            printf("\033[0;33m                  *    *    *\n");
            printf("                  ##   ##  ##\n");
            printf("                  ###########\n");
            printf("                  ***********\n\033[0m");

            printf("\033[0;32m     Le champion est ***%s*** avec %d pts \033[0m\n", teams[i].name, teams[i].points);
        }
    }
    printf("\033[0;35m       #################################\033[0m\n");
}

void QualifierLeagueDesChompionnes(int n) {
    printf("\n \033[0;35m      ################################# \n");
    printf("       Équipes qualifiées pour la Ligue des champions         \n");
    for(int i = 0; i < n; i++) {
        if(teams[i].rank == 1 || teams[i].rank == 2 || teams[i].rank == 3) {
            printf("       >> ***%s*** avec %d pts  \n", teams[i].name, teams[i].points);
        }
    }
    printf("       #################################\033[0m\n");
}

void LesEquipesEndanger(int n) {
    printf("\n \033[0;35m      #################################\n");
    printf("       Équipes menacées de descente          \n");
    for(int i = 0; i < n; i++) {
        if(teams[i].rank == n || teams[i].rank == n - 1) {
            printf("       >> ***%s*** avec %d pts \n", teams[i].name, teams[i].points);
        }
    }
    printf("       #################################\033[0m\n");
    printf("\n");
}

int main(){
    int score,n,done = 0;
    char x[50];
    char message[] = " please enter the league name >> ";
    int i;

    for (i = 0; message[i] != '\0'; i++) {
        putchar(message[i]);
        fflush(stdout);
        usleep(50000);  
    }
    
    gets(NomDeLaLeague);
    while(1){
    
     char message2[] = "\n Please type how many teams would you like to enter >>\t"; 
    for (i = 0; message2[i] != '\0'; i++) {
        putchar(message2[i]);
        fflush(stdout);
        usleep(50000);
    }
    scanf("%d",&n);
    if(n >=10 && n<=20){
        break;
    }
    }

    for(int i=0;i<n;i++){
    printf("\n%d# Team name >>",i+1);
    scanf("%s",&x);
    strcpy(teams[i].name,x);
    }

    newGame(n);

    printf("\n");
    srand(time(NULL));
    while (done ==0)
    {

    char message3[] = "Press any key to play match day\n";
    

    for (i = 0; message3[i] != '\0'; i++) {
        putchar(message3[i]);
        fflush(stdout);
        usleep(20000);  
    }
    scanf("%c",x);
    printf("\n");
    printf("Day %d :\n",day);
    switch (day){
        case 1 : Day1() ; break;
        case 2 :Day2() ;break;
        case 3 :Day3() ;break;
        case 4 :Day4() ;break;
        case 5 :Day5() ;break;
        case 6 :Day6() ;break;
        case 7 :Day7() ;break;
        case 8 :Day8() ;break;
        case 9 :Day9() ;break;
        case 10 :Day10() ;break;
        case 11 :Day11() ;break;
        case 12 :Day12() ;break;
        case 13 :Day13() ;break;
        case 14 :Day14() ;break;
        case 15 :Day15() ;break;
        case 16 :Day16() ;break;
        case 17 :Day17() ;break;
        case 18 :Day18() ;break;
        case 19 :Day19() ;break;
        
    }
    printf("\n");
    chooseOp(n);
    playMatches(n);
    day++;
    done = isDone(n);
    showNews(n);
    printf("###########################\n");
    showRank(n);
    }
    champion(n);
    QualifierLeagueDesChompionnes(n);
    LesEquipesEndanger (n);
system("Pause");
printf("\033[1;33m                               77777                          17777771                              \n");
printf("                            17566666371                      719966696211                           \n");
printf("                          11665680008413                    115000000969213                         \n");
printf("                         15958000   0811                    7100     0009413                        \n");
printf("                        136400       4330                  0332         0951                        \n");
printf("                        1540         2290                   8233         9415                       \n");
printf("                       3350        35590                    095233       0433                       \n");
printf("                       1350     3352480                      0095351      431                       \n");
printf("                       134     1556000                         0084333    8219                      \n");
printf("                      6139    3540005213445211322665255466454225900633    0316                      \n");
printf("                      6139    315054666966962331244314554446889964 412    0339                      \n");
printf("                      9136    9236665427712523771337722222325125485328    9339                      \n");
printf("                       324    0051542421264452333333325554466665523400    5238                      \n");
printf("                       225     00622445525522555444455522255546426900     5220                      \n");
printf("                       4358      8223254323113333223322254666654559       525                       \n");
printf("                       0224     332325523313211333251154113252255255      229                       \n");
printf("                       0525  554467729942233332352522329114694226531326  5250                       \n");
printf("                        4220 4469953999966111125554545293499996269989560 5340                       \n");
printf("                        9255 6669953999944117755569555423469594266989540 226                        \n");
printf("                        05250699986316966577772224446526349998954988954 4220                       \n");
printf("                         9359869894315966277714546659528228899666888444 5240                       \n");
printf("                         0325046882355666411124440858429229999496859249 258                        \n");
printf("                          6166964863426666455462499442262566964669955404540                       \n");
printf("                          023685289244466464546546644544466696666986669550                        \n");
printf("                           63496599424469664446444444544669966669986696540                        \n");
printf("                           0526856962446996646999999455666996699698668448                         \n");
printf("                            054966994446999644699996455669999996699496490                         \n");
printf("                             6449699644699996446999652566999999669649460                          \n");
printf("                             0446669944699996454696455469999999669646290                          \n");
printf("                              83546996469999965546645549999999969646250                           \n");
printf("                               032499646999996554445554999999999964250                            \n");
printf("                               094999966699996455445556999999999949400                            \n");
printf("                                0846999469999945544554699999999964480                             \n");
printf("                                 00899966999996444444499999999994000                              \n");
printf("                                   0999969999964444446999999999660                                 \n");
printf("                                    09999999999666666999888999940                                  \n");
printf("                                     099999999999669998888899960                                   \n");
printf("                                      89999999999999888888899600                                   \n");
printf("                                       069999998988888888899690                                    \n");
printf("                                       00999999888888888889680                                     \n");
printf("                                        086999996464688889660                                      \n");
printf("                                         8694662259525699990                                       \n");
printf("                                          099969656469999900                                       \n");
printf("                                           0696642956999600                                        \n");
printf("                                           665353163555224                                         \n");
printf("                                          449444522255444425                                       \n");
printf("                                      445254455663234664444455225                                  \n\033[0m");
printf("\n");
 printf("by Cherfaoui Amine And Rouag Noufel and tifahi Mohamed") ;
 
}

