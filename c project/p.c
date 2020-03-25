#include <stdlib.h>
#include <curses.h>
#include <stdio.h>
#include <unistd.h>
#include <time.h>
#define YEL   "\x1B[33m"
#define RED   "\x1B[31m"
#define GRN   "\x1B[32m"
#define RESET "\x1B[0m"

char choice,name[20];
void play_again(),winner();
int count_money = 0;
static char money [16][15] = {"$0","$100","$200","$300","$500","$1,000","$2,000","$4,000","$8,000","$16,000","$25,000","50,000","$100,000","$250,000","$500,000","$1 MILLION"};

void Classic(char  money[16][15])
{   char choice;
    system("clear");
    printf(RED"\n\n\n================================================================================\n"RESET);
    printf(YEL"\t\t\t\tREADY\n");
    printf(RED"================================================================================\n"RESET);
    sleep(1);

    system("clear");
    printf(RED"\n\n\n================================================================================\n"RESET);
    printf(YEL"\t\t\t\tLET'S GO!!!!\n");
    printf(RED"================================================================================\n"RESET);
    sleep(1);

    system("clear");
    int count_q,Q[15],precount_money = 1;
    bool question[20]={};
    time_t t;
    srand((unsigned)time(&t));
    //random
    for(count_q=0; count_q<15; count_q++)
    {   int random = rand()%20;
        if(!question[random]) {
            Q[count_q]= random;}
        else //check the same
            count_q--;
        question[random]=1;
    }
    //swap
    for (int i = 0; i < 15 - 1; i++) {
        for (int j = 0; j < 15-i - 1; j++) {
            if(Q[j]  > Q[j+1]) {
                int temp = Q[j];
                Q[j] = Q[j+1];
                Q[j+1]  = temp;
            }
        }
    }
    
    for(count_q=0; count_q<15; count_q++)
    {   switch(Q[count_q])
        {
            case 0: while(1){
                        getchar();
                        system("clear");
                        printf(RED"--------------------------------------------------------------------------------\n"RESET);
                        printf("For %s > What is the first letter in the English alphabet?\n",money[precount_money]);
                        printf(RED"--------------------------------------------------------------------------------\n"RESET);
                        printf("A.C\t\tB.D\n\nC.A\t\tD.B\n");
                        printf(RED"--------------------------------------------------------------------------------"RESET);
                        printf(YEL"%s'S BANK : %s\n"RESET,name,money[count_money]);
                        printf(RED"--------------------------------------------------------------------------------"RESET);
                        scanf("%c",&choice);
                        if (toupper(choice)=='C')
                        {   printf(GRN"\nCORRECT!!!\n"RESET);
                            getchar();
                            count_money += 1;
                            printf("%s's bank increased to %s." ,name,money[count_money]);
                            sleep(1);
                            precount_money +=1;
                            if (precount_money == 16) {
                                winner();
                            }
                            break;
                        }
                        else if(toupper(choice) == 'A' ||toupper(choice) == 'B' ||toupper(choice) == 'D' )
                        {
                            printf(RED"\nWRONG!!!\n"RESET);
                            getchar();
                            getchar();
                            play_again();
                            break;
                        }
                        else
                        {
                            system("clear");
                            printf(RED"Invalid input!!!!\n"RESET);
                            sleep(1);
                        }
            }break;

            case 1:while(1){
                    getchar();
                    system("clear");
                    printf(RED"--------------------------------------------------------------------------------\n"RESET);
                    printf("For %s> By definition, an egg-white omelet is made by removing what from the eggs?\n",money[precount_money]);
                    printf(RED"--------------------------------------------------------------------------------\n"RESET);
                    printf("A.Grease\tB.Whites\n\nC.Yolks\t\tD.Fun\n");
                    printf(RED"--------------------------------------------------------------------------------"RESET);
                    printf(YEL"%s'S BANK : %s\n"RESET,name,money[count_money]);
                    printf(RED"--------------------------------------------------------------------------------"RESET);
                    scanf("%c",&choice);
                    if (toupper(choice)=='C')
                    {
                        printf(GRN"\nCORRECT!!!\n"RESET);
                        getchar();
                        count_money += 1;
                        printf("%s's bank increased to %s." ,name,money[count_money]);
                        sleep(1);
                        precount_money +=1;
                        if (precount_money == 16) {
                            winner();
                        }
                        break;
                    }
                    else if(toupper(choice) == 'A' ||toupper(choice) == 'B' ||toupper(choice) == 'D' )
                    {
                        printf(RED"\nWRONG!!!\n"RESET);
                        getchar();
                        getchar();
                        play_again();
                        break;
                    }
                    else
                    {
                        system("clear");
                        printf(RED"Invalid input!!!!\n"RESET);
                        sleep(1);
                    }
            }break;
            case 2:while(1){
                getchar();
                system("clear");
                printf(RED"--------------------------------------------------------------------------------\n"RESET);
                printf("For %s > Something that sets off great disaster is said to be what 'that breaks the camel's back'?\n",money[precount_money]);
                printf(RED"--------------------------------------------------------------------------------\n"RESET);
                printf("A.Sheik\t\tB.Straw\n\nC.Saddle\tD.Chiropractor\n");
                printf(RED"--------------------------------------------------------------------------------"RESET);
                printf(YEL"%s'S BANK : %s\n"RESET,name,money[count_money]);
                printf(RED"--------------------------------------------------------------------------------"RESET);
                scanf("%c",&choice);
                if (toupper(choice)=='B')
                {
                    printf(GRN"\nCORRECT!!!\n"RESET);
                    getchar();
                    count_money += 1;
                    printf("%s's bank increased to %s." ,name,money[count_money]);
                    sleep(1);
                    precount_money +=1;
                    if (precount_money == 16) {
                        winner();
                    }
                    break;
                }
                else if(toupper(choice) == 'A' ||toupper(choice) == 'C' ||toupper(choice) == 'D' )
                {
                    printf(RED"\nWRONG!!!\n"RESET);
                    getchar();
                    getchar();
                    play_again();
                    break;
                }
                else
                {
                    system("clear");
                    printf(RED"Invalid input!!!!\n"RESET);
                    sleep(1);
                }
            }break;
            case 3:while(1){
                getchar();
                system("clear");
                printf(RED"--------------------------------------------------------------------------------\n"RESET);
                printf("For %s > According to the title of a 1965 Dean Martin song, 'You're Nobody 'Til Somebody' what?\n",money[precount_money]);
                printf(RED"--------------------------------------------------------------------------------\n"RESET);
                printf("A.Dumbs you\t\tB.Mugs you\n\nC.Loves you\t\tD.Casts you in a sitcom\n");
                printf(RED"--------------------------------------------------------------------------------"RESET);
                printf(YEL"%s'S BANK : %s\n"RESET,name,money[count_money]);
                printf(RED"--------------------------------------------------------------------------------"RESET);
                scanf("%c",&choice);
                if (toupper(choice)=='C')
                {
                    printf(GRN"\nCORRECT!!!\n"RESET);
                    getchar();
                    count_money += 1;
                    printf("%s's bank increased to %s." ,name,money[count_money]);
                    sleep(1);
                    precount_money +=1;
                    if (precount_money == 16) {
                        winner();
                    }
                    break;
                }
                else if(toupper(choice) == 'A' ||toupper(choice) == 'B' ||toupper(choice) == 'D' )
                {
                    printf(RED"\nWRONG!!!\n"RESET);
                    getchar();
                    getchar();
                    play_again();
                    break;
                }
                else
                {
                    system("clear");
                    printf(RED"Invalid input!!!!\n"RESET);
                    sleep(1);
                }
            }break;
            case 4:while(1){
                getchar();
                system("clear");
                printf(RED"--------------------------------------------------------------------------------\n"RESET);
                printf("For %s > Rounding the number 263 to the nearest hundred results in what number?\n",money[precount_money]);
                printf(RED"--------------------------------------------------------------------------------\n"RESET);
                printf("A.200\t\tB.256\n\nC.1000\t\tD.300\n");
                printf(RED"--------------------------------------------------------------------------------"RESET);
                printf(YEL"%s'S BANK : %s\n"RESET,name,money[count_money]);
                printf(RED"--------------------------------------------------------------------------------"RESET);
                scanf("%c",&choice);
                if (toupper(choice)=='D')
                {
                    printf(GRN"\nCORRECT!!!\n"RESET);
                    getchar();
                    count_money += 1;
                    printf("%s's bank increased to %s." ,name,money[count_money]);
                    sleep(1);
                    precount_money +=1;
                    if (precount_money == 16) {
                        winner();
                    }
                    break;
                }
                else if(toupper(choice) == 'A' ||toupper(choice) == 'B' ||toupper(choice) == 'C' )
                {
                    printf(RED"\nWRONG!!!\n"RESET);
                    getchar();
                    getchar();
                    play_again();
                    break;
                }
                else
                {
                    system("clear");
                    printf(RED"Invalid input!!!!\n"RESET);
                    sleep(1);
                }
            }break;
            case 5:while(1){
                getchar();
                system("clear");
                printf(RED"--------------------------------------------------------------------------------\n"RESET);
                printf("For %s > Pediatricians specialize in treating whom?\n",money[precount_money]);
                printf(RED"--------------------------------------------------------------------------------\n"RESET);
                printf("A.Children\t\tB.Pets\n\nC.Veterans\t\tD.Bycyclists\n");
                printf(RED"--------------------------------------------------------------------------------"RESET);
                printf(YEL"%s'S BANK : %s\n"RESET,name,money[count_money]);
                printf(RED"--------------------------------------------------------------------------------"RESET);
                scanf("%c",&choice);
                if (toupper(choice)=='A')
                {
                    printf(GRN"\nCORRECT!!!\n"RESET);
                    getchar();
                    count_money += 1;
                    printf("%s's bank increased to %s." ,name,money[count_money]);
                    sleep(1);
                    precount_money +=1;
                    if (precount_money == 16) {
                        winner();
                    }
                    break;
                }
                else if(toupper(choice) == 'C' ||toupper(choice) == 'B' ||toupper(choice) == 'D' )
                {
                    printf(RED"\nWRONG!!!\n"RESET);
                    getchar();
                    getchar();
                    play_again();
                    break;
                }
                else
                {
                    system("clear");
                    printf(RED"Invalid input!!!!\n"RESET);
                    sleep(1);
                }
            }break;
            case 6:while(1){
                getchar();
                system("clear");
                printf(RED"--------------------------------------------------------------------------------\n"RESET);
                printf("For %s > The art of arranging and gluing images and objects to a surface is called what?\n",money[precount_money]);
                printf(RED"--------------------------------------------------------------------------------\n"RESET);
                printf("A.Stenciling\t\tB.Collage\n\nC.Embossing\t\tD.Linocut\n");
                printf(RED"--------------------------------------------------------------------------------"RESET);
                printf(YEL"%s'S BANK : %s\n"RESET,name,money[count_money]);
                printf(RED"--------------------------------------------------------------------------------"RESET);
                scanf("%c",&choice);
                if (toupper(choice)=='B')
                {
                    printf(GRN"\nCORRECT!!!\n"RESET);
                    getchar();
                    count_money += 1;
                    printf("%s's bank increased to %s." ,name,money[count_money]);
                    sleep(1);
                    precount_money +=1;
                    if (precount_money == 16) {
                        winner();
                    }
                    break;
                }
                else if(toupper(choice) == 'A' ||toupper(choice) == 'C' ||toupper(choice) == 'D' )
                {
                    printf(RED"\nWRONG!!!\n"RESET);
                    getchar();
                    getchar();
                    play_again();
                    break;
                }
                else
                {
                    system("clear");
                    printf(RED"Invalid input!!!!\n"RESET);
                    sleep(1);
                }
            }break;
            case 7:while(1){
                getchar();
                system("clear");
                printf(RED"--------------------------------------------------------------------------------\n"RESET);
                printf("For %s > Though he can't spin the basketball as well as Meadowlark Laemon could,Pope Francis was still named an honorary member of what team in 2015?\n",money[precount_money]);
                printf(RED"--------------------------------------------------------------------------------\n"RESET);
                printf("A.Boston Red Sox\t\tB.Seattle Seahawks\n\nC.Montreal Canadians\t\tD.Harlem Globetrotters\n");
                printf(RED"--------------------------------------------------------------------------------"RESET);
                printf(YEL"%s'S BANK : %s\n"RESET,name,money[count_money]);
                printf(RED"--------------------------------------------------------------------------------"RESET);
                scanf("%c",&choice);
                if (toupper(choice)=='D')
                {
                    printf(GRN"\nCORRECT!!!\n"RESET);
                    getchar();
                    count_money += 1;
                    printf("%s's bank increased to %s." ,name,money[count_money]);
                    sleep(1);
                    precount_money +=1;
                    if (precount_money == 16) {
                        winner();
                    }
                    break;
                }
                else if(toupper(choice) == 'A' ||toupper(choice) == 'B' ||toupper(choice) == 'C' )
                {
                    printf(RED"\nWRONG!!!\n"RESET);
                    getchar();
                    getchar();
                    play_again();
                    break;
                }
                else
                {
                    system("clear");
                    printf(RED"Invalid input!!!!\n"RESET);
                    sleep(1);
                }
            }break;
            case 8:while(1){
                getchar();
                system("clear");
                printf(RED"--------------------------------------------------------------------------------\n"RESET);
                printf("For %s > In the \"Road Runner and Coyote\" cartoons, what famous sound does the Road Runner make?\n",money[precount_money]);
                printf(RED"--------------------------------------------------------------------------------\n"RESET);
                printf("A.Beep! Beep!\t\tB.Vroom! Vroom!\n\nC.Ping! Ping!\t\tD.Ooga! Ooga!\n");
                printf(RED"--------------------------------------------------------------------------------"RESET);
                printf(YEL"%s'S BANK : %s\n"RESET,name,money[count_money]);
                printf(RED"--------------------------------------------------------------------------------"RESET);
                scanf("%c",&choice);
                if (toupper(choice)=='A')
                {
                    printf(GRN"\nCORRECT!!!\n"RESET);
                    getchar();
                    count_money += 1;
                    printf("%s's bank increased to %s." ,name,money[count_money]);
                    sleep(1);
                    precount_money +=1;
                    if (precount_money == 16) {
                        winner();
                    }
                    break;
                }
                else if(toupper(choice) == 'C' ||toupper(choice) == 'B' ||toupper(choice) == 'D' )
                {
                    printf(RED"\nWRONG!!!\n"RESET);
                    getchar();
                    getchar();
                    play_again();
                    break;
                }
                else
                {
                    system("clear");
                    printf(RED"Invalid input!!!!\n"RESET);
                    sleep(1);
                }
            }break;
            case 9:while(1){
                getchar();
                system("clear");
                printf(RED"--------------------------------------------------------------------------------\n"RESET);
                printf("For %s > Which of these poets was called Percy?\n",money[precount_money]);
                printf(RED"--------------------------------------------------------------------------------\n"RESET);
                printf("A.Byron\t\tB.Keats\n\nC.Auden\t\tD.Shelley\n");
                printf(RED"--------------------------------------------------------------------------------"RESET);
                printf(YEL"%s'S BANK : %s\n"RESET,name,money[count_money]);
                printf(RED"--------------------------------------------------------------------------------"RESET);
                scanf("%c",&choice);
                if (toupper(choice)=='D')
                {
                    printf(GRN"\nCORRECT!!!\n"RESET);
                    getchar();
                    count_money += 1;
                    printf("%s's bank increased to %s." ,name,money[count_money]);
                    sleep(1);
                    precount_money +=1;
                    if (precount_money == 16) {
                        winner();
                    }
                    break;
                }
                else if(toupper(choice) == 'A' ||toupper(choice) == 'B' ||toupper(choice) == 'C' )
                {
                    printf(RED"\nWRONG!!!\n"RESET);
                    getchar();
                    getchar();
                    play_again();
                    break;
                }
                else
                {
                    system("clear");
                    printf(RED"Invalid input!!!!\n"RESET);
                    sleep(1);
                }
            }break;
            case 10:while(1){
                getchar();
                system("clear");
                printf(RED"--------------------------------------------------------------------------------\n"RESET);
                printf("For %s > Whose autobiography has the title 'Long Walk To Freedom'?\n",money[precount_money]);
                printf(RED"--------------------------------------------------------------------------------\n"RESET);
                printf("A.Ranulph Fiennes\t\tB.Nelson Mandela\n\nC.Mikhail Gorbachev\t\tD.Mother Teresa\n");
                printf(RED"--------------------------------------------------------------------------------"RESET);
                printf(YEL"%s'S BANK : %s\n"RESET,name,money[count_money]);
                printf(RED"--------------------------------------------------------------------------------"RESET);
                scanf("%c",&choice);
                if (toupper(choice)=='B')
                {
                    printf(GRN"\nCORRECT!!!\n"RESET);
                    getchar();
                    count_money += 1;
                    printf("%s's bank increased to %s." ,name,money[count_money]);
                    sleep(1);
                    precount_money +=1;
                    if (precount_money == 16) {
                        winner();
                    }
                    break;
                }
                else if(toupper(choice) == 'A' ||toupper(choice) == 'C' ||toupper(choice) == 'D' )
                {
                    printf(RED"\nWRONG!!!\n"RESET);
                    getchar();
                    getchar();
                    play_again();
                    break;
                }
                else
                {
                    system("clear");
                    printf(RED"Invalid input!!!!\n"RESET);
                    sleep(1);
                }
            }break;
            case 11:while(1){
                getchar();
                system("clear");
                printf(RED"--------------------------------------------------------------------------------\n"RESET);
                printf("For %s > Who was Britain's first astronaut?\n",money[precount_money]);
                printf(RED"--------------------------------------------------------------------------------\n"RESET);
                printf("A.Sally Ride\t\tB.Heather Taylor\n\nC.Helen Sharman\t\tD.Michale Foale\n");
                printf(RED"--------------------------------------------------------------------------------"RESET);
                printf(YEL"%s'S BANK : %s\n"RESET,name,money[count_money]);
                printf(RED"--------------------------------------------------------------------------------"RESET);
                scanf("%c",&choice);
                if (toupper(choice)=='C')
                {
                    printf(GRN"\nCORRECT!!!\n"RESET);
                    getchar();
                    count_money += 1;
                    printf("%s's bank increased to %s." ,name,money[count_money]);
                    sleep(1);
                    precount_money +=1;
                    if (precount_money == 16) {
                        winner();
                    }
                    break;
                }
                else if(toupper(choice) == 'A' ||toupper(choice) == 'B' ||toupper(choice) == 'D' )
                {
                    printf(RED"\nWRONG!!!\n"RESET);
                    getchar();
                    getchar();
                    play_again();
                    break;
                }
                else
                {
                    system("clear");
                    printf(RED"Invalid input!!!!\n"RESET);
                    sleep(1);
                }
            }break;
            case 12:while(1){
                getchar();
                system("clear");
                printf(RED"--------------------------------------------------------------------------------\n"RESET);
                printf("For %s > Which of these is another word for 'water divining'?\n",money[precount_money]);
                printf(RED"--------------------------------------------------------------------------------\n"RESET);
                printf("A.Dowsing\t\tB.Panning\n\nC.Prospecting\t\tD.Tapping\n");
                printf(RED"--------------------------------------------------------------------------------"RESET);
                printf(YEL"%s'S BANK : %s\n"RESET,name,money[count_money]);
                printf(RED"--------------------------------------------------------------------------------"RESET);
                scanf("%c",&choice);
                if (toupper(choice)=='A')
                {
                    printf(GRN"\nCORRECT!!!\n"RESET);
                    getchar();
                    count_money += 1;
                    printf("%s's bank increased to %s." ,name,money[count_money]);
                    sleep(1);
                    precount_money +=1;
                    if (precount_money == 16) {
                        winner();
                    }
                    break;
                }
                else if(toupper(choice) == 'C' ||toupper(choice) == 'B' ||toupper(choice) == 'D' )
                {
                    printf(RED"\nWRONG!!!\n"RESET);
                    getchar();
                    getchar();
                    play_again();
                    break;
                }
                else
                {
                    system("clear");
                    printf(RED"Invalid input!!!!\n"RESET);
                    sleep(1);
                }
            }break;
            case 13:while(1){
                getchar();
                system("clear");
                printf(RED"--------------------------------------------------------------------------------\n"RESET);
                printf("For %s > What name is given to a dessert made of egg yolks, sugar and Marsala wine?\n",money[precount_money]);
                printf(RED"--------------------------------------------------------------------------------\n"RESET);
                printf("A.Tiramisu\t\tB.Zabaglione\n\nC.Mascarpone\t\tD.Amaretti\n");
                printf(RED"--------------------------------------------------------------------------------"RESET);
                printf(YEL"%s'S BANK : %s\n"RESET,name,money[count_money]);
                printf(RED"--------------------------------------------------------------------------------"RESET);
                scanf("%c",&choice);
                if (toupper(choice)=='B')
                {
                    printf(GRN"\nCORRECT!!!\n"RESET);
                    getchar();
                    count_money += 1;
                    printf("%s's bank increased to %s." ,name,money[count_money]);
                    sleep(1);
                    precount_money +=1;
                    if (precount_money == 16) {
                        winner();
                    }
                    break;
                }
                else if(toupper(choice) == 'C' ||toupper(choice) == 'A' ||toupper(choice) == 'D' )
                {
                    printf(RED"\nWRONG!!!\n"RESET);
                    getchar();
                    getchar();
                    play_again();
                    break;
                }
                else
                {
                    system("clear");
                    printf(RED"Invalid input!!!!\n"RESET);
                    sleep(1);
                }
            }break;
            case 14:while(1){
                getchar();
                system("clear");
                printf(RED"--------------------------------------------------------------------------------\n"RESET);
                printf("For %s > In the TV sitcom 'Are You Being Served?', what was Captain Peacock's first name?\n",money[precount_money]);
                printf(RED"--------------------------------------------------------------------------------\n"RESET);
                printf("A.Trevor\t\tB.Arthur\n\nC.Stephen\t\tD.David\n");
                printf(RED"--------------------------------------------------------------------------------"RESET);
                printf(YEL"%s'S BANK : %s\n"RESET,name,money[count_money]);
                printf(RED"--------------------------------------------------------------------------------"RESET);
                scanf("%c",&choice);
                if (toupper(choice)=='C')
                {
                    printf(GRN"\nCORRECT!!!\n"RESET);
                    getchar();
                    count_money += 1;
                    printf("%s's bank increased to %s." ,name,money[count_money]);
                    sleep(1);
                    precount_money +=1;
                    if (precount_money == 16) {
                        winner();
                    }
                    break;
                }
                else if(toupper(choice) == 'A' ||toupper(choice) == 'B' ||toupper(choice) == 'D' )
                {
                    printf(RED"\nWRONG!!!\n"RESET);
                    getchar();
                    getchar();
                    play_again();
                    break;
                }
                else
                {
                    system("clear");
                    printf(RED"Invalid input!!!!\n"RESET);
                    sleep(1);
                }
            }break;
            case 15:while(1){
                getchar();
                system("clear");
                printf(RED"--------------------------------------------------------------------------------\n"RESET);
                printf("For %s > Which make of car has won the most Le Mans 24-hour races?\n",money[precount_money]);
                printf(RED"--------------------------------------------------------------------------------\n"RESET);
                printf("A.Ferrari\tB.Porsche\n\nC.Ford\t\tD.Jaguar\n");
                printf(RED"--------------------------------------------------------------------------------"RESET);
                printf(YEL"%s'S BANK : %s\n"RESET,name,money[count_money]);
                printf(RED"--------------------------------------------------------------------------------"RESET);
                scanf("%c",&choice);
                if (toupper(choice)=='B')
                {
                    printf(GRN"\nCORRECT!!!\n"RESET);
                    getchar();
                    count_money += 1;
                    printf("%s's bank increased to %s." ,name,money[count_money]);
                    sleep(1);
                    precount_money +=1;
                    if (precount_money == 16) {
                        winner();
                    }
                    break;
                }
                else if(toupper(choice) == 'A' ||toupper(choice) == 'C' ||toupper(choice) == 'D' )
                {
                    printf(RED"\nWRONG!!!\n"RESET);
                    getchar();
                    getchar();
                    play_again();
                    break;
                }
                else
                {
                    system("clear");
                    printf(RED"Invalid input!!!!\n"RESET);
                    sleep(1);
                }
            }break;
            case 16:while(1){
                getchar();
                system("clear");
                printf(RED"--------------------------------------------------------------------------------\n"RESET);
                printf("For %s > Who played the villain in the James Bond film 'Die Another Day'?\n",money[precount_money]);
                printf(RED"--------------------------------------------------------------------------------\n"RESET);
                printf("A.Sam West\t\tB.Toby Stephens\n\nC.Paul McGann\t\tD.Greg Wise\n");
                printf(RED"--------------------------------------------------------------------------------"RESET);
                printf(YEL"%s'S BANK : %s\n"RESET,name,money[count_money]);
                printf(RED"--------------------------------------------------------------------------------"RESET);
                scanf("%c",&choice);
                if (toupper(choice)=='B')
                {
                    printf(GRN"\nCORRECT!!!\n"RESET);
                    getchar();
                    count_money += 1;
                    printf("%s's bank increased to %s." ,name,money[count_money]);
                    sleep(1);
                    precount_money +=1;
                    if (precount_money == 16) {
                        winner();
                    }
                    break;
                }
                else if(toupper(choice)== 'A' ||toupper(choice) == 'C' ||toupper(choice) == 'D' )
                {
                    printf(RED"\nWRONG!!!\n"RESET);
                    getchar();
                    getchar();
                    play_again();
                    break;
                }
                else
                {
                    system("clear");
                    printf(RED"Invalid input!!!!\n"RESET);
                    sleep(1);
                }
            }break;
            case 17:while(1){
                getchar();
                system("clear");
                printf(RED"--------------------------------------------------------------------------------\n"RESET);
                printf("For %s > In 1912, former US President Theodore Roosevelt was a candidate for which political party?\n",money[precount_money]);
                printf(RED"--------------------------------------------------------------------------------\n"RESET);
                printf("A.Bull Moose\t\tB.Bull Dog\n\nC.Bull Elephant\t\tD.Bull Frog\n");
                printf(RED"--------------------------------------------------------------------------------"RESET);
                printf(YEL"%s'S BANK : %s\n"RESET,name,money[count_money]);
                printf(RED"--------------------------------------------------------------------------------"RESET);
                scanf("%c",&choice);
                if (toupper(choice)=='A')
                {
                    printf(GRN"\nCORRECT!!!\n"RESET);
                    getchar();
                    count_money += 1;
                    printf("%s's bank increased to %s." ,name,money[count_money]);
                    sleep(1);
                    precount_money +=1;
                    if (precount_money == 16) {
                        winner();
                    }
                    break;
                }
                else if(toupper(choice) == 'C' ||toupper(choice) == 'B' ||toupper(choice) == 'D' )
                {
                    printf(RED"\nWRONG!!!\n"RESET);
                    getchar();
                    getchar();
                    play_again();
                    break;
                }
                else
                {
                    system("clear");
                    printf(RED"Invalid input!!!!\n"RESET);
                    sleep(1);
                }
            }break;
            case 18:while(1){
                getchar();
                system("clear");
                printf(RED"--------------------------------------------------------------------------------\n"RESET);
                printf("For %s > Who played the villain in the James Bond film 'Die Another Day'?\n",money[precount_money]);
                printf(RED"--------------------------------------------------------------------------------\n"RESET);
                printf("A.Sam West\t\tB.Toby Stephens\n\nC.Paul McGann\t\tD.Greg Wise\n");
                printf(RED"--------------------------------------------------------------------------------"RESET);
                printf(YEL"%s'S BANK : %s\n"RESET,name,money[count_money]);
                printf(RED"--------------------------------------------------------------------------------"RESET);
                scanf("%c",&choice);
                if (toupper(choice)=='B')
                {
                    printf(GRN"\nCORRECT!!!\n"RESET);
                    getchar();
                    count_money += 1;
                    printf("%s's bank increased to %s." ,name,money[count_money]);
                    sleep(1);
                    precount_money +=1;
                    if (precount_money == 16) {
                        winner();
                    }
                    break;
                }
                else if(toupper(choice) == 'A' ||toupper(choice) == 'C' ||toupper(choice) == 'D' )
                {
                    printf(RED"\nWRONG!!!\n"RESET);
                    getchar();
                    getchar();
                    play_again();
                    break;
                }
                else
                {
                    system("clear");
                    printf(RED"Invalid input!!!!\n"RESET);
                    sleep(1);
                }
            }break;
            case 19:
                system("clear");
                printf(RED"--------------------------------------------------------------------------------\n"RESET);
                printf("For %s > Because it can absorb radioactive material,which of these is commonly used as a symbol for nuclear disarmament?\n",money[precount_money]);
                printf(RED"--------------------------------------------------------------------------------\n"RESET);
                printf("A.Sunflower\tB.Redwood\n\nC.Beet\t\tD.Seaweed\n");
                printf(RED"--------------------------------------------------------------------------------"RESET);
                printf(YEL"%s'S BANK : %s\n"RESET,name,money[count_money]);
                printf(RED"--------------------------------------------------------------------------------"RESET);
                scanf("%c",&choice);
                if (toupper(choice)=='A')
                {
                    printf(GRN"\nCORRECT!!!\n"RESET);
                    getchar();
                    count_money += 1;
                    printf("%s's bank increased to %s." ,name,money[count_money]);
                    sleep(1);
                    precount_money +=1;
                    if (precount_money == 16) {
                        winner();
                    }
                    break;
                }
                else if(toupper(choice) == 'C' ||toupper(choice) == 'B' ||toupper(choice) == 'D' )
                {
                    printf(RED"\nWRONG!!!\n"RESET);
                    getchar();
                    getchar();
                    play_again();
                    break;
                }
                else
                {
                    system("clear");
                    printf(RED"Invalid input!!!!\n"RESET);
                    sleep(1);
                }break;
            case 20:while(1){
                getchar();
                system("clear");
                printf(RED"--------------------------------------------------------------------------------\n"RESET);
                printf("For %s > At an auction,famed TV producer Norman Lear paid over $8 million for what item that had benn found taped to the back of a flea market painting?\n",money[precount_money]);
                printf(RED"--------------------------------------------------------------------------------\n"RESET);
                printf("A.A copy of the Declaration of Independencet\t\tB.A ticket to Abraham Lincoln's inauguration\n\nC.A letter signed by William Shakespeare\t\tD.A Honus Wagner baseball card\n");
                printf(RED"--------------------------------------------------------------------------------"RESET);
                printf(YEL"%s'S BANK : %s\n"RESET,name,money[count_money]);
                printf(RED"--------------------------------------------------------------------------------"RESET);
                scanf("%c",&choice);
                if (toupper(choice)=='A')
                {
                    printf(GRN"\nCORRECT!!!\n"RESET);
                    getchar();
                    count_money += 1;
                    printf("%s's bank increased to %s." ,name,money[count_money]);
                    sleep(1);
                    precount_money +=1;
                    if (precount_money == 16) {
                        winner();
                    }
                    break;
                }
                else if(toupper(choice) == 'C' ||toupper(choice) == 'B' ||toupper(choice) == 'D' )
                {
                    printf(RED"\nWRONG!!!\n"RESET);
                    getchar();
                    getchar();
                    play_again();
                    break;
                }
                else
                {
                    system("clear");
                    printf(RED"Invalid input!!!!\n"RESET);
                    sleep(1);
                }
            }break;
        }

    }

}

void Sports(char  money[16][15])
{
    char choice;
    system("clear");
    printf(RED"\n\n\n================================================================================\n"RESET);
    printf(YEL"\t\t\t\tREADY\n");
    printf(RED"================================================================================\n"RESET);
    sleep(1);
    
    system("clear");
    printf(RED"\n\n\n================================================================================\n"RESET);
    printf(YEL"\t\t\t\tLET'S GO!!!!\n");
    printf(RED"================================================================================\n"RESET);
    sleep(1);

    system("clear");
    int count_q,Q[15],precount_money = 1;
    bool question[20]={};

    time_t t;
    srand((unsigned)time(&t));
    //random
    for(count_q=0; count_q<15; count_q++)
    {   //
        int random = rand()%20;


        if(!question[random]) {
            Q[count_q]= random;

        }
        else //check the same
            count_q--;
        question[random]=1;
    }

    //swap
    for (int i = 0; i < 15 - 1; i++) {
        for (int j = 0; j < 15-i - 1; j++) {
            if(Q[j]  > Q[j+1]) {
                int temp = Q[j];
                Q[j] = Q[j+1];
                Q[j+1]  = temp;
            }
        }
    }


    for(count_q=0; count_q<15; count_q++)
    {
        switch(Q[count_q])
        {
            case 0:while(1){
                getchar();
                system("clear");
                printf(RED"--------------------------------------------------------------------------------\n"RESET);
                printf("For %s > Which team won the FIFA World Cup 2018 in Russia?\n",money[precount_money]);
                printf(RED"--------------------------------------------------------------------------------\n"RESET);
                printf("A.Russia\t\tB.France\n\nC.Croatia\t\tD.England\n");
                printf(RED"--------------------------------------------------------------------------------"RESET);
                printf(YEL"%s'S BANK : %s\n"RESET,name,money[count_money]);
                printf(RED"--------------------------------------------------------------------------------"RESET);
                scanf("%c",&choice);
                if (toupper(choice)=='B')
                {

                    printf(GRN"\nCORRECT!!!\n"RESET);
                    getchar();
                    count_money += 1;
                    printf("%s's bank increased to %s." ,name,money[count_money]);
                    sleep(1);
                    precount_money +=1;
                    if (precount_money == 16) {
                        winner();
                    }
                    break;

                }
                else if(toupper(choice) == 'A' ||toupper(choice) == 'C' ||toupper(choice) == 'D' )
                {
                    printf(RED"\nWRONG!!!\n"RESET);
                    getchar();
                    getchar();
                    play_again();
                    break;
                }
                else
                {
                    system("clear");
                    printf(RED"Invalid input!!!!\n"RESET);
                    sleep(1);
                }
            }break;

            case 1:while(1){
                getchar();
                system("clear");
                printf(RED"--------------------------------------------------------------------------------\n"RESET);
                printf("For %s> Which country hosted the 2010 Football World Cup?\n",money[precount_money]);
                printf(RED"--------------------------------------------------------------------------------\n"RESET);
                printf("A.Russia\tB.Brazil\n\nC.South Africa\tD.France\n");
                printf(RED"--------------------------------------------------------------------------------"RESET);
                printf(YEL"%s'S BANK : %s\n"RESET,name,money[count_money]);
                printf(RED"--------------------------------------------------------------------------------"RESET);
                scanf("%c",&choice);
                if (toupper(choice)=='C')
                {
                    printf(GRN"\nCORRECT!!!\n"RESET);
                    getchar();
                    count_money += 1;
                    printf("%s's bank increased to %s." ,name,money[count_money]);
                    sleep(1);
                    precount_money +=1;
                    if (precount_money == 16) {
                        winner();
                    }
                    break;

                }
                else if(toupper(choice) == 'A' ||toupper(choice) == 'B' ||toupper(choice) == 'D' )
                {
                    printf(RED"\nWRONG!!!\n"RESET);
                    getchar();
                    getchar();
                    play_again();
                    break;
                }
                else
                {
                    system("clear");
                    printf(RED"Invalid input!!!!\n"RESET);
                    sleep(1);
                }
            }break;
            case 2:while(1){
                getchar();
                system("clear");
                printf(RED"--------------------------------------------------------------------------------\n"RESET);
                printf("For %s > FIFA will lift a ban allowing which symbol to appear on home international football shirts?\n",money[precount_money]);
                printf(RED"--------------------------------------------------------------------------------\n"RESET);
                printf("A.Orchids\tB.The poppy\n\nC.Marigold\tD.Lilies\n");
                printf(RED"--------------------------------------------------------------------------------"RESET);
                printf(YEL"%s'S BANK : %s\n"RESET,name,money[count_money]);
                printf(RED"--------------------------------------------------------------------------------"RESET);
                scanf("%c",&choice);
                if (toupper(choice)=='B')
                {
                    printf(GRN"\nCORRECT!!!\n"RESET);
                    getchar();
                    count_money += 1;
                    printf("%s's bank increased to %s." ,name,money[count_money]);
                    sleep(1);
                    precount_money +=1;
                    if (precount_money == 16) {
                        winner();
                    }
                    break;

                }
                else if(toupper(choice) == 'A' ||toupper(choice) == 'C' ||toupper(choice) == 'D' )
                {
                    printf(RED"\nWRONG!!!\n"RESET);
                    getchar();
                    getchar();
                    play_again();
                    break;
                }
                else
                {
                    system("clear");
                    printf(RED"Invalid input!!!!\n"RESET);
                    sleep(1);
                }
            }break;
            case 3:while(1){
                getchar();
                system("clear");
                printf(RED"--------------------------------------------------------------------------------\n"RESET);
                printf("For %s > The San Siro Stadium is in which Italian city?\n",money[precount_money]);
                printf(RED"--------------------------------------------------------------------------------\n"RESET);
                printf("A.Milan\t\tB.Rome\n\nC.Venice\tD.Florence\n");
                printf(RED"--------------------------------------------------------------------------------"RESET);
                printf(YEL"%s'S BANK : %s\n"RESET,name,money[count_money]);
                printf(RED"--------------------------------------------------------------------------------"RESET);
                scanf("%c",&choice);
                if (toupper(choice)=='A')
                {
                    printf(GRN"\nCORRECT!!!\n"RESET);
                    getchar();
                    count_money += 1;
                    printf("%s's bank increased to %s." ,name,money[count_money]);
                    sleep(1);
                    precount_money +=1;
                    if (precount_money == 16) {
                        winner();
                    }
                    break;

                }
                else if(toupper(choice) == 'C' ||toupper(choice) == 'B' ||toupper(choice) == 'D' )
                {
                    printf(RED"\nWRONG!!!\n"RESET);
                    getchar();
                    getchar();
                    play_again();
                    break;
                }
                else
                {
                    system("clear");
                    printf(RED"Invalid input!!!!\n"RESET);
                    sleep(1);
                }
            }break;
            case 4:while(1){
                getchar();
                system("clear");
                printf(RED"--------------------------------------------------------------------------------\n"RESET);
                printf("For %s > In which city was Usain Bolt competing when he broke the Mens 100m World Record in August 2009?\n",money[precount_money]);
                printf(RED"--------------------------------------------------------------------------------\n"RESET);
                printf("A.New York\t\tB.Berlin\n\nC.Lausanne\t\tD.London\n");
                printf(RED"--------------------------------------------------------------------------------"RESET);
                printf(YEL"%s'S BANK : %s\n"RESET,name,money[count_money]);
                printf(RED"--------------------------------------------------------------------------------"RESET);
                scanf("%c",&choice);
                if (toupper(choice)=='B')
                {
                    printf(GRN"\nCORRECT!!!\n"RESET);
                    getchar();
                    count_money += 1;
                    printf("%s's bank increased to %s." ,name,money[count_money]);
                    sleep(1);
                    precount_money +=1;
                    if (precount_money == 16) {
                        winner();
                    }
                    break;

                }
                else if(toupper(choice) == 'A' ||toupper(choice) == 'C' ||toupper(choice) == 'D' )
                {
                    printf(RED"\nWRONG!!!\n"RESET);
                    getchar();
                    getchar();
                    play_again();
                    break;
                }
                else
                {
                    system("clear");
                    printf(RED"Invalid input!!!!\n"RESET);
                    sleep(1);
                }
            }break;
            case 5:while(1){
                getchar();
                system("clear");
                printf(RED"--------------------------------------------------------------------------------\n"RESET);
                printf("For %s > Which nation is the most successful in Badminton history having won the Thomas Cup nine times?\n",money[precount_money]);
                printf(RED"--------------------------------------------------------------------------------\n"RESET);
                printf("A.United States\t\tB.China\n\nC.Japan\t\t\tD.Russia\n");
                printf(RED"--------------------------------------------------------------------------------"RESET);
                printf(YEL"%s'S BANK : %s\n"RESET,name,money[count_money]);
                printf(RED"--------------------------------------------------------------------------------"RESET);
                scanf("%c",&choice);
                if (toupper(choice)=='B')
                {
                    printf(GRN"\nCORRECT!!!\n"RESET);
                    getchar();
                    count_money += 1;
                    printf("%s's bank increased to %s." ,name,money[count_money]);
                    sleep(1);
                    precount_money +=1;
                    if (precount_money == 16) {
                        winner();
                    }
                    break;

                }
                else if(toupper(choice) == 'A' ||toupper(choice) == 'C' ||toupper(choice) == 'D' )
                {
                    printf(RED"\nWRONG!!!\n"RESET);
                    getchar();
                    getchar();
                    play_again();
                    break;
                }
                else
                {
                    system("clear");
                    printf(RED"Invalid input!!!!\n"RESET);
                    sleep(1);
                }
            }break;
            case 6:while(1){
                getchar();
                system("clear");
                printf(RED"--------------------------------------------------------------------------------\n"RESET);
                printf("For %s > 'The Toon Army' are supporters of which English football club?\n",money[precount_money]);
                printf(RED"--------------------------------------------------------------------------------\n"RESET);
                printf("A.Bristol Cityg\t\tB.Hull City\n\nC.Wigan Athletic\tD.Newcastle United\n");
                printf(RED"--------------------------------------------------------------------------------"RESET);
                printf(YEL"%s'S BANK : %s\n"RESET,name,money[count_money]);
                printf(RED"--------------------------------------------------------------------------------"RESET);
                scanf("%c",&choice);
                if (toupper(choice)=='D')
                {
                    printf(GRN"\nCORRECT!!!\n"RESET);
                    getchar();
                    count_money += 1;
                    printf("%s's bank increased to %s." ,name,money[count_money]);
                    sleep(1);
                    precount_money +=1;
                    if (precount_money == 16) {
                        winner();
                    }
                    break;

                }
                else if(toupper(choice) == 'A' ||toupper(choice) == 'B' ||toupper(choice) == 'C' )
                {
                    printf(RED"\nWRONG!!!\n"RESET);
                    getchar();
                    getchar();
                    play_again();
                    break;
                }
                else
                {
                    system("clear");
                    printf(RED"Invalid input!!!!\n"RESET);
                    sleep(1);
                }
            }break;
            case 7:while(1){
                getchar();
                system("clear");
                printf(RED"--------------------------------------------------------------------------------\n"RESET);
                printf("For %s > In snooker, how many points are awarded for potting the yellow ball?\n",money[precount_money]);
                printf(RED"--------------------------------------------------------------------------------\n"RESET);
                printf("A.One\t\tB.Two\n\nC.Three\t\tD.Four\n");
                printf(RED"--------------------------------------------------------------------------------"RESET);
                printf(YEL"%s'S BANK : %s\n"RESET,name,money[count_money]);
                printf(RED"--------------------------------------------------------------------------------"RESET);
                scanf("%c",&choice);
                if (toupper(choice)=='C')
                {
                    printf(GRN"\nCORRECT!!!\n"RESET);
                    getchar();
                    count_money += 1;
                    printf("%s's bank increased to %s." ,name,money[count_money]);
                    sleep(1);
                    precount_money +=1;
                    if (precount_money == 16) {
                        winner();
                    }
                    break;

                }
                else if(toupper(choice) == 'A' ||toupper(choice) == 'B' ||toupper(choice) == 'D' )
                {
                    printf(RED"\nWRONG!!!\n"RESET);
                    getchar();
                    getchar();
                    play_again();
                    break;
                }
                else
                {
                    system("clear");
                    printf(RED"Invalid input!!!!\n"RESET);
                    sleep(1);
                }
            }break;
            case 8:while(1){
                getchar();
                system("clear");
                printf(RED"--------------------------------------------------------------------------------\n"RESET);
                printf("For %s > In 2014-15, Chelsea won the Premier League and the following season they finished 10th. That record for the worst defence of the Premier League title was then surpassed the following season by which team?\n",money[precount_money]);
                printf(RED"--------------------------------------------------------------------------------\n"RESET);
                printf("A.Manchester City\t\tB.Leicester City\n\nC.Manchester United\t\tD.Liverpool FC\n");
                printf(RED"--------------------------------------------------------------------------------"RESET);
                printf(YEL"%s'S BANK : %s\n"RESET,name,money[count_money]);
                printf(RED"--------------------------------------------------------------------------------"RESET);
                scanf("%c",&choice);
                if (toupper(choice)=='B')
                {
                    printf(GRN"\nCORRECT!!!\n"RESET);
                    getchar();
                    count_money += 1;
                    printf("%s's bank increased to %s." ,name,money[count_money]);
                    sleep(1);
                    precount_money +=1;
                    if (precount_money == 16) {
                        winner();
                    }
                    break;

                }
                else if(toupper(choice) == 'A' ||toupper(choice) == 'C' ||toupper(choice) == 'D' )
                {
                    printf(RED"\nWRONG!!!\n"RESET);
                    getchar();
                    getchar();
                    play_again();
                    break;
                }
                else
                {
                    system("clear");
                    printf(RED"Invalid input!!!!\n"RESET);
                    sleep(1);
                }
            }break;
            case 9:while(1){
                getchar();
                system("clear");
                printf(RED"--------------------------------------------------------------------------------\n"RESET);
                printf("For %s > In which sport do you have to use a gun?\n",money[precount_money]);
                printf(RED"--------------------------------------------------------------------------------\n"RESET);
                printf("A.Javelin Fish\t\tB.Haunkumdo\n\nC.Biatlon\t\tD.Darts\n");
                printf(RED"--------------------------------------------------------------------------------"RESET);
                printf(YEL"%s'S BANK : %s\n"RESET,name,money[count_money]);
                printf(RED"--------------------------------------------------------------------------------"RESET);
                scanf("%c",&choice);
                if (toupper(choice)=='C')
                {
                    printf(GRN"\nCORRECT!!!\n"RESET);
                    getchar();
                    count_money += 1;
                    printf("%s's bank increased to %s." ,name,money[count_money]);
                    sleep(1);
                    precount_money +=1;
                    if (precount_money == 16) {
                        winner();
                    }
                    break;

                }
                else if(toupper(choice) == 'A' ||toupper(choice) == 'B' ||toupper(choice) == 'D' )
                {
                    printf(RED"\nWRONG!!!\n"RESET);
                    getchar();
                    getchar();
                    play_again();
                    break;
                }
                else
                {
                    system("clear");
                    printf(RED"Invalid input!!!!\n"RESET);
                    sleep(1);
                }
            }break;
            case 10:while(1){
                getchar();
                system("clear");
                printf(RED"--------------------------------------------------------------------------------\n"RESET);
                printf("For %s > What ball has the largest diameter?\n",money[precount_money]);
                printf(RED"--------------------------------------------------------------------------------\n"RESET);
                printf("A.A golf ball\t\t\tB.A squash ball\n\nC.A table tennis ball\t\tD.Jai Alai ball\n");
                printf(RED"--------------------------------------------------------------------------------"RESET);
                printf(YEL"%s'S BANK : %s\n"RESET,name,money[count_money]);
                printf(RED"--------------------------------------------------------------------------------"RESET);
                scanf("%c",&choice);
                if (toupper(choice)=='D')
                {
                    printf(GRN"\nCORRECT!!!\n"RESET);
                    getchar();
                    count_money += 1;
                    printf("%s's bank increased to %s." ,name,money[count_money]);
                    sleep(1);
                    precount_money +=1;
                    if (precount_money == 16) {
                        winner();
                    }
                    break;

                }
                else if(toupper(choice) == 'A' ||toupper(choice) == 'B' ||toupper(choice) == 'C' )
                {
                    printf(RED"\nWRONG!!!\n"RESET);
                    getchar();
                    getchar();
                    play_again();
                    break;
                }
                else
                {
                    system("clear");
                    printf(RED"Invalid input!!!!\n"RESET);
                    sleep(1);
                }
            }break;
            case 11:while(1){
                getchar();
                system("clear");
                printf(RED"--------------------------------------------------------------------------------\n"RESET);
                printf("For %s > How many players are their on an Olympic curling team?\n",money[precount_money]);
                printf(RED"--------------------------------------------------------------------------------\n"RESET);
                printf("A.Two\t\tB.Three\n\nC.Four\t\tD.Six\n");
                printf(RED"--------------------------------------------------------------------------------"RESET);
                printf(YEL"%s'S BANK : %s\n"RESET,name,money[count_money]);
                printf(RED"--------------------------------------------------------------------------------"RESET);
                scanf("%c",&choice);
                if (toupper(choice)=='C')
                {
                    printf(GRN"\nCORRECT!!!\n"RESET);
                    getchar();
                    count_money += 1;
                    printf("%s's bank increased to %s." ,name,money[count_money]);
                    sleep(1);
                    precount_money +=1;
                    if (precount_money == 16) {
                        winner();
                    }
                    break;

                }
                else if(toupper(choice) == 'A' ||toupper(choice) == 'B' ||toupper(choice) == 'D' )
                {
                    printf(RED"\nWRONG!!!\n"RESET);
                    getchar();
                    getchar();
                    play_again();
                    break;
                }
                else
                {
                    system("clear");
                    printf(RED"Invalid input!!!!\n"RESET);
                    sleep(1);
                }
            }break;
            case 12:while(1){
                getchar();
                system("clear");
                printf(RED"--------------------------------------------------------------------------------\n"RESET);
                printf("For %s > Wimbledon 2017 was won by the 14th seed who surprisingly defeated Venus WIlliams in the final. Can you name her?\n",money[precount_money]);
                printf(RED"--------------------------------------------------------------------------------\n"RESET);
                printf("A.Daria Gavrilova\t\tB.Garbiñe Muguruza\n\nC.Svetlana Kuznetsova\t\tD.Raul Gonzales\n");
                printf(RED"--------------------------------------------------------------------------------"RESET);
                printf(YEL"%s'S BANK : %s\n"RESET,name,money[count_money]);
                printf(RED"--------------------------------------------------------------------------------"RESET);
                scanf("%c",&choice);
                if (toupper(choice)=='B')
                {
                    printf(GRN"\nCORRECT!!!\n"RESET);
                    getchar();
                    count_money += 1;
                    printf("%s's bank increased to %s." ,name,money[count_money]);
                    sleep(1);
                    precount_money +=1;
                    if (precount_money == 16) {
                        winner();
                    }
                    break;

                }
                else if(toupper(choice) == 'A' ||toupper(choice) == 'C' ||toupper(choice) == 'D' )
                {
                    printf(RED"\nWRONG!!!\n"RESET);
                    getchar();
                    getchar();
                    play_again();
                    break;
                }
                else
                {
                    system("clear");
                    printf(RED"Invalid input!!!!\n"RESET);
                    sleep(1);
                }
            }break;
            case 13:while(1){
                getchar();
                system("clear");
                printf(RED"--------------------------------------------------------------------------------\n"RESET);
                printf("For %s > Which was the only city to submit an official application to host the Commonwealth Games in 2022?\n",money[precount_money]);
                printf(RED"--------------------------------------------------------------------------------\n"RESET);
                printf("A.Birmingham\t\tB.Greenwich\n\nC.Southampton\t\tD.Leeds\n");
                printf(RED"--------------------------------------------------------------------------------"RESET);
                printf(YEL"%s'S BANK : %s\n"RESET,name,money[count_money]);
                printf(RED"--------------------------------------------------------------------------------"RESET);
                scanf("%c",&choice);
                if (toupper(choice)=='A')
                {
                    printf(GRN"\nCORRECT!!!\n"RESET);
                    getchar();
                    count_money += 1;
                    printf("%s's bank increased to %s." ,name,money[count_money]);
                    sleep(1);
                    precount_money +=1;
                    if (precount_money == 16) {
                        winner();
                    }
                    break;

                }
                else if(toupper(choice) == 'C' ||toupper(choice) == 'B' ||toupper(choice) == 'D' )
                {
                    printf(RED"\nWRONG!!!\n"RESET);
                    getchar();
                    getchar();
                    play_again();
                    break;
                }
                else
                {
                    system("clear");
                    printf(RED"Invalid input!!!!\n"RESET);
                    sleep(1);
                }
            }break;
            case 14:while(1){
                getchar();
                system("clear");
                printf(RED"--------------------------------------------------------------------------------\n"RESET);
                printf("For %s > Arsene Wenger celebrated the anniversary of his appointment at Arsenal this weekend. In which year did the Frenchman take charge at the club?\n",money[precount_money]);
                printf(RED"--------------------------------------------------------------------------------\n"RESET);
                printf("A.1994\t\tB.1995\n\nC.1996\t\tD.1998\n");
                printf(RED"--------------------------------------------------------------------------------"RESET);
                printf(YEL"%s'S BANK : %s\n"RESET,name,money[count_money]);
                printf(RED"--------------------------------------------------------------------------------"RESET);
                scanf("%c",&choice);
                if (toupper(choice)=='C')
                {
                    printf(GRN"\nCORRECT!!!\n"RESET);
                    getchar();
                    count_money += 1;
                    printf("%s's bank increased to %s." ,name,money[count_money]);
                    sleep(1);
                    precount_money +=1;
                    if (precount_money == 16) {
                        winner();
                    }
                    break;

                }
                else if(toupper(choice) == 'A' ||toupper(choice) == 'B' ||toupper(choice) == 'D' )
                {
                    printf(RED"\nWRONG!!!\n"RESET);
                    getchar();
                    getchar();
                    play_again();
                    break;
                }
                else
                {
                    system("clear");
                    printf(RED"Invalid input!!!!\n"RESET);
                    sleep(1);
                }
            }break;
            case 15:while(1){
                getchar();
                system("clear");
                printf(RED"--------------------------------------------------------------------------------\n"RESET);
                printf("For %s > Who managed Manchester City between June 2013 and June 2016?\n",money[precount_money]);
                printf(RED"--------------------------------------------------------------------------------\n"RESET);
                printf("A.Pep Guardiola\t\t\tB.Roberto Mancini\n\nC.Manuel Pellegrini\t\tD.Mark Hughes\n");
                printf(RED"--------------------------------------------------------------------------------"RESET);
                printf(YEL"%s'S BANK : %s\n"RESET,name,money[count_money]);
                printf(RED"--------------------------------------------------------------------------------"RESET);
                scanf("%c",&choice);
                if (toupper(choice)=='C')
                {
                    printf(GRN"\nCORRECT!!!\n"RESET);
                    getchar();
                    count_money += 1;
                    printf("%s's bank increased to %s." ,name,money[count_money]);
                    sleep(1);
                    precount_money +=1;
                    if (precount_money == 16) {
                        winner();
                    }
                    break;

                }
                else if(toupper(choice) == 'A' ||toupper(choice) == 'B' ||toupper(choice) == 'D' )
                {
                    printf(RED"\nWRONG!!!\n"RESET);
                    getchar();
                    getchar();
                    play_again();
                    break;
                }
                else
                {
                    system("clear");
                    printf(RED"Invalid input!!!!\n"RESET);
                    sleep(1);
                }
            }break;
            case 16:while(1){
                getchar();
                system("clear");
                printf(RED"--------------------------------------------------------------------------------\n"RESET);
                printf("For %s > As of 2017, who was the last Welshman to win Snooker's World Championship?\n",money[precount_money]);
                printf(RED"--------------------------------------------------------------------------------\n"RESET);
                printf("A.Mark William\t\tB.Terry Griffiths\n\nC.Ray Reardon\t\tD.Reanne Evans\n");
                printf(RED"--------------------------------------------------------------------------------"RESET);
                printf(YEL"%s'S BANK : %s\n"RESET,name,money[count_money]);
                printf(RED"--------------------------------------------------------------------------------"RESET);
                scanf("%c",&choice);
                if (toupper(choice)=='A')
                {
                    printf(GRN"\nCORRECT!!!\n"RESET);
                    getchar();
                    count_money += 1;
                    printf("%s's bank increased to %s." ,name,money[count_money]);
                    sleep(1);
                    precount_money +=1;
                    if (precount_money == 16) {
                        winner();
                    }
                    break;

                }
                else if(toupper(choice) == 'C' ||toupper(choice) == 'B' ||toupper(choice) == 'D' )
                {
                    printf(RED"\nWRONG!!!\n"RESET);
                    getchar();
                    getchar();
                    play_again();
                    break;
                }
                else
                {
                    system("clear");
                    printf(RED"Invalid input!!!!\n"RESET);
                    sleep(1);
                }
            }break;
            case 17:while(1){
                getchar();
                system("clear");
                printf(RED"--------------------------------------------------------------------------------\n"RESET);
                printf("For %s > In 1912, former US President Theodore Roosevelt was a candidate for which political party?\n",money[precount_money]);
                printf(RED"--------------------------------------------------------------------------------\n"RESET);
                printf("A.Bull Moose\t\tB.Bull Dog\n\nC.Bull Elephant\t\tD.Bull Frog\n");
                printf(RED"--------------------------------------------------------------------------------"RESET);
                printf(YEL"%s'S BANK : %s\n"RESET,name,money[count_money]);
                printf(RED"--------------------------------------------------------------------------------"RESET);
                scanf("%c",&choice);
                if (toupper(choice)=='A')
                {
                    printf(GRN"\nCORRECT!!!\n"RESET);
                    getchar();
                    count_money += 1;
                    printf("%s's bank increased to %s." ,name,money[count_money]);
                    sleep(1);
                    precount_money +=1;
                    if (precount_money == 16) {
                        winner();
                    }
                    break;

                }
                else if(toupper(choice) == 'C' ||toupper(choice) == 'B' ||toupper(choice) == 'D' )
                {
                    printf(RED"\nWRONG!!!\n"RESET);
                    getchar();
                    getchar();
                    play_again();
                    break;
                }
                else
                {
                    system("clear");
                    printf(RED"Invalid input!!!!\n"RESET);
                    sleep(1);
                }
            }break;
            case 18:while(1){
                getchar();
                system("clear");
                printf(RED"--------------------------------------------------------------------------------\n"RESET);
                printf("For %s > Which English footballer was a member of the 1958, 1962, 1966 and 1970 England World Cup Finals squads?\n",money[precount_money]);
                printf(RED"--------------------------------------------------------------------------------\n"RESET);
                printf("A.George Best\t\tB.Bobby Charlton\n\nC.Bobby Moore\t\tD.Ryan Giggs\n");
                printf(RED"--------------------------------------------------------------------------------"RESET);
                printf(YEL"%s'S BANK : %s\n"RESET,name,money[count_money]);
                printf(RED"--------------------------------------------------------------------------------"RESET);
                scanf("%c",&choice);
                if (toupper(choice)=='B')
                {
                    printf(GRN"\nCORRECT!!!\n"RESET);
                    getchar();
                    count_money += 1;
                    printf("%s's bank increased to %s." ,name,money[count_money]);
                    sleep(1);
                    precount_money +=1;
                    if (precount_money == 16) {
                        winner();
                    }
                    break;

                }
                else if(toupper(choice) == 'A' ||toupper(choice) == 'C' ||toupper(choice) == 'D' )
                {
                    printf(RED"\nWRONG!!!\n"RESET);
                    getchar();
                    getchar();
                    play_again();
                    break;
                }
                else
                {
                    system("clear");
                    printf(RED"Invalid input!!!!\n"RESET);
                    sleep(1);
                }
            }break;
            case 19:while(1){
                getchar();
                system("clear");
                printf(RED"--------------------------------------------------------------------------------\n"RESET);
                printf("For %s > On 4th April, 2018 which player became the youngest Englishman to start a Champions League Quarter Final game?\n",money[precount_money]);
                printf(RED"--------------------------------------------------------------------------------\n"RESET);
                printf("A.Joe Gomez\tB.Marco Asensio\n\nC.Kylian Mbappe\t\tD.Trent Alexander-Arnold\n");
                printf(RED"--------------------------------------------------------------------------------"RESET);
                printf(YEL"%s'S BANK : %s\n"RESET,name,money[count_money]);
                printf(RED"--------------------------------------------------------------------------------"RESET);
                scanf("%c",&choice);
                if (toupper(choice)=='D')
                {
                    printf(GRN"\nCORRECT!!!\n"RESET);
                    getchar();
                    count_money += 1;
                    printf("%s's bank increased to %s." ,name,money[count_money]);
                    sleep(1);
                    precount_money +=1;
                    if (precount_money == 16) {
                        winner();
                    }
                    break;

                }
                else if(toupper(choice) == 'A' ||toupper(choice) == 'B' ||toupper(choice) == 'C' )
                {
                    printf(RED"\nWRONG!!!\n"RESET);
                    getchar();
                    getchar();
                    play_again();
                    break;
                }
                else
                {
                    system("clear");
                    printf(RED"Invalid input!!!!\n"RESET);
                    sleep(1);
                }
            }break;
            case 20:while(1){
                getchar();
                system("clear");
                printf(RED"--------------------------------------------------------------------------------\n"RESET);
                printf("For %s > England took the lead against Lithuania in their football World Cup 2018 Qualifier on Sunday afternoon with a well placed penalty scored by whom?\n",money[precount_money]);
                printf(RED"--------------------------------------------------------------------------------\n"RESET);
                printf("A.Harry Kane\t\tB.Jamie Vardy\n\nC.Dele Alli\t\tD.Wayne Rooney\n");
                printf(RED"--------------------------------------------------------------------------------"RESET);
                printf(YEL"%s'S BANK : %s\n"RESET,name,money[count_money]);
                printf(RED"--------------------------------------------------------------------------------"RESET);
                scanf("%c",&choice);
                if (toupper(choice)=='A')
                {
                    printf(GRN"\nCORRECT!!!\n"RESET);
                    getchar();
                    count_money += 1;
                    printf("%s's bank increased to %s." ,name,money[count_money]);
                    sleep(1);
                    precount_money +=1;
                    if (precount_money == 16) {
                        winner();
                    }
                    break;

                }
                else if(toupper(choice) == 'C' ||toupper(choice) == 'B' ||toupper(choice) == 'D' )
                {
                    printf(RED"\nWRONG!!!\n"RESET);
                    getchar();
                    getchar();
                    play_again();
                    break;
                }
                else
                {
                    system("clear");
                    printf(RED"Invalid input!!!!\n"RESET);
                    sleep(1);
                }
            }break;
        }

    }

}

void Film(char  money[16][15])
{
    char choice;
    system("clear");
    printf(RED"\n\n\n================================================================================\n"RESET);
    printf(YEL"\t\t\t\tREADY\n");
    printf(RED"================================================================================\n"RESET);
    sleep(1);
    
    system("clear");
    printf(RED"\n\n\n================================================================================\n"RESET);
    printf(YEL"\t\t\t\tLET'S GO!!!!\n");
    printf(RED"================================================================================\n"RESET);
    sleep(1);

    system("clear");
    int count_q,Q[15],precount_money = 1;
    bool question[20]={};

    time_t t;
    srand((unsigned)time(&t));
    //random
    for(count_q=0; count_q<15; count_q++)
    {   //
        int random = rand()%20;


        if(!question[random]) {
            Q[count_q]= random;

        }
        else //check the same
            count_q--;
        question[random]=1;
    }

    //swap
    for (int i = 0; i < 15 - 1; i++) {
        for (int j = 0; j < 15-i - 1; j++) {
            if(Q[j]  > Q[j+1]) {
                int temp = Q[j];
                Q[j] = Q[j+1];
                Q[j+1]  = temp;
            }
        }
    }


    for(count_q=0; count_q<15; count_q++)
    {
        switch(Q[count_q])
        {
            case 0:while(1){
                getchar();
                system("clear");
                printf(RED"--------------------------------------------------------------------------------\n"RESET);
                printf("For %s > Which 2018 horror film is a spinoff from 2016's The Conjuring 2?\n",money[precount_money]);
                printf(RED"--------------------------------------------------------------------------------\n"RESET);
                printf("A.The Nun\tB.Annabelle : Creation\n\nC.It\t\tD.The Crooked man\n");
                printf(RED"--------------------------------------------------------------------------------"RESET);
                printf(YEL"%s'S BANK : %s\n"RESET,name,money[count_money]);
                printf(RED"--------------------------------------------------------------------------------"RESET);
                scanf("%c",&choice);
                if (toupper(choice)=='A')
                {

                    printf(GRN"\nCORRECT!!!\n"RESET);
                    getchar();
                    count_money += 1;
                    printf("%s's bank increased to %s." ,name,money[count_money]);
                    sleep(1);
                    precount_money +=1;
                    if (precount_money == 16) {
                        winner();
                    }
                    break;

                }
                else if(toupper(choice) == 'C' ||toupper(choice) == 'B' ||toupper(choice) == 'D' )
                {
                    printf(RED"\nWRONG!!!\n"RESET);
                    getchar();
                    getchar();
                    play_again();
                    break;
                }
                else
                {
                    system("clear");
                    printf(RED"Invalid input!!!!\n"RESET);
                    sleep(1);
                }
            }break;

            case 1:while(1){
                getchar();
                system("clear");
                printf(RED"--------------------------------------------------------------------------------\n"RESET);
                printf("For %s> Tom Hardy plays investigative journalist Eddie Brock in which Marvel Comics superhero film released in October 2018?\n",money[precount_money]);
                printf(RED"--------------------------------------------------------------------------------\n"RESET);
                printf("A.Avengers Infinity War\tB.Thor : Ragnarok\n\nC.Venom\t\t\tD.Spider-man : Homecoming\n");
                printf(RED"--------------------------------------------------------------------------------"RESET);
                printf(YEL"%s'S BANK : %s\n"RESET,name,money[count_money]);
                printf(RED"--------------------------------------------------------------------------------"RESET);
                scanf("%c",&choice);
                if (toupper(choice)=='C')
                {
                    printf(GRN"\nCORRECT!!!\n"RESET);
                    getchar();
                    count_money += 1;
                    printf("%s's bank increased to %s." ,name,money[count_money]);
                    sleep(1);
                    precount_money +=1;
                    if (precount_money == 16) {
                        winner();
                    }
                    break;

                }
                else if(toupper(choice) == 'A' ||toupper(choice) == 'B' ||toupper(choice) == 'D' )
                {
                    printf(RED"\nWRONG!!!\n"RESET);
                    getchar();
                    getchar();
                    play_again();
                    break;
                }
                else
                {
                    system("clear");
                    printf(RED"Invalid input!!!!\n"RESET);
                    sleep(1);
                }
            }break;
            case 2:while(1){
                getchar();
                system("clear");
                printf(RED"--------------------------------------------------------------------------------\n"RESET);
                printf("For %s > Who stars as title character Aquaman in the December 2018 film based on the DC Comics character of the same name?\n",money[precount_money]);
                printf(RED"--------------------------------------------------------------------------------\n"RESET);
                printf("A.Jason Momoa\t\tB.Henry Cavill\n\nC.Matt Damon\t\tD.Ben Affleck\n");
                printf(RED"--------------------------------------------------------------------------------"RESET);
                printf(YEL"%s'S BANK : %s\n"RESET,name,money[count_money]);
                printf(RED"--------------------------------------------------------------------------------"RESET);
                scanf("%c",&choice);
                if (toupper(choice)=='A')
                {
                    printf(GRN"\nCORRECT!!!\n"RESET);
                    getchar();
                    count_money += 1;
                    printf("%s's bank increased to %s." ,name,money[count_money]);
                    sleep(1);
                    precount_money +=1;
                    if (precount_money == 16) {
                        winner();
                    }
                    break;

                }
                else if(toupper(choice) == 'C' ||toupper(choice) == 'B' ||toupper(choice) == 'D' )
                {
                    printf(RED"\nWRONG!!!\n"RESET);
                    getchar();
                    getchar();
                    play_again();
                    break;
                }
                else
                {
                    system("clear");
                    printf(RED"Invalid input!!!!\n"RESET);
                    sleep(1);
                }
            }break;
            case 3:while(1){
                getchar();
                system("clear");
                printf(RED"--------------------------------------------------------------------------------\n"RESET);
                printf("For %s > Sam Gamgee, Faramir and Legolas are characters from which Oscar winning film franchise?\n",money[precount_money]);
                printf(RED"--------------------------------------------------------------------------------\n"RESET);
                printf("A.Fast & Furious\t\tB.Mission Impossible\n\nC.Harry Potter\t\t\tD.Lord of the Rings\n");
                printf(RED"--------------------------------------------------------------------------------"RESET);
                printf(YEL"%s'S BANK : %s\n"RESET,name,money[count_money]);
                printf(RED"--------------------------------------------------------------------------------"RESET);
                scanf("%c",&choice);
                if (toupper(choice)=='D')
                {
                    printf(GRN"\nCORRECT!!!\n"RESET);
                    getchar();
                    count_money += 1;
                    printf("%s's bank increased to %s." ,name,money[count_money]);
                    sleep(1);
                    precount_money +=1;
                    if (precount_money == 16) {
                        winner();
                    }
                    break;

                }
                else if(toupper(choice) == 'A' ||toupper(choice) == 'B' ||toupper(choice) == 'C' )
                {
                    printf(RED"\nWRONG!!!\n"RESET);
                    getchar();
                    getchar();
                    play_again();
                    break;
                }
                else
                {
                    system("clear");
                    printf(RED"Invalid input!!!!\n"RESET);
                    sleep(1);
                }
            }break;
            case 4:while(1){
                getchar();
                system("clear");
                printf(RED"--------------------------------------------------------------------------------\n"RESET);
                printf("For %s > Which young English actor will play Peter Parker and Spiderman in the summer 2017 film 'Spider-Man: Homecoming'?\n",money[precount_money]);
                printf(RED"--------------------------------------------------------------------------------\n"RESET);
                printf("A.Tom Holland\t\t\tB.Andrew Garfield\n\nC.Nicholas Hamilton\t\tD.Dylan O'Brein\n");
                printf(RED"--------------------------------------------------------------------------------"RESET);
                printf(YEL"%s'S BANK : %s\n"RESET,name,money[count_money]);
                printf(RED"--------------------------------------------------------------------------------"RESET);
                scanf("%c",&choice);
                if (toupper(choice)=='A')
                {
                    printf(GRN"\nCORRECT!!!\n"RESET);
                    getchar();
                    count_money += 1;
                    printf("%s's bank increased to %s." ,name,money[count_money]);
                    sleep(1);
                    precount_money +=1;
                    if (precount_money == 16) {
                        winner();
                    }
                    break;

                }
                else if(toupper(choice) == 'C' ||toupper(choice) == 'B' ||toupper(choice) == 'D' )
                {
                    printf(RED"\nWRONG!!!\n"RESET);
                    getchar();
                    getchar();
                    play_again();
                    break;
                }
                else
                {
                    system("clear");
                    printf(RED"Invalid input!!!!\n"RESET);
                    sleep(1);
                }
            }break;
            case 5:while(1){
                getchar();
                system("clear");
                printf(RED"--------------------------------------------------------------------------------\n"RESET);
                printf("For %s > Marlin, Dory and Gill are characters from which 2003 animated movie?\n",money[precount_money]);
                printf(RED"--------------------------------------------------------------------------------\n"RESET);
                printf("A.Madagascar\t\tB.Monsters, Inc.\n\nC.Finding Nemo\t\tD.Sherk\n");
                printf(RED"--------------------------------------------------------------------------------"RESET);
                printf(YEL"%s'S BANK : %s\n"RESET,name,money[count_money]);
                printf(RED"--------------------------------------------------------------------------------"RESET);
                scanf("%c",&choice);
                if (toupper(choice)=='C')
                {
                    printf(GRN"\nCORRECT!!!\n"RESET);
                    getchar();
                    count_money += 1;
                    printf("%s's bank increased to %s." ,name,money[count_money]);
                    sleep(1);
                    precount_money +=1;
                    if (precount_money == 16) {
                        winner();
                    }
                    break;

                }
                else if(toupper(choice) == 'A' ||toupper(choice) == 'B' ||toupper(choice) == 'D' )
                {
                    printf(RED"\nWRONG!!!\n"RESET);
                    getchar();
                    getchar();
                    play_again();
                    break;
                }
                else
                {
                    system("clear");
                    printf(RED"Invalid input!!!!\n"RESET);
                    sleep(1);
                }
            }break;
            case 6:while(1){
                getchar();
                system("clear");
                printf(RED"--------------------------------------------------------------------------------\n"RESET);
                printf("For %s > Complete the title of the fifth film in the Pirates of the Caribbean series: 'Dead Men Tell No...'?\n",money[precount_money]);
                printf(RED"--------------------------------------------------------------------------------\n"RESET);
                printf("A.One\t\tB.Tales\n\nC.Lies\t\tD.More\n");
                printf(RED"--------------------------------------------------------------------------------"RESET);
                printf(YEL"%s'S BANK : %s\n"RESET,name,money[count_money]);
                printf(RED"--------------------------------------------------------------------------------"RESET);
                scanf("%c",&choice);
                if (toupper(choice)=='B')
                {
                    printf(GRN"\nCORRECT!!!\n"RESET);
                    getchar();
                    count_money += 1;
                    printf("%s's bank increased to %s." ,name,money[count_money]);
                    sleep(1);
                    precount_money +=1;
                    if (precount_money == 16) {
                        winner();
                    }
                    break;

                }
                else if(toupper(choice) == 'A' ||toupper(choice) == 'C' ||toupper(choice) == 'D' )
                {
                    printf(RED"\nWRONG!!!\n"RESET);
                    getchar();
                    getchar();
                    play_again();
                    break;
                }
                else
                {
                    system("clear");
                    printf(RED"Invalid input!!!!\n"RESET);
                    sleep(1);
                }
            }break;
            case 7:while(1){
                getchar();
                system("clear");
                printf(RED"--------------------------------------------------------------------------------\n"RESET);
                printf("For %s > What is the name of the spaceship featuring in Alien (1979)??\n",money[precount_money]);
                printf(RED"--------------------------------------------------------------------------------\n"RESET);
                printf("A.Sulaco\tB.Auriga\n\nC.Betty\t\tD.Nostromo\n");
                printf(RED"--------------------------------------------------------------------------------"RESET);
                printf(YEL"%s'S BANK : %s\n"RESET,name,money[count_money]);
                printf(RED"--------------------------------------------------------------------------------"RESET);
                scanf("%c",&choice);
                if (toupper(choice)=='D')
                {
                    printf(GRN"\nCORRECT!!!\n"RESET);
                    getchar();
                    count_money += 1;
                    printf("%s's bank increased to %s." ,name,money[count_money]);
                    sleep(1);
                    precount_money +=1;
                    if (precount_money == 16) {
                        winner();
                    }
                    break;

                }
                else if(toupper(choice) == 'A' ||toupper(choice) == 'B' ||toupper(choice) == 'C' )
                {
                    printf(RED"\nWRONG!!!\n"RESET);
                    getchar();
                    getchar();
                    play_again();
                    break;
                }
                else
                {
                    system("clear");
                    printf(RED"Invalid input!!!!\n"RESET);
                    sleep(1);
                }
            }break;
            case 8:while(1){
                getchar();
                system("clear");
                printf(RED"--------------------------------------------------------------------------------\n"RESET);
                printf("For %s > Who played the female lead in the film Passengers released in 2016?\n",money[precount_money]);
                printf(RED"--------------------------------------------------------------------------------\n"RESET);
                printf("A.Scarlett Johanson\tB.Jennifer Lawrence\n\nC.Emma Watson\t\tD.Alexandra Daddario\n");
                printf(RED"--------------------------------------------------------------------------------"RESET);
                printf(YEL"%s'S BANK : %s\n"RESET,name,money[count_money]);
                printf(RED"--------------------------------------------------------------------------------"RESET);
                scanf("%c",&choice);
                if (toupper(choice)=='B')
                {
                    printf(GRN"\nCORRECT!!!\n"RESET);
                    getchar();
                    count_money += 1;
                    printf("%s's bank increased to %s." ,name,money[count_money]);
                    sleep(1);
                    precount_money +=1;
                    if (precount_money == 16) {
                        winner();
                    }
                    break;

                }
                else if(toupper(choice) == 'A' ||toupper(choice) == 'C' ||toupper(choice) == 'D' )
                {
                    printf(RED"\nWRONG!!!\n"RESET);
                    getchar();
                    getchar();
                    play_again();
                    break;
                }
                else
                {
                    system("clear");
                    printf(RED"Invalid input!!!!\n"RESET);
                    sleep(1);
                }
            }break;
            case 9:while(1){
                getchar();
                system("clear");
                printf(RED"--------------------------------------------------------------------------------\n"RESET);
                printf("For %s > Who was the director of the multi award winning film La La Land?\n",money[precount_money]);
                printf(RED"--------------------------------------------------------------------------------\n"RESET);
                printf("A.Damien Chazelle\t\tB.Christopher Nolan\n\nC.Steven Spielberg\t\tD.Tim Burton\n");
                printf(RED"--------------------------------------------------------------------------------"RESET);
                printf(YEL"%s'S BANK : %s\n"RESET,name,money[count_money]);
                printf(RED"--------------------------------------------------------------------------------"RESET);
                scanf("%c",&choice);
                if (toupper(choice)=='A')
                {
                    printf(GRN"\nCORRECT!!!\n"RESET);
                    getchar();
                    count_money += 1;
                    printf("%s's bank increased to %s." ,name,money[count_money]);
                    sleep(1);
                    precount_money +=1;
                    if (precount_money == 16) {
                        winner();
                    }
                    break;

                }
                else if(toupper(choice) == 'C' ||toupper(choice) == 'B' ||toupper(choice) == 'D' )
                {
                    printf(RED"\nWRONG!!!\n"RESET);
                    getchar();
                    getchar();
                    play_again();
                    break;
                }
                else
                {
                    system("clear");
                    printf(RED"Invalid input!!!!\n"RESET);
                    sleep(1);
                }
            }break;
            case 10:while(1){
                getchar();
                system("clear");
                printf(RED"--------------------------------------------------------------------------------\n"RESET);
                printf("For %s > What is the name of Shaun's girlfriend in Shaun of the Dead?\n",money[precount_money]);
                printf(RED"--------------------------------------------------------------------------------\n"RESET);
                printf("A.Rose\t\tB.Liz\n\nC.Jane\t\tD.Emma\n");
                printf(RED"--------------------------------------------------------------------------------"RESET);
                printf(YEL"%s'S BANK : %s\n"RESET,name,money[count_money]);
                printf(RED"--------------------------------------------------------------------------------"RESET);
                scanf("%c",&choice);
                if (toupper(choice)=='B')
                {
                    printf(GRN"\nCORRECT!!!\n"RESET);
                    getchar();
                    count_money += 1;
                    printf("%s's bank increased to %s." ,name,money[count_money]);
                    sleep(1);
                    precount_money +=1;
                    if (precount_money == 16) {
                        winner();
                    }
                    break;

                }
                else if(toupper(choice) == 'A' ||toupper(choice) == 'C' ||toupper(choice) == 'D' )
                {
                    printf(RED"\nWRONG!!!\n"RESET);
                    getchar();
                    getchar();
                    play_again();
                    break;
                }
                else
                {
                    system("clear");
                    printf(RED"Invalid input!!!!\n"RESET);
                    sleep(1);
                }
            }break;
            case 11:while(1){
                getchar();
                system("clear");
                printf(RED"--------------------------------------------------------------------------------\n"RESET);
                printf("For %s > What is the name of the virtual reality world in Ready Player One?\n",money[precount_money]);
                printf(RED"--------------------------------------------------------------------------------\n"RESET);
                printf("A.BLUR\t\tB.OASIS\n\nC.VERVE\t\tD.VALVE\n");
                printf(RED"--------------------------------------------------------------------------------"RESET);
                printf(YEL"%s'S BANK : %s\n"RESET,name,money[count_money]);
                printf(RED"--------------------------------------------------------------------------------"RESET);
                scanf("%c",&choice);
                if (toupper(choice)=='B')
                {
                    printf(GRN"\nCORRECT!!!\n"RESET);
                    getchar();
                    count_money += 1;
                    printf("%s's bank increased to %s." ,name,money[count_money]);
                    sleep(1);
                    precount_money +=1;
                    if (precount_money == 16) {
                        winner();
                    }
                    break;

                }
                else if(toupper(choice) == 'A' ||toupper(choice) == 'C' ||toupper(choice) == 'D' )
                {
                    printf(RED"\nWRONG!!!\n"RESET);
                    getchar();
                    getchar();
                    play_again();
                    break;
                }
                else
                {
                    system("clear");
                    printf(RED"Invalid input!!!!\n"RESET);
                    sleep(1);
                }
            }break;
            case 12:while(1){
                getchar();
                system("clear");
                printf(RED"--------------------------------------------------------------------------------\n"RESET);
                printf("For %s > Which American actor plays Scott Lang in 'Ant-Man and the Wasp'?\n",money[precount_money]);
                printf(RED"--------------------------------------------------------------------------------\n"RESET);
                printf("A.Paul Rudd\t\tB.Michael Douglas\n\nC.Bradley Cooper\tD.Logan Paul\n");
                printf(RED"--------------------------------------------------------------------------------"RESET);
                printf(YEL"%s'S BANK : %s\n"RESET,name,money[count_money]);
                printf(RED"--------------------------------------------------------------------------------"RESET);
                scanf("%c",&choice);
                if (toupper(choice)=='A')
                {
                    printf(GRN"\nCORRECT!!!\n"RESET);
                    getchar();
                    count_money += 1;
                    printf("%s's bank increased to %s." ,name,money[count_money]);
                    sleep(1);
                    precount_money +=1;
                    if (precount_money == 16) {
                        winner();
                    }
                    break;

                }
                else if(toupper(choice) == 'C' ||toupper(choice) == 'B' ||toupper(choice) == 'D' )
                {
                    printf(RED"\nWRONG!!!\n"RESET);
                    getchar();
                    getchar();
                    play_again();
                    break;
                }
                else
                {
                    system("clear");
                    printf(RED"Invalid input!!!!\n"RESET);
                    sleep(1);
                }
            }break;
            case 13:while(1){
                getchar();
                system("clear");
                printf(RED"--------------------------------------------------------------------------------\n"RESET);
                printf("For %s > Who played the role of Lucius Fox in the 2008 film The Dark Knight?\n",money[precount_money]);
                printf(RED"--------------------------------------------------------------------------------\n"RESET);
                printf("A.Kevin Spacey\t\tB.Johnny Depp\n\nC.Morgan Freeman\tD.Tom Hanks\n");
                printf(RED"--------------------------------------------------------------------------------"RESET);
                printf(YEL"%s'S BANK : %s\n"RESET,name,money[count_money]);
                printf(RED"--------------------------------------------------------------------------------"RESET);
                scanf("%c",&choice);
                if (toupper(choice)=='C')
                {
                    printf(GRN"\nCORRECT!!!\n"RESET);
                    getchar();
                    count_money += 1;
                    printf("%s's bank increased to %s." ,name,money[count_money]);
                    sleep(1);
                    precount_money +=1;
                    if (precount_money == 16) {
                        winner();
                    }
                    break;

                }
                else if(toupper(choice) == 'A' ||toupper(choice) == 'B' ||toupper(choice) == 'D' )
                {
                    printf(RED"\nWRONG!!!\n"RESET);
                    getchar();
                    getchar();
                    play_again();
                    break;
                }
                else
                {
                    system("clear");
                    printf(RED"Invalid input!!!!\n"RESET);
                    sleep(1);
                }
            }break;
            case 14:while(1){
                getchar();
                system("clear");
                printf(RED"--------------------------------------------------------------------------------\n"RESET);
                printf("For %s > Sergio Leone, famous for directing the films The Good the Bad and the Ugly, and a Fistful of Dollars, was born in which country?\n",money[precount_money]);
                printf(RED"--------------------------------------------------------------------------------\n"RESET);
                printf("A.Spain\t\tB.Austria\n\nC.Argentina\tD.Italy\n");
                printf(RED"--------------------------------------------------------------------------------"RESET);
                printf(YEL"%s'S BANK : %s\n"RESET,name,money[count_money]);
                printf(RED"--------------------------------------------------------------------------------"RESET);
                scanf("%c",&choice);
                if (toupper(choice)=='D')
                {
                    printf(GRN"\nCORRECT!!!\n"RESET);
                    getchar();
                    count_money += 1;
                    printf("%s's bank increased to %s." ,name,money[count_money]);
                    sleep(1);
                    precount_money +=1;
                    if (precount_money == 16) {
                        winner();
                    }
                    break;

                }
                else if(toupper(choice) == 'A' ||toupper(choice) == 'B' ||toupper(choice) == 'C' )
                {
                    printf(RED"\nWRONG!!!\n"RESET);
                    getchar();
                    getchar();
                    play_again();
                    break;
                }
                else
                {
                    system("clear");
                    printf(RED"Invalid input!!!!\n"RESET);
                    sleep(1);
                }
            }break;
            case 15:while(1){
                getchar();
                system("clear");
                printf(RED"--------------------------------------------------------------------------------\n"RESET);
                printf("For %s > Starring Vin Diesel and Rose Leslie (of Game of Thrones fame), what was the title of this supernatural, action film?\n",money[precount_money]);
                printf(RED"--------------------------------------------------------------------------------\n"RESET);
                printf("A.Sinister\t\tB.The Last Witch Hunter\n\nC.Insidious\t\tD.It Follows\n");
                printf(RED"--------------------------------------------------------------------------------"RESET);
                printf(YEL"%s'S BANK : %s\n"RESET,name,money[count_money]);
                printf(RED"--------------------------------------------------------------------------------"RESET);
                scanf("%c",&choice);
                if (toupper(choice)=='B')
                {
                    printf(GRN"\nCORRECT!!!\n"RESET);
                    getchar();
                    count_money += 1;
                    printf("%s's bank increased to %s." ,name,money[count_money]);
                    sleep(1);
                    precount_money +=1;
                    if (precount_money == 16) {
                        winner();
                    }
                    break;

                }
                else if(toupper(choice) == 'A' ||toupper(choice) == 'C' ||toupper(choice) == 'D' )
                {
                    printf(RED"\nWRONG!!!\n"RESET);
                    getchar();
                    getchar();
                    play_again();
                    break;
                }
                else
                {
                    system("clear");
                    printf(RED"Invalid input!!!!\n"RESET);
                    sleep(1);
                }
            }break;
            case 16:while(1){
                getchar();
                system("clear");
                printf(RED"--------------------------------------------------------------------------------\n"RESET);
                printf("For %s > What was the name of Indiana Jones long lost son who appeared in the movie 'Indiana Jones and the Crystal Skull'?\n",money[precount_money]);
                printf(RED"--------------------------------------------------------------------------------\n"RESET);
                printf("A.Mutt Williams\t\tB.Ben Solo\n\nC.Short Round\t\tD.Henry Jones\n");
                printf(RED"--------------------------------------------------------------------------------"RESET);
                printf(YEL"%s'S BANK : %s\n"RESET,name,money[count_money]);
                printf(RED"--------------------------------------------------------------------------------"RESET);
                scanf("%c",&choice);
                if (toupper(choice)=='A')
                {
                    printf(GRN"\nCORRECT!!!\n"RESET);
                    getchar();
                    count_money += 1;
                    printf("%s's bank increased to %s." ,name,money[count_money]);
                    sleep(1);
                    precount_money +=1;
                    if (precount_money == 16) {
                        winner();
                    }
                    break;

                }
                else if(toupper(choice) == 'B' ||toupper(choice) == 'C' ||toupper(choice) == 'D' )
                {
                    printf(RED"\nWRONG!!!\n"RESET);
                    getchar();
                    getchar();
                    play_again();
                    break;
                }
                else
                {
                    system("clear");
                    printf(RED"Invalid input!!!!\n"RESET);
                    sleep(1);
                }
            }break;

            case 17:while(1){
                getchar();
                system("clear");
                printf(RED"--------------------------------------------------------------------------------\n"RESET);
                printf("For %s > What did Forest Gump's mother say 'Life was like'?\n",money[precount_money]);
                printf(RED"--------------------------------------------------------------------------------\n"RESET);
                printf("A.A handful of roses\t\tB.A lollipop\n\nC.A box of chocolates\t\tD.A bathtub full of shrimp\n");
                printf(RED"--------------------------------------------------------------------------------"RESET);
                printf(YEL"%s'S BANK : %s\n"RESET,name,money[count_money]);
                printf(RED"--------------------------------------------------------------------------------"RESET);
                scanf("%c",&choice);
                if (toupper(choice)=='C')
                {
                    printf(GRN"\nCORRECT!!!\n"RESET);
                    getchar();
                    count_money += 1;
                    printf("%s's bank increased to %s." ,name,money[count_money]);
                    sleep(1);
                    precount_money +=1;
                    if (precount_money == 16) {
                        winner();
                    }
                    break;

                }
                else if(toupper(choice) == 'A' ||toupper(choice) == 'B' ||toupper(choice) == 'D' )
                {
                    printf(RED"\nWRONG!!!\n"RESET);
                    getchar();
                    getchar();
                    play_again();
                    break;
                }
                else
                {
                    system("clear");
                    printf(RED"Invalid input!!!!\n"RESET);
                    sleep(1);
                }
            }break;
            case 18:while(1){
                getchar();
                system("clear");
                printf(RED"--------------------------------------------------------------------------------\n"RESET);
                printf("For %s > Which fictional character enjoyed eating some liver, with fava beans and a nice chianti?\n",money[precount_money]);
                printf(RED"--------------------------------------------------------------------------------\n"RESET);
                printf("A.Dr.Hannibal Lecter\t\tB.Dr.Frasier Crane\n\nC.Dr.Richard Kimble\t\tD.Dr.Victor Frankenstein\n");
                printf(RED"--------------------------------------------------------------------------------"RESET);
                printf(YEL"%s'S BANK : %s\n"RESET,name,money[count_money]);
                printf(RED"--------------------------------------------------------------------------------"RESET);
                scanf("%c",&choice);
                if (toupper(choice)=='A')
                {
                    printf(GRN"\nCORRECT!!!\n"RESET);
                    getchar();
                    count_money += 1;
                    printf("%s's bank increased to %s." ,name,money[count_money]);
                    sleep(1);
                    precount_money +=1;
                    if (precount_money == 16) {
                        winner();
                    }
                    break;

                }
                else if(toupper(choice) == 'B' ||toupper(choice) == 'C' ||toupper(choice) == 'D' )
                {
                    printf(RED"\nWRONG!!!\n"RESET);
                    getchar();
                    getchar();
                    play_again();
                    break;
                }
                else
                {
                    system("clear");
                    printf(RED"Invalid input!!!!\n"RESET);
                    sleep(1);
                }
            }break;
            case 19:while(1){
                getchar();
                system("clear");
                printf(RED"--------------------------------------------------------------------------------\n"RESET);
                printf("For %s > What musical group is character 'Marty McFly' a member of in the Film 'Back to the Future'?\n",money[precount_money]);
                printf(RED"--------------------------------------------------------------------------------\n"RESET);
                printf("A.Figrin D’an and the Modal Nodes\tB.Wyld Stallyns\n\nC.The Pinheads\t\t\t\tD.Steel Dragon\n");
                printf(RED"--------------------------------------------------------------------------------"RESET);
                printf(YEL"%s'S BANK : %s\n"RESET,name,money[count_money]);
                printf(RED"--------------------------------------------------------------------------------"RESET);
                scanf("%c",&choice);
                if (toupper(choice)=='C')
                {
                    printf(GRN"\nCORRECT!!!\n"RESET);
                    getchar();
                    count_money += 1;
                    printf("%s's bank increased to %s." ,name,money[count_money]);
                    sleep(1);
                    precount_money +=1;
                    if (precount_money == 16) {
                        winner();
                    }
                    break;

                }
                else if(toupper(choice) == 'A' ||toupper(choice) == 'B' ||toupper(choice) == 'D' )
                {
                    printf(RED"\nWRONG!!!\n"RESET);
                    getchar();
                    getchar();
                    play_again();
                    break;
                }
                else
                {
                    system("clear");
                    printf(RED"Invalid input!!!!\n"RESET);
                    sleep(1);
                }
            }break;
            case 20:while(1){
                getchar();
                system("clear");
                printf(RED"--------------------------------------------------------------------------------\n"RESET);
                printf("For %s > In the scene, where E.T. is lured to the home of Elliot, with Reese's Pieces, in the movie 'E.T. The Extra-terrestrial', what food did film makers want to use, but were refused permission to do so.\n",money[precount_money]);
                printf(RED"--------------------------------------------------------------------------------\n"RESET);
                printf("A.McDonald's French Fries\t\tB.Doritos Tortilla Chips\n\nC.M&M's\t\tD.Twizzler's Licorice\n");
                printf(RED"--------------------------------------------------------------------------------"RESET);
                printf(YEL"%s'S BANK : %s\n"RESET,name,money[count_money]);
                printf(RED"--------------------------------------------------------------------------------"RESET);
                scanf("%c",&choice);
                if (toupper(choice)=='C')
                {
                    printf(GRN"\nCORRECT!!!\n"RESET);
                    getchar();
                    count_money += 1;
                    printf("%s's bank increased to %s." ,name,money[count_money]);
                    sleep(1);
                    precount_money +=1;
                    if (precount_money == 16) {
                        winner();
                    }
                    break;

                }
                else if(toupper(choice) == 'A' ||toupper(choice) == 'B' ||toupper(choice) == 'D' )
                {
                    printf(RED"\nWRONG!!!\n"RESET);
                    getchar();
                    getchar();
                    play_again();
                    break;
                }
                else
                {
                    system("clear");
                    printf(RED"Invalid input!!!!\n"RESET);
                    sleep(1);
                }
            }break;
        }
    }
}



void Music(char  money[16][15])
{
    char choice;
    system("clear");
    printf(RED"\n\n\n================================================================================\n"RESET);
    printf(YEL"\t\t\t\tREADY\n");
    printf(RED"================================================================================\n"RESET);
    sleep(1);
    
    system("clear");
    printf(RED"\n\n\n================================================================================\n"RESET);
    printf(YEL"\t\t\t\tLET'S GO!!!!\n");
    printf(RED"================================================================================\n"RESET);
    sleep(1);

    system("clear");
    int count_q,Q[15],precount_money = 1;
    bool question[20]={};

    time_t t;
    srand((unsigned)time(&t));
    //random
    for(count_q=0; count_q<15; count_q++)
    {   //
        int random = rand()%20;


        if(!question[random]) {
            Q[count_q]= random;

        }
        else //check the same
            count_q--;
        question[random]=1;
    }

    //swap
    for (int i = 0; i < 15 - 1; i++) {
        for (int j = 0; j < 15-i - 1; j++) {
            if(Q[j]  > Q[j+1]) {
                int temp = Q[j];
                Q[j] = Q[j+1];
                Q[j+1]  = temp;
            }
        }
    }


    for(count_q=0; count_q<15; count_q++)
    {
        switch(Q[count_q])
        {
            case 0:while(1){
                getchar();
                system("clear");
                printf(RED"--------------------------------------------------------------------------------\n"RESET);
                printf("For %s > Ed Sheeran kicked off 2018 with a number track said to be inspired by a visit to James Blunt's in Ibiza. What was the title of the song?\n",money[precount_money]);
                printf(RED"--------------------------------------------------------------------------------\n"RESET);
                printf("A.Perfect\tB.Photograph\n\nC.Dive\t\tD.Galway girl\n");
                printf(RED"--------------------------------------------------------------------------------"RESET);
                printf(YEL"%s'S BANK : %s\n"RESET,name,money[count_money]);
                printf(RED"--------------------------------------------------------------------------------"RESET);
                scanf("%c",&choice);
                if (toupper(choice)=='A')
                {

                    printf(GRN"\nCORRECT!!!\n"RESET);
                    getchar();
                    count_money += 1;
                    printf("%s's bank increased to %s." ,name,money[count_money]);
                    sleep(1);
                    precount_money +=1;
                    if (precount_money == 16) {
                        winner();
                    }
                    break;

                }
                else if(toupper(choice) == 'B' ||toupper(choice) == 'C' ||toupper(choice) == 'D' )
                {
                    printf(RED"\nWRONG!!!\n"RESET);
                    getchar();
                    getchar();
                    play_again();
                    break;
                }
                else
                {
                    system("clear");
                    printf(RED"Invalid input!!!!\n"RESET);
                    sleep(1);
                }
            }break;

            case 1:while(1){
                getchar();
                system("clear");
                printf(RED"--------------------------------------------------------------------------------\n"RESET);
                printf("For %s> Who had a hit with Roar in 2011?\n",money[precount_money]);
                printf(RED"--------------------------------------------------------------------------------\n"RESET);
                printf("A.Rita Ora\tB.Taylor Swift\n\nC.Katy Perry\tD.Adele\n");
                printf(RED"--------------------------------------------------------------------------------"RESET);
                printf(YEL"%s'S BANK : %s\n"RESET,name,money[count_money]);
                printf(RED"--------------------------------------------------------------------------------"RESET);
                scanf("%c",&choice);
                if (toupper(choice)=='C')
                {
                    printf(GRN"\nCORRECT!!!\n"RESET);
                    getchar();
                    count_money += 1;
                    printf("%s's bank increased to %s." ,name,money[count_money]);
                    sleep(1);
                    precount_money +=1;
                    if (precount_money == 16) {
                        winner();
                    }
                    break;

                }
                else if(toupper(choice) == 'A' ||toupper(choice) == 'B' ||toupper(choice) == 'D' )
                {
                    printf(RED"\nWRONG!!!\n"RESET);
                    getchar();
                    getchar();
                    play_again();
                    break;
                }
                else
                {
                    system("clear");
                    printf(RED"Invalid input!!!!\n"RESET);
                    sleep(1);
                }
            }break;
            case 2:while(1){
                getchar();
                system("clear");
                printf(RED"--------------------------------------------------------------------------------\n"RESET);
                printf("For %s > Who was at a payphone, trying to phone home in 2012?\n",money[precount_money]);
                printf(RED"--------------------------------------------------------------------------------\n"RESET);
                printf("A.OneReplubic\t\tB.Maroon 5\n\nC.One Direction\t\tD.Imagine Dragon\n");
                printf(RED"--------------------------------------------------------------------------------"RESET);
                printf(YEL"%s'S BANK : %s\n"RESET,name,money[count_money]);
                printf(RED"--------------------------------------------------------------------------------"RESET);
                scanf("%c",&choice);
                if (toupper(choice)=='B')
                {
                    printf(GRN"\nCORRECT!!!\n"RESET);
                    getchar();
                    count_money += 1;
                    printf("%s's bank increased to %s." ,name,money[count_money]);
                    sleep(1);
                    precount_money +=1;
                    if (precount_money == 16) {
                        winner();
                    }
                    break;

                }
                else if(toupper(choice) == 'A' ||toupper(choice) == 'C' ||toupper(choice) == 'D' )
                {
                    printf(RED"\nWRONG!!!\n"RESET);
                    getchar();
                    getchar();
                    play_again();
                    break;
                }
                else
                {
                    system("clear");
                    printf(RED"Invalid input!!!!\n"RESET);
                    sleep(1);
                }
            }break;
            case 3:while(1){
                getchar();
                system("clear");
                printf(RED"--------------------------------------------------------------------------------\n"RESET);
                printf("For %s > Little Mix shot to fame after winning which talent contest?\n",money[precount_money]);
                printf(RED"--------------------------------------------------------------------------------\n"RESET);
                printf("A.The X factor\t\t\tB.The Voice\n\nC.Britain's Got Talent\t\tD.American Idol\n");
                printf(RED"--------------------------------------------------------------------------------"RESET);
                printf(YEL"%s'S BANK : %s\n"RESET,name,money[count_money]);
                printf(RED"--------------------------------------------------------------------------------"RESET);
                scanf("%c",&choice);
                if (toupper(choice)=='A')
                {
                    printf(GRN"\nCORRECT!!!\n"RESET);
                    getchar();
                    count_money += 1;
                    printf("%s's bank increased to %s." ,name,money[count_money]);
                    sleep(1);
                    precount_money +=1;
                    if (precount_money == 16) {
                        winner();
                    }
                    break;

                }
                else if(toupper(choice) == 'B' ||toupper(choice) == 'C' ||toupper(choice) == 'D' )
                {
                    printf(RED"\nWRONG!!!\n"RESET);
                    getchar();
                    getchar();
                    play_again();
                    break;
                }
                else
                {
                    system("clear");
                    printf(RED"Invalid input!!!!\n"RESET);
                    sleep(1);
                }
            }break;
            case 4:while(1){
                getchar();
                system("clear");
                printf(RED"--------------------------------------------------------------------------------\n"RESET);
                printf("For %s > Which Mark Ronson and Bruno Mars track spent 14 weeks on top of the Billboard Hot 100 in 2015?\n",money[precount_money]);
                printf(RED"--------------------------------------------------------------------------------\n"RESET);
                printf("A.Marry You\t\tB.Finesse\n\nC.24K Magic\t\tD.Uptown Funk\n");
                printf(RED"--------------------------------------------------------------------------------"RESET);
                printf(YEL"%s'S BANK : %s\n"RESET,name,money[count_money]);
                printf(RED"--------------------------------------------------------------------------------"RESET);
                scanf("%c",&choice);
                if (toupper(choice)=='D')
                {
                    printf(GRN"\nCORRECT!!!\n"RESET);
                    getchar();
                    count_money += 1;
                    printf("%s's bank increased to %s." ,name,money[count_money]);
                    sleep(1);
                    precount_money +=1;
                    if (precount_money == 16) {
                        winner();
                    }
                    break;

                }
                else if(toupper(choice) == 'A' ||toupper(choice) == 'C' ||toupper(choice) == 'B' )
                {
                    printf(RED"\nWRONG!!!\n"RESET);
                    getchar();
                    getchar();
                    play_again();
                    break;
                }
                else
                {
                    system("clear");
                    printf(RED"Invalid input!!!!\n"RESET);
                    sleep(1);
                }
            }break;
            case 5:
                system("clear");while(1){
                    getchar();
                printf(RED"--------------------------------------------------------------------------------\n"RESET);
                printf("For %s > Which song did not hit #1 on the Billboard Hot 100?\n",money[precount_money]);
                printf(RED"--------------------------------------------------------------------------------\n"RESET);
                printf("A.Shake It Off\t\tB.Blank Space\n\nC.You Belong With Me\tD.Bad Blood\n");
                printf(RED"--------------------------------------------------------------------------------"RESET);
                printf(YEL"%s'S BANK : %s\n"RESET,name,money[count_money]);
                printf(RED"--------------------------------------------------------------------------------"RESET);
                scanf("%c",&choice);
                if (toupper(choice)=='C')
                {
                    printf(GRN"\nCORRECT!!!\n"RESET);
                    getchar();
                    count_money += 1;
                    printf("%s's bank increased to %s." ,name,money[count_money]);
                    sleep(1);
                    precount_money +=1;
                    if (precount_money == 16) {
                        winner();
                    }
                    break;

                }
                else if(toupper(choice) == 'A' ||toupper(choice) == 'B' ||toupper(choice) == 'D' )
                {
                    printf(RED"\nWRONG!!!\n"RESET);
                    getchar();
                    getchar();
                    play_again();
                    break;
                }
                else
                {
                    system("clear");
                    printf(RED"Invalid input!!!!\n"RESET);
                    sleep(1);
                }
                }break;
            case 6:while(1){
                getchar();
                system("clear");
                printf(RED"--------------------------------------------------------------------------------\n"RESET);
                printf("For %s > Which album features the song 'Come Together' by The Beatles?\n",money[precount_money]);
                printf(RED"--------------------------------------------------------------------------------\n"RESET);
                printf("A.Abbey Road\t\tB.Rubber Soul\n\nC.Revolver\t\tD.Help!\n");
                printf(RED"--------------------------------------------------------------------------------"RESET);
                printf(YEL"%s'S BANK : %s\n"RESET,name,money[count_money]);
                printf(RED"--------------------------------------------------------------------------------"RESET);
                scanf("%c",&choice);
                if (toupper(choice)=='A')
                {
                    printf(GRN"\nCORRECT!!!\n"RESET);
                    getchar();
                    count_money += 1;
                    printf("%s's bank increased to %s." ,name,money[count_money]);
                    sleep(1);
                    precount_money +=1;
                    if (precount_money == 16) {
                        winner();
                    }
                    break;

                }
                else if(toupper(choice) == 'B' ||toupper(choice) == 'C' ||toupper(choice) == 'D' )
                {
                    printf(RED"\nWRONG!!!\n"RESET);
                    getchar();
                    getchar();
                    play_again();
                    break;
                }
                else
                {
                    system("clear");
                    printf(RED"Invalid input!!!!\n"RESET);
                    sleep(1);
                }
            }break;
            case 7:while(1){
                getchar();
                system("clear");
                printf(RED"--------------------------------------------------------------------------------\n"RESET);
                printf("For %s > With which US rapper did Ed Sheeran provide guest vocals for to briefly score a UK number one in January 2018?\n",money[precount_money]);
                printf(RED"--------------------------------------------------------------------------------\n"RESET);
                printf("A.Kendrick Lamar\t\tB.Eminem\n\nC.Kanye West\t\tD.Drake\n");
                printf(RED"--------------------------------------------------------------------------------"RESET);
                printf(YEL"%s'S BANK : %s\n"RESET,name,money[count_money]);
                printf(RED"--------------------------------------------------------------------------------"RESET);
                scanf("%c",&choice);
                if (toupper(choice)=='B')
                {
                    printf(GRN"\nCORRECT!!!\n"RESET);
                    getchar();
                    count_money += 1;
                    printf("%s's bank increased to %s." ,name,money[count_money]);
                    sleep(1);
                    precount_money +=1;
                    if (precount_money == 16) {
                        winner();
                    }
                    break;

                }
                else if(toupper(choice) == 'A' ||toupper(choice) == 'C' ||toupper(choice) == 'D' )
                {
                    printf(RED"\nWRONG!!!\n"RESET);
                    getchar();
                    getchar();
                    play_again();
                    break;
                }
                else
                {
                    system("clear");
                    printf(RED"Invalid input!!!!\n"RESET);
                    sleep(1);
                }
            }break;
            case 8:while(1){
                getchar();
                system("clear");
                printf(RED"--------------------------------------------------------------------------------\n"RESET);
                printf("For %s > In which year did The Beatles release 'Hey Jude'?\n",money[precount_money]);
                printf(RED"--------------------------------------------------------------------------------\n"RESET);
                printf("A.1963\t\tB.1966\n\nC.1968\t\tD.1971\n");
                printf(RED"--------------------------------------------------------------------------------"RESET);
                printf(YEL"%s'S BANK : %s\n"RESET,name,money[count_money]);
                printf(RED"--------------------------------------------------------------------------------"RESET);
                scanf("%c",&choice);
                if (toupper(choice)=='C')
                {
                    printf(GRN"\nCORRECT!!!\n"RESET);
                    getchar();
                    count_money += 1;
                    printf("%s's bank increased to %s." ,name,money[count_money]);
                    sleep(1);
                    precount_money +=1;
                    if (precount_money == 16) {
                        winner();
                    }
                    break;

                }
                else if(toupper(choice) == 'A' ||toupper(choice) == 'B' ||toupper(choice) == 'D' )
                {
                    printf(RED"\nWRONG!!!\n"RESET);
                    getchar();
                    getchar();
                    play_again();
                    break;
                }
                else
                {
                    system("clear");
                    printf(RED"Invalid input!!!!\n"RESET);
                    sleep(1);
                }
            }break;
            case 9:while(1){
                getchar();
                system("clear");
                printf(RED"--------------------------------------------------------------------------------\n"RESET);
                printf("For %s > Who won the 2015 Grammy Award for Record of the Year?\n",money[precount_money]);
                printf(RED"--------------------------------------------------------------------------------\n"RESET);
                printf("A.Sia\t\tB.Iggy Azalea\n\nC.Sam Smith\t\tD.Meghan Trainor\n");
                printf(RED"--------------------------------------------------------------------------------"RESET);
                printf(YEL"%s'S BANK : %s\n"RESET,name,money[count_money]);
                printf(RED"--------------------------------------------------------------------------------"RESET);
                scanf("%c",&choice);
                if (toupper(choice)=='C')
                {
                    printf(GRN"\nCORRECT!!!\n"RESET);
                    getchar();
                    count_money += 1;
                    printf("%s's bank increased to %s." ,name,money[count_money]);
                    sleep(1);
                    precount_money +=1;
                    if (precount_money == 16) {
                        winner();
                    }
                    break;

                }
                else if(toupper(choice) == 'A' ||toupper(choice) == 'B' ||toupper(choice) == 'D' )
                {
                    printf(RED"\nWRONG!!!\n"RESET);
                    getchar();
                    getchar();
                    play_again();
                    break;
                }
                else
                {
                    system("clear");
                    printf(RED"Invalid input!!!!\n"RESET);
                    sleep(1);
                }
            }break;
            case 10:while(1){
                getchar();
                system("clear");
                printf(RED"--------------------------------------------------------------------------------\n"RESET);
                printf("For %s > Complete the missing lyric: 'Is this the real life? Is this just _____?'\n",money[precount_money]);
                printf(RED"--------------------------------------------------------------------------------\n"RESET);
                printf("A.imagination\t\tB.delusion\n\nC.destiny\t\tD.fantasy\n");
                printf(RED"--------------------------------------------------------------------------------"RESET);
                printf(YEL"%s'S BANK : %s\n"RESET,name,money[count_money]);
                printf(RED"--------------------------------------------------------------------------------"RESET);
                scanf("%c",&choice);
                if (toupper(choice)=='D')
                {
                    printf(GRN"\nCORRECT!!!\n"RESET);
                    getchar();
                    count_money += 1;
                    printf("%s's bank increased to %s." ,name,money[count_money]);
                    sleep(1);
                    precount_money +=1;
                    if (precount_money == 16) {
                        winner();
                    }
                    break;

                }
                else if(toupper(choice) == 'A' ||toupper(choice) == 'C' ||toupper(choice) == 'B' )
                {
                    printf(RED"\nWRONG!!!\n"RESET);
                    getchar();
                    getchar();
                    play_again();
                    break;
                }
                else
                {
                    system("clear");
                    printf(RED"Invalid input!!!!\n"RESET);
                    sleep(1);
                }
            }break;
            case 11:while(1){
                getchar();
                system("clear");
                printf(RED"--------------------------------------------------------------------------------\n"RESET);
                printf("For %s > Which Michael Jackson album featured the single, 'Beat It'?\n",money[precount_money]);
                printf(RED"--------------------------------------------------------------------------------\n"RESET);
                printf("A.Thriller\t\tB.Invincibile\n\nC.Dangerous\t\tD.Bad\n");
                printf(RED"--------------------------------------------------------------------------------"RESET);
                printf(YEL"%s'S BANK : %s\n"RESET,name,money[count_money]);
                printf(RED"--------------------------------------------------------------------------------"RESET);
                scanf("%c",&choice);
                if (toupper(choice)=='A')
                {
                    printf(GRN"\nCORRECT!!!\n"RESET);
                    getchar();
                    count_money += 1;
                    printf("%s's bank increased to %s." ,name,money[count_money]);
                    sleep(1);
                    precount_money +=1;
                    if (precount_money == 16) {
                        winner();
                    }
                    break;

                }
                else if(toupper(choice) == 'B' ||toupper(choice) == 'C' ||toupper(choice) == 'D' )
                {
                    printf(RED"\nWRONG!!!\n"RESET);
                    getchar();
                    getchar();
                    play_again();
                    break;
                }
                else
                {
                    system("clear");
                    printf(RED"Invalid input!!!!\n"RESET);
                    sleep(1);
                }
            }break;
            case 12:while(1){
                getchar();
                system("clear");
                printf(RED"--------------------------------------------------------------------------------\n"RESET);
                printf("For %s > What color is also the name of a Taylor Swift album?\n",money[precount_money]);
                printf(RED"--------------------------------------------------------------------------------\n"RESET);
                printf("A.Orange\t\tB.Yellow\n\nC.Purple\t\tD.Red\n");
                printf(RED"--------------------------------------------------------------------------------"RESET);
                printf(YEL"%s'S BANK : %s\n"RESET,name,money[count_money]);
                printf(RED"--------------------------------------------------------------------------------"RESET);
                scanf("%c",&choice);
                if (toupper(choice)=='D')
                {
                    printf(GRN"\nCORRECT!!!\n"RESET);
                    getchar();
                    count_money += 1;
                    printf("%s's bank increased to %s." ,name,money[count_money]);
                    sleep(1);
                    precount_money +=1;
                    if (precount_money == 16) {
                        winner();
                    }
                    break;

                }
                else if(toupper(choice) == 'A' ||toupper(choice) == 'C' ||toupper(choice) == 'B' )
                {
                    printf(RED"\nWRONG!!!\n"RESET);
                    getchar();
                    getchar();
                    play_again();
                    break;
                }
                else
                {
                    system("clear");
                    printf(RED"Invalid input!!!!\n"RESET);
                    sleep(1);
                }
            }break;
            case 13:while(1){
                getchar();
                system("clear");
                printf(RED"--------------------------------------------------------------------------------\n"RESET);
                printf("For %s > In which US state can the 'Birthplace of Country Music Museum' be found?\n",money[precount_money]);
                printf(RED"--------------------------------------------------------------------------------\n"RESET);
                printf("A.Kentucky\t\tB.Tennessee\n\nC.Virginia\t\tD.Alabama\n");
                printf(RED"--------------------------------------------------------------------------------"RESET);
                printf(YEL"%s'S BANK : %s\n"RESET,name,money[count_money]);
                printf(RED"--------------------------------------------------------------------------------"RESET);
                scanf("%c",&choice);
                if (toupper(choice)=='C')
                {
                    printf(GRN"\nCORRECT!!!\n"RESET);
                    getchar();
                    count_money += 1;
                    printf("%s's bank increased to %s." ,name,money[count_money]);
                    sleep(1);
                    precount_money +=1;
                    if (precount_money == 16) {
                        winner();
                    }
                    break;

                }
                else if(toupper(choice) == 'A' ||toupper(choice) == 'B' ||toupper(choice) == 'D' )
                {
                    printf(RED"\nWRONG!!!\n"RESET);
                    getchar();
                    getchar();
                    play_again();
                    break;
                }
                else
                {
                    system("clear");
                    printf(RED"Invalid input!!!!\n"RESET);
                    sleep(1);
                }
            }break;
            case 14:while(1){
                getchar();
                system("clear");
                printf(RED"--------------------------------------------------------------------------------\n"RESET);
                printf("For %s > Which Lady Gaga song contains the lyrics: 'And after he's been hooked I'll play the one that's on his heart'? \n",money[precount_money]);
                printf(RED"--------------------------------------------------------------------------------\n"RESET);
                printf("A.Born This Way\t\tB.Paparazzi\n\nC.Shallow\t\tD.Poker Face\n");
                printf(RED"--------------------------------------------------------------------------------"RESET);
                printf(YEL"%s'S BANK : %s\n"RESET,name,money[count_money]);
                printf(RED"--------------------------------------------------------------------------------"RESET);
                scanf("%c",&choice);
                if (toupper(choice)=='D')
                {
                    printf(GRN"\nCORRECT!!!\n"RESET);
                    getchar();
                    count_money += 1;
                    printf("%s's bank increased to %s." ,name,money[count_money]);
                    sleep(1);
                    precount_money +=1;
                    if (precount_money == 16) {
                        winner();
                    }
                    break;

                }
                else if(toupper(choice) == 'A' ||toupper(choice) == 'C' ||toupper(choice) == 'B' )
                {
                    printf(RED"\nWRONG!!!\n"RESET);
                    getchar();
                    getchar();
                    play_again();
                    break;
                }
                else
                {
                    system("clear");
                    printf(RED"Invalid input!!!!\n"RESET);
                    sleep(1);
                }
            }break;
            case 15:while(1){
                getchar();
                system("clear");
                printf(RED"--------------------------------------------------------------------------------\n"RESET);
                printf("For %s > Eddie Van Halen, Eric Clapton, and Jimmy Page all use what instrument?\n",money[precount_money]);
                printf(RED"--------------------------------------------------------------------------------\n"RESET);
                printf("A.Bass\t\tB.Guitar\n\nC.Drums\t\tD.Keyboards\n");
                printf(RED"--------------------------------------------------------------------------------"RESET);
                printf(YEL"%s'S BANK : %s\n"RESET,name,money[count_money]);
                printf(RED"--------------------------------------------------------------------------------"RESET);
                scanf("%c",&choice);
                if (toupper(choice)=='B')
                {
                    printf(GRN"\nCORRECT!!!\n"RESET);
                    getchar();
                    count_money += 1;
                    printf("%s's bank increased to %s." ,name,money[count_money]);
                    sleep(1);
                    precount_money +=1;
                    if (precount_money == 16) {
                        winner();
                    }
                    break;

                }
                else if(toupper(choice) == 'A' ||toupper(choice) == 'C' ||toupper(choice) == 'D' )
                {
                    printf(RED"\nWRONG!!!\n"RESET);
                    getchar();
                    getchar();
                    play_again();
                    break;
                }
                else
                {
                    system("clear");
                    printf(RED"Invalid input!!!!\n"RESET);
                    sleep(1);
                }
            }break;
            case 16:while(1){
                getchar();
                system("clear");
                printf(RED"--------------------------------------------------------------------------------\n"RESET);
                printf("For %s > \"Whole Lotta Love\", \"Stairway To Heaven\" and \"Kashmir\", were from which of these very popular bands?\n",money[precount_money]);
                printf(RED"--------------------------------------------------------------------------------\n"RESET);
                printf("A.Led Zeppelin\t\tB.Cream\n\nC.Black Sabbath\t\tD.Grateful Dead\n");
                printf(RED"--------------------------------------------------------------------------------"RESET);
                printf(YEL"%s'S BANK : %s\n"RESET,name,money[count_money]);
                printf(RED"--------------------------------------------------------------------------------"RESET);
                scanf("%c",&choice);
                if (toupper(choice)=='A')
                {
                    printf(GRN"\nCORRECT!!!\n"RESET);
                    getchar();
                    count_money += 1;
                    printf("%s's bank increased to %s." ,name,money[count_money]);
                    sleep(1);
                    precount_money +=1;
                    if (precount_money == 16) {
                        winner();
                    }
                    break;

                }
                else if(toupper(choice) == 'B' ||toupper(choice) == 'C' ||toupper(choice) == 'D' )
                {
                    printf(RED"\nWRONG!!!\n"RESET);
                    getchar();
                    getchar();
                    play_again();
                    break;
                }
                else
                {
                    system("clear");
                    printf(RED"Invalid input!!!!\n"RESET);
                    sleep(1);
                }
            }break;
            case 17:while(1){
                getchar();
                system("clear");
                printf(RED"--------------------------------------------------------------------------------\n"RESET);
                printf("For %s > Arcade Fire is a group from which country?\n",money[precount_money]);
                printf(RED"--------------------------------------------------------------------------------\n"RESET);
                printf("A.United Kingdom\t\tB.United States\n\nC.Canada\t\tD.Australia\n");
                printf(RED"--------------------------------------------------------------------------------"RESET);
                printf(YEL"%s'S BANK : %s\n"RESET,name,money[count_money]);
                printf(RED"--------------------------------------------------------------------------------"RESET);
                scanf("%c",&choice);
                if (toupper(choice)=='C')
                {
                    printf(GRN"\nCORRECT!!!\n"RESET);
                    getchar();
                    count_money += 1;
                    printf("%s's bank increased to %s." ,name,money[count_money]);
                    sleep(1);
                    precount_money +=1;
                    if (precount_money == 16) {
                        winner();
                    }
                    break;

                }
                else if(toupper(choice) == 'A' ||toupper(choice) == 'B' ||toupper(choice) == 'D' )
                {
                    printf(RED"\nWRONG!!!\n"RESET);
                    getchar();
                    getchar();
                    play_again();
                    break;
                }
                else
                {
                    system("clear");
                    printf(RED"Invalid input!!!!\n"RESET);
                    sleep(1);
                }
            }break;
            case 18:while(1){
                getchar();
                system("clear");
                printf(RED"--------------------------------------------------------------------------------\n"RESET);
                printf("For %s > In what year did MTV (Music Television) premiere?\n",money[precount_money]);
                printf(RED"--------------------------------------------------------------------------------\n"RESET);
                printf("A.2000\t\tB.1981\n\nC.1990\t\tD.1979\n");
                printf(RED"--------------------------------------------------------------------------------"RESET);
                printf(YEL"%s'S BANK : %s\n"RESET,name,money[count_money]);
                printf(RED"--------------------------------------------------------------------------------"RESET);
                scanf("%c",&choice);
                if (toupper(choice)=='B')
                {
                    printf(GRN"\nCORRECT!!!\n"RESET);
                    getchar();
                    count_money += 1;
                    printf("%s's bank increased to %s." ,name,money[count_money]);
                    sleep(1);
                    precount_money +=1;
                    if (precount_money == 16) {
                        winner();
                    }
                    break;

                }
                else if(toupper(choice) == 'A' ||toupper(choice) == 'C' ||toupper(choice) == 'D' )
                {
                    printf(RED"\nWRONG!!!\n"RESET);
                    getchar();
                    getchar();
                    play_again();
                    break;
                }
                else
                {
                    system("clear");
                    printf(RED"Invalid input!!!!\n"RESET);
                    sleep(1);
                }
            }break;
            case 19:while(1){
                getchar();
                system("clear");
                printf(RED"--------------------------------------------------------------------------------\n"RESET);
                printf("For %s > Which George Ezra single returned to the top of the UK charts in August 2018, following an early stint at the top of the charts in July?\n",money[precount_money]);
                printf(RED"--------------------------------------------------------------------------------\n"RESET);
                printf("A.Budapest\tB.Shotgun\n\nC.Paradise\t\tD.Hold My Girl\n");
                printf(RED"--------------------------------------------------------------------------------"RESET);
                printf(YEL"%s'S BANK : %s\n"RESET,name,money[count_money]);
                printf(RED"--------------------------------------------------------------------------------"RESET);
                scanf("%c",&choice);
                if (toupper(choice)=='B')
                {
                    printf(GRN"\nCORRECT!!!\n"RESET);
                    getchar();
                    count_money += 1;
                    printf("%s's bank increased to %s." ,name,money[count_money]);
                    sleep(1);
                    precount_money +=1;
                    if (precount_money == 16) {
                        winner();
                    }
                    break;

                }
                else if(toupper(choice) == 'A' ||toupper(choice) == 'C' ||toupper(choice) == 'D' )
                {
                    printf(RED"\nWRONG!!!\n"RESET);
                    getchar();
                    getchar();
                    play_again();
                    break;
                }
                else
                {
                    system("clear");
                    printf(RED"Invalid input!!!!\n"RESET);
                    sleep(1);
                }
            }break;
            case 20:while(1){
                getchar();
                system("clear");
                printf(RED"--------------------------------------------------------------------------------\n"RESET);
                printf("For %s > The squad of Manchester United collaborated with which British rock group to record 'Come On You Reds' for the 1994 FA Cup Final?\n",money[precount_money]);
                printf(RED"--------------------------------------------------------------------------------\n"RESET);
                printf("A.Status Quo\t\tB.Slade\n\nC.Chas and Dave\t\tD.Queen\n");
                printf(RED"--------------------------------------------------------------------------------"RESET);
                printf(YEL"%s'S BANK : %s\n"RESET,name,money[count_money]);
                printf(RED"--------------------------------------------------------------------------------"RESET);
                scanf("%c",&choice);
                if (toupper(choice)=='A')
                {
                    printf(GRN"\nCORRECT!!!\n"RESET);
                    getchar();
                    count_money += 1;
                    printf("%s's bank increased to %s." ,name,money[count_money]);
                    sleep(1);
                    precount_money +=1;
                    if (precount_money == 16) {
                        winner();
                    }
                    break;

                }
                else if(toupper(choice) == 'B' ||toupper(choice) == 'C' ||toupper(choice) == 'D' )
                {
                    printf(RED"\nWRONG!!!\n"RESET);
                    getchar();
                    getchar();
                    play_again();
                    break;
                }
                else
                {
                    system("clear");
                    printf(RED"Invalid input!!!!\n"RESET);
                    sleep(1);
                }
            }break;
        }

    }

}




void quit()
{
    printf(YEL"\t\t\tAre you sure to exit the game?\n");
    printf(RED"\t\t\t------------------------------\n"RESET);
    printf(RED"\t\t\t YES[Y]\n");
    printf(GRN"\t\t\t NO[N]\n"RESET);
    printf(RED"\t\t\t------------------------------\n"RESET);
    toupper(getchar());
    choice = (toupper(getchar()));
    if (choice == 'Y')
    {
        exit(1);
    }
    else if (choice == 'N')
    {
        main();
    }
}

void genres(char  money[16][15])
{
    system("clear");
    printf(RED"\n\n\n================================================================================\n"RESET);
    printf(YEL"\t\t\tCHOOSE GENRES\n");
    printf(RED"================================================================================\n"RESET);
    printf("\t\t\t> Classic[C]\n");
    printf("\t\t\t> Sports[S]\n");
    printf("\t\t\t> Film[F]\n");
    printf("\t\t\t> Music[M]\n");
    choice = (toupper(getchar()));
    toupper(getchar());
    system("clear");
    count_money = 0;

    if (choice == 'S')
    {
        printf(RED"\n\n\n================================================================================\n"RESET);
        printf(YEL"\t\t\tARE YOU SURE ABOUT CHOOSING \"SPORTS\"[Y/N]?\n");
        printf(RED"================================================================================\n\t\t\t   "RESET);
        choice = (toupper(getchar()));
        if (choice == 'Y')
        {
            Sports(money);
        }
        else if (choice == 'N')
        {
            genres(money);
        }
        else {
            system("clear");
            printf(RED"Invalid input!!!!(Press any key to return)"RESET);
            getchar();
            system("clear");
            genres(money);
        }
    }
    else if (choice == 'F')
    {
        printf(RED"\n\n\n================================================================================\n"RESET);
        printf(YEL"\t\t\tARE YOU SURE ABOUT CHOOSING \"FILM\"[Y/N]?\n");
        printf(RED"================================================================================\n\t\t\t   "RESET);
        choice = (toupper(getchar()));
        if (choice == 'Y')
        {
            Film(money);
        }
        else if (choice == 'N')
        {
            genres(money);
        }
        else {
            system("clear");
            printf(RED"Invalid input!!!!(Press any key to return)"RESET);
            getchar();
            system("clear");
            genres(money);
        }
    }
    else if (choice == 'M')
    {
        printf(RED"\n\n\n================================================================================\n"RESET);
        printf(YEL"\t\t\tARE YOU SURE ABOUT CHOOSING \"MUSIC\"[Y/N]?\n");
        printf(RED"================================================================================\n\t\t\t   "RESET);
        choice = (toupper(getchar()));
        if (choice == 'Y')
        {
            Music(money);
        }
        else if (choice == 'N')
        {
            genres(money);
        }
        else {
            system("clear");
            printf(RED"Invalid input!!!!(Press any key to return)"RESET);
            getchar();
            system("clear");
            genres(money);
        }
    }
    else if (choice == 'C')
    {
        printf(RED"\n\n\n================================================================================\n"RESET);
        printf(YEL"\t\t\tARE YOU SURE ABOUT CHOOSING \"CLASSIC\"[Y/N]?\n");
        printf(RED"================================================================================\n\t\t\t   "RESET);
        choice = (toupper(getchar()));
        if (choice == 'Y')
        {
            Classic(money);
        }
        else if (choice == 'N')
        {
            genres(money);
        }
        else {
            system("clear");
            printf(RED"Invalid input!!!!(Press any key to return)"RESET);
            getchar();
            system("clear");
            genres(money);
        }
        
    }
    else {
        system("clear");
        printf(RED"Invalid input!!!!(Press any key to return)"RESET);
        getchar();
        system("clear");
        genres(money);}
}


void game()
{   printf(RED"\n\n\n================================================================================\n"RESET);
    printf(YEL"\t\t\t\tENTER YOUR NAME\n");
    printf(RED"================================================================================\n\t\t\t\t  "RESET);
    scanf("%s",name);
    
    system("clear");
    printf(RED"\n\n\n================================================================================\n"RESET);
    printf(YEL"\t\t\t\"%s\"IS THAT YOUR NAME[Y/N]?\n",name);
    printf(RED"================================================================================\n\t\t\t\t  "RESET);
    toupper(getchar());
    choice = (toupper(getchar()));
    if(choice == 'Y')
    {
        system("clear");
        getchar();
        genres(money);

    }
    else if(choice == 'N')
    {
        system("clear");
        game();
    }
    else {
        system("clear");
        printf(RED"Invalid input!!!!(Press any key to return)"RESET);
        getchar();
        getchar();
        system("clear");
        game();
    }
}

void help()
{
    system("clear");
    printf("\n\t\t\t\t$RULE$\n");
    printf(RED"--------------------------------------------------------------\n"YEL);
    printf("\tThis is a quiz game which objective is you have\n");
    printf("to make money as much as you can(max at around 1 million\n");
    printf("pounds) by answering a questions.Furthermore, There are\n");
    printf("15 questions and it will have several genres which you can\n");
    printf("choose such as general knowledge, movies, sports and many\n");
    printf("more.Finally,Question will getting harder in every next level.\n");
    printf(RED"--------------------------------------------------------------\n"RESET);
    printf(RED"*********************"YEL"BEST OF LUCK"RED"******************************");
    printf(RED"\n*****"YEL"This project is developed by Thirayut Sriphochang"RED"********\n"RESET);
    printf("\n\nPress any key to back.\n\n\n");
}

void play_again()
{
    system("clear");
    printf(RED"\n\n\n================================================================================\n"RESET);
    printf(YEL"\t\t\tUNFORTUNATELY,You just got only %s.\n"RESET,money[count_money]);
    printf(RED"================================================================================"RESET);
    getchar();

    system("clear");
home:   printf(RED"\n\n\n================================================================================\n"RESET);
        printf(YEL"\t\tONE MORE CHANCE,TO BE MILLIONAIRE[Y/N]?\n");
        printf(RED"================================================================================"RESET);
        choice = (toupper(getchar()));
        toupper(getchar());
        if (choice == 'Y')
        {
            genres(money);
        }
        else if (choice == 'N')
        {
            main();
        }
        else {
            system("clear");
            printf(RED"Invalid input!!!!(Press any key to return)"RESET);
            getchar();
            system("clear");
            goto home;
        }
}

void winner() {
    getchar();
    system("clear");
    printf(RED"\n\n\n================================================================================\n"RESET);
    printf(YEL"\t\t\tCONGRATULATION!!!!!\n");
    printf(YEL"\t\t\t%s,YOU'RE A NEWEST MILLIONAIRE!!!!\n",name);
    printf(RED"================================================================================\n"RESET);
    sleep(4);

    system("clear");
    printf("Thank for playing.(press any key to return to main menu)");
    getchar();
    main();
    }

//void score() {
//    system("clear");
//    printf(RED"--------------------------------------------------------------------------------\n"YEL);
//    printf("\t\t\t\tTOP 10 MILLIONAIRE\n");
//    printf(RED"--------------------------------------------------------------------------------\n"RESET);
//    printf("%s : %s",name,money[count_money]);
//
//}

int main()
{

    while(1){
        system("clear");
        printf(RED"   ==========================================================================\n"RESET);
        printf(YEL"   .-. .-. . .   . . .-. . .   .-. .-.\n");
        printf("   |   |-| |\\|    |  | | | |   |(  |-  \n");
        printf("   `-' ` ' ' `    `  `-' `-'   `-' `-' \n");
        printf("       __  ___ ______    __    ________  _   _____    ________  _________ \n");
        printf("      /  |/  //  _/ /   / /   /  _/ __ \\/ | / /   |  /  _/ __ \\/ ____/__ \\\n");
        printf("     / /|_/ / / // /   / /    / // / / /  |/ / /| |  / // /_/ / __/    /_/\n");
        printf("    / /  / /_/ // /___/ /____/ // /_/ / /|  / ___ |_/ // _, _/ /___   /_/  \n");
        printf("   /_/  /_//___/_____/_____/___/\\____/_/ |_/_/  |_/___/_/ |_/_____/   (_)   \n"RESET);
        printf(RED"   ==========================================================================\n"RESET);
        printf("                                                                    QUIZ GAME\n");
        printf("\n\n\t\t\t---------------------------------\n");
        printf("\t\t\t> Press S to start the game\n");
//        printf("\t\t\t> Press V to view the richest billionaire \n");
        printf("\t\t\t> Press H for help\n");
        printf("\t\t\t> Press Q to quit\n");
        printf("\t\t\t---------------------------------\n");
        choice = toupper(getchar());
        if (choice == 'H')
        {
            help();
            getchar();
            getchar();
        }
        else if(choice == 'S')
        {
            system("clear");
            game();
        }
        else if(choice == 'Q')
        {
            system("clear");
            quit();
        }
//        else if(choice == 'V')
//        {
//            system("clear");
//            score();
//            getchar();
//            getchar();
//        }
    }
}





