#include <stdio.h>
#include <conio.h>
#include <ctype.h> //toupper
#include <stdlib.h>
#include <string.h>
#include<time.h>
void show_record();//see highest score
void edit_score(float, char[]);
void help();        // see game rules
int main()
{srand(time(NULL));
    int countr, r, r1, count, i, n;
    float score;
    char choice;
    char playername[20];
mainhome: // working mainhome
    system("cls");
    printf("\t\t\tC PROGRAM QUIZ GAME\n");
    printf("\n\t\t________________________________________");
    printf("\n\t\t\t   WELCOME ");
    printf("\n\t\t\t      to ");
    printf("\n\t\t\t   THE GAME ");
    printf("\n\t\t________________________________________");
    printf("\n\t\t________________________________________");
    printf("\n\t\t   BECOME A MILLIONAIRE!!!!!!!!!!!    ");
    printf("\n\t\t________________________________________");
    printf("\n\t\t________________________________________");
    printf("\n\t\t > Press S to start the game");
    printf("\n\t\t > Press V to view the highest score  ");
    printf("\n\t\t > press H for help            ");
    printf("\n\t\t > press Q to quit             ");
    printf("\n\t\t________________________________________\n\n");
    choice = toupper(getch()); // handle lowercase and uppercase word
    if (choice == 'V')
	{
		show_record();
		goto mainhome;
	}
	else if (choice == 'H')
	{
		help();
		getch();
		goto mainhome;
	 }
	else if (choice == 'Q')
		exit(1);
	else if (choice == 'S')
	{
        system("cls");

        printf("\n\n\n\n\n\n\n\n\n\n\t\t\tResister your name:");
        gets(playername); // read playername

        system("cls"); // clearscreen
        printf("\n ------------------  Welcome %s to C Program Quiz Game --------------------------", playername);
        printf("\n\n Here are some tips you might wanna know before playing:");
        printf("\n -------------------------------------------------------------------------");
        printf("\n >> There are 2 rounds in this Quiz Game,WARMUP ROUND & CHALLANGE ROUND");
        printf("\n >> In warmup round you will be asked a total of 3 questions to test your");
        printf("\n    general knowledge. You are eligible to play the game if you give atleast 2");
        printf("\n    right answers, otherwise you can't proceed further to the Challenge Round.");
        printf("\n >> Your game starts with CHALLANGE ROUND. In this round you will be asked a");
        printf("\n    total of 10 questions. Each right answer will be awarded $100,000!");
        printf("\n    By this way you can win upto ONE MILLION cash prize!!!!!..........");
        printf("\n >> You will be given 4 options and you have to press A, B ,C or D for the");
        printf("\n    right option.");
        printf("\n >> You will be asked questions continuously, till right answers are given");
        printf("\n >> No negative marking for wrong answers!");
        printf("\n\n\t!!!!!!!!!!!!! ALL THE BEST !!!!!!!!!!!!!");
        printf("\n\n\n Press Y  to start the game!\n");
        printf("\n Press any other key to return to the main menu!");
        if (toupper(getch()) == 'Y')
        {
            printf("NOTE -> if you entered any option other then A,B,C,D then your question will be skipped as a punishment !!!");
           // delay(500);
            goto home; // home
        }
        else
        {
            goto mainhome; // mainhome
            system("cls");
        }

    home: // this is home , home working
        system("cls");
        count = 0;
        for (i = 1; i <= 3; i++)
        {
            system("cls");
            
            r1 = i;
             r1=rand()%6;
            switch (r1)
            
            {
            case 1:
                printf("\n\nWhich of the following is a Palindrome number?");
                printf("\n\nA.42042\t\tB.101010\n\nC.23232\t\tD.01234");
                
                if (toupper(getch()) == 'C')
                {
                    printf("\n\nCorrect answer!!!");
                    count++; // count score
                    getch();
                    break;
                }
                else if(toupper(getch()) == 'A' || toupper(getch()) == 'B' || toupper(getch()) == 'D'){
                
                    printf("\n\nWrong answer!!! The correct answer is C.23232");
                    getch();
                    break; // you are not eligible
                }
                else if(toupper(getch()) != 'A' || toupper(getch()) != 'B' || toupper(getch()) != 'C' || toupper(getch()) != 'D'){
                    printf("\nPlease Enter Correct Option (A,B,C,D) \n");
                    getch();
                    break;
                }
                else{
                }
                

            case 2:
                printf("\n\n\nThe country with the highest environmental performance index is...");
                printf("\n\nA.France\t\tB.Denmark\n\nC.Switzerland\t\tD.Finland");
                
                if (toupper(getch()) == 'C')
                {
                    printf("\n\nCorrect answer!!!");
                    count++;
                    getch();
                    break;
                }
                else if(toupper(getch()) == 'A' || toupper(getch()) == 'B' || toupper(getch()) == 'D')
                {
                    printf("\n\nWrong answer!!! The correct answer is C.Switzerland");
                    getch();
                    break;
                }
                else if(toupper(getch()) != 'A' || toupper(getch()) != 'B' || toupper(getch()) != 'C' || toupper(getch()) != 'D'){
                    printf("\nPlease Enter Correct Option (A,B,C,D) \n");
                     getch();
                    break;
                }
                else{
                }

            case 3:
                printf("\n\n\nWhich animal laughs like human being?");
                printf("\n\nA.Polar Bear\t\tB.Hyena\n\nC.Donkey\t\tD.Chimpanzee");
                
                if (toupper(getch()) == 'B')
                {
                    printf("\n\nCorrect answer!!!");
                    count++;
                    getch();
                    break;
                }
                else if(toupper(getch()) == 'A' || toupper(getch()) == 'C' || toupper(getch()) == 'D')
                {
                    printf("\n\nWrong answer!!! The correct answer is B.Hyena");
                    getch();
                    break;
                }
                if(toupper(getch()) != 'A' || toupper(getch()) != 'B' || toupper(getch()) != 'C' || toupper(getch()) != 'D'){
                    
                    printf("\nPlease Enter Correct Option (A,B,C,D) \n");
                     getch();
                    break;
                }
                else{}
			case 4:
				printf("\n\n\nWho was awarded the youngest player award in Fifa World Cup 2006?");
				printf("\n\nA.Wayne Rooney\t\tB.Lucas Podolski\n\nC.Lionel Messi\t\tD.Christiano Ronaldo");
				
                if (toupper(getch()) == 'B')
				{
					printf("\n\nCorrect answer!!!");
					count++;
					getch();
					break;
				}
				else if(toupper(getch()) == 'A' || toupper(getch()) == 'C' || toupper(getch()) == 'D')
				{
					printf("\n\nWrong answer!!! The correct answer is B.Lucas Podolski");
					getch();
					break;
				}
                else if(toupper(getch()) != 'A' || toupper(getch()) != 'B' || toupper(getch()) != 'C' || toupper(getch()) != 'D'){
                    printf("\nPlease Enter Correct Option (A,B,C,D) \n");
                     getch();
                    break;
                }
                else{}

			case 5:
				printf("\n\n\nWhich is the third highest mountain in the world?");
				printf("\n\nA.Mt. K2\t\tB.Mt. Kanchanjungha\n\nC.Mt. Makalu\t\tD.Mt. Kilimanjaro");
				
                if (toupper(getch()) == 'B')
				{
					printf("\n\nCorrect answer!!!");
					count++;
					getch();
					break;
				}
				else if(toupper(getch()) == 'A' || toupper(getch()) == 'D' || toupper(getch()) == 'C')
				{
					printf("\n\nWrong answer!!! The correct answer is B.Mt. Kanchanjungha");
					getch();
					break;
				}
                if(toupper(getch()) != 'A' || toupper(getch()) != 'B' || toupper(getch()) != 'C' || toupper(getch()) != 'D'){
                    printf("\nPlease Enter Correct Option (A,B,C,D) \n");
                     getch();
                    break;
                }
                else{}

			case 6:
				printf("\n\n\nWhat is the group of frogs known as?");
				printf("\n\nA.A traffic\t\tB.A toddler\n\nC.A police\t\tD.An Army");
				
                if (toupper(getch()) == 'D')
				{
					printf("\n\nCorrect answer!!!");
					count++;
					getch();
					break;
				}
				else if(toupper(getch()) == 'A' || toupper(getch()) == 'B' || toupper(getch()) == 'C')
				{
					printf("\n\nWrong! answer!! The correct answer is D.An Army");
					getch();
					break;
				}
                if(toupper(getch()) != 'A' || toupper(getch()) != 'B' || toupper(getch()) != 'C' || toupper(getch()) != 'D'){
                    printf("\nPlease Enter Correct Option (A,B,C,D) \n");
                     getch();
                    break;

                }
                else{}
            }
        }
        if (count >= 2) // for eligible
        {
            goto test; // see result
        }
        else
        {
            system("cls");
            printf("\n\nSORRY YOU ARE NOT ELIGIBLE TO PLAY THIS GAME, BETTER LUCK NEXT TIME");
            getch();
            goto mainhome;
        }
    test: // test working
        system("cls");
        printf("\n\n\t*** CONGRATULATION %s you are eligible to play the Game ***", playername);
        printf("\n\n\n\n\t!Press p key to Start the Game!");
        printf("\n\n\n\n\t!Press any key to go to main home");

        if (toupper(getch()) == 'p')
        {
            goto game;
        }
        else{goto mainhome;}
    game: // game working
        countr = 0;
        for (i = 1; i <= 10; i++)
        {
            system("cls");
            r = i;
r=rand()%15;
            switch (r)
            {
            case 1:
                printf("\n\nWhat is the National Game of England?");
                printf("\n\nA.Football\t\tB.Basketball\n\nC.Cricket\t\tD.Baseball");
                
                if (toupper(getch()) == 'C')
                {
                    printf("\n\nCorrect answer!!!");
                    countr++; // count score for win cash
                    getch();
                    break;
                    
                }
                else if(toupper(getch()) == 'A' || toupper(getch()) == 'B' || toupper(getch()) == 'D')
                {
                    printf("\n\nWrong answer!!! The correct answer is C.Cricket");
                    getch();
                    goto score;
                    break;
                }
                else if(toupper(getch()) != 'A' || toupper(getch()) != 'B' || toupper(getch()) != 'C' || toupper(getch()) != 'D'){
                    printf("\nPlease Enter Correct Option (A,B,C,D) \n");
                    getch();
                    break;
                }
                else{}

            case 2:
                printf("\n\n\nStudy of Earthquake is called............,");
                printf("\n\nA.Seismology\t\tB.Cosmology\n\nC.Orology\t\tD.Etimology");
                
                if (toupper(getch()) == 'A')
                {
                    printf("\n\nCorrect answer!!!");
                    countr++;
                    getch();
                    break;
                }
                else if(toupper(getch()) == 'D' || toupper(getch()) == 'B' || toupper(getch()) == 'C')
                {
                    printf("\n\nWrong answer!!! The correct answer is A.Seismology");
                    getch();
                    goto score;
                    break;
                }
                if(toupper(getch()) != 'A' || toupper(getch()) != 'B' || toupper(getch()) != 'C' || toupper(getch()) != 'D'){
                    printf("\nPlease Enter Correct Option (A,B,C,D) \n");
                     getch();
                    break;
                }
                else{
                }
            case 3:
                printf("\n\n\nAmong the top 10 highest peaks in the world, how many lie in Nepal? ");
                printf("\n\nA.6\t\tB.7\n\nC.8\t\tD.9");
                
                if (toupper(getch()) == 'C')
                {
                    printf("\n\nCorrect answer!!!");
                    countr++;
                    getch();
                    break;
                }
                else if(toupper(getch()) == 'A' || toupper(getch()) == 'B' || toupper(getch()) == 'D')
                {
                    printf("\n\nWrong answer!!! The correct answer is C.8");
                    getch();
                    goto score;
                    break;
                }
                if(toupper(getch()) != 'A' || toupper(getch()) != 'B' || toupper(getch()) != 'C' || toupper(getch()) != 'D'){
                    printf("\nPlease Enter Correct Option (A,B,C,D) \n");
                    getch();
                    break;
                }
                else{
                }
            case 4:
                printf("\n\n\nThe Laws of Electromagnetic Induction were given by?");
                printf("\n\nA.Faraday\t\tB.Tesla\n\nC.Maxwell\t\tD.Coulomb");
                
                if (toupper(getch()) == 'A')
                {
                    printf("\n\nCorrect answer!!!");
                    countr++;
                    getch();
                    break;
                }
                else if(toupper(getch()) == 'D' || toupper(getch()) == 'B' || toupper(getch()) == 'C')
                {
                    printf("\n\nWrong answer!!! The correct answer is A.Faraday");
                    getch();
                    goto score;
                    break;
                }
                if(toupper(getch()) != 'A' || toupper(getch()) != 'B' || toupper(getch()) != 'C' || toupper(getch()) != 'D'){
                    printf("\nPlease Enter Correct Option (A,B,C,D) \n");
                    getch();
                    break;

                }
                else{}
            case 5:
                printf("\n\n\nIn what unit is electric power measured?");
                printf("\n\nA.Coulomb\t\tB.Watt\n\nC.Power\t\tD.Units");
                
                if (toupper(getch()) == 'B')
                {
                    printf("\n\nCorrect answer!!!");
                    countr++;
                    getch();
                    break;
                }
                else if(toupper(getch()) == 'A' || toupper(getch()) == 'D' || toupper(getch()) == 'C')
                {
                    printf("\n\nWrong answer!!! The correct answer is B.Power");
                    getch();
                    goto score;
                    break;
                }
                if(toupper(getch()) != 'A' || toupper(getch()) != 'B' || toupper(getch()) != 'C' || toupper(getch()) != 'D'){
                    printf("\nPlease Enter Correct Option (A,B,C,D) \n");
                     getch();
                    break;
                }
                else{}

            case 6:
                printf("\n\n\nWhich element is found in Vitamin B12?");
                printf("\n\nA.Zinc\t\tB.Cobalt\n\nC.Calcium\t\tD.Iron");
                
                if (toupper(getch()) == 'B')
                {
                    printf("\n\nCorrect answer!!!");
                    countr++;
                    getch();
                    break;
                }
                else if(toupper(getch()) == 'A' || toupper(getch()) == 'D' || toupper(getch()) == 'C')
                {
                    printf("\n\nWrong answer!!! The correct answer is B.Cobalt");
                    getch();
                    goto score;
                    break;
                }
                if(toupper(getch()) != 'A' || toupper(getch()) != 'B' || toupper(getch()) != 'C' || toupper(getch()) != 'D'){
                    printf("\nPlease Enter Correct Option (A,B,C,D) \n");
                     getch();
                    break;
                }
                else{
                }
            case 7:
                printf("\n\n\nWhat is the National Name of Japan?");
                printf("\n\nA.Polska\t\tB.Hellas\n\nC.Drukyul\t\tD.Nippon");
                
                if (toupper(getch()) == 'D')
                {
                    printf("\n\nCorrect answer!!!");
                    countr++;
                    getch();
                    break;
                }
                else if(toupper(getch()) == 'A' || toupper(getch()) == 'B' || toupper(getch()) == 'C')
                {
                    printf("\n\nWrong answer!!! The correct answer is D.Nippon");
                    getch();
                    goto score;
                    break;
                }
                if(toupper(getch()) != 'A' || toupper(getch()) != 'B' || toupper(getch()) != 'C' || toupper(getch()) != 'D'){
                    printf("\nPlease Enter Correct Option (A,B,C,D) \n");
                     getch();
                     break;
                }
                else{
                }
            case 8:
                printf("\n\n\nHow many times a piece of paper can be folded at the most?");
                printf("\n\nA.6\t\tB.7\n\nC.8\t\tD.Depends on the size of paper");
                
                if (toupper(getch()) == 'B')
                {
                    printf("\n\nCorrect answer!!!");
                    countr++;
                    getch();
                    break;
                }
                else if(toupper(getch()) == 'A' || toupper(getch()) == 'D' || toupper(getch()) == 'C')
                {
                    printf("\n\nWrong answer!!! The correct answer is B.7");
                    getch();
                    goto score;
                    break;
                }
                else if(toupper(getch()) != 'A' || toupper(getch()) != 'B' || toupper(getch()) != 'C' || toupper(getch()) != 'D'){
                    printf("\nPlease Enter Correct Option (A,B,C,D) \n");
                     getch();
                     break;
                }
                else{
                }
            case 9:
                printf("\n\n\nWhat is the capital of Denmark?");
                printf("\n\nA.Copenhagen\t\tB.Helsinki\n\nC.Ajax\t\tD.Galatasaray");
                if (toupper(getch()) == 'A')
                {
                    printf("\n\nCorrect answer!!!");
                    countr++;
                    getch();
                    break;
                }
                else if(toupper(getch()) == 'D' || toupper(getch()) == 'B' || toupper(getch()) == 'C')
                {
                    printf("\n\nWrong answer!!! The correct answer is A.Copenhagen");
                    getch();
                    goto score;
                    break;
                }
                else if(toupper(getch()) != 'A' || toupper(getch()) != 'B' || toupper(getch()) != 'C' || toupper(getch()) != 'D'){
                    printf("\nPlease Enter Correct Option (A,B,C,D) \n");
                     getch();
                     break;
                }
                else{}

            case 10:
                printf("\n\n\nWhich is the longest River in the world?");
                printf("\n\nA.Nile\t\tB.Koshi\n\nC.Ganga\t\tD.Amazon");
                if (toupper(getch()) == 'A')
                {
                    printf("\n\nCorrect answer!!!");
                    countr++;
                    getch();
                    break;
                }
                else if(toupper(getch()) == 'D' || toupper(getch()) == 'B' || toupper(getch()) == 'C')
                {
                    printf("\n\nWrong answer!!! The correct answer is A.Nile");
                    getch();
                    goto score;
                    break;
                }
                else if(toupper(getch()) != 'A' || toupper(getch()) != 'B' || toupper(getch()) != 'C' || toupper(getch()) != 'D'){
                    printf("\nPlease Enter Correct Option (A,B,C,D) \n");
                     getch();
                     break;
                }
                else{
                }
            case 11:
                printf("\n\n\nWhat is the color of the Black Box in aeroplanes?");
                printf("\n\nA.White\t\tB.Black\n\nC.Orange\t\tD.Red");
                if (toupper(getch()) == 'C')
                {
                    printf("\n\nCorrect answer!!!");
                    countr++;
                    getch();
                    break;
                }
                else if(toupper(getch()) == 'A' || toupper(getch()) == 'B' || toupper(getch()) == 'D')
                {
                    printf("\n\nWrong answer!!! The correct answer is C.Orange");
                    getch();
                    break;
                    goto score;
                }
                else if(toupper(getch()) != 'A' || toupper(getch()) != 'B' || toupper(getch()) != 'C' || toupper(getch()) != 'D'){
                    printf("\nPlease Enter Correct Option (A,B,C,D) \n");
                     getch();
                     break;
                }
                else{

                }

            case 12:
                printf("\n\n\nWhich city is known at 'The City of Seven Hills'?");
                printf("\n\nA.Rome\t\tB.Vactican City\n\nC.Madrid\t\tD.Berlin");
                if (toupper(getch()) == 'A')
                {
                    printf("\n\nCorrect answer!!!");
                    countr++;
                    getch();
                    break;
                }
                else if(toupper(getch()) == 'D' || toupper(getch()) == 'B' || toupper(getch()) == 'C')
                {
                    printf("\n\nWrong answer!!! The correct answer is A.Rome");
                    getch();
                    break;
                    goto score;
                }
                else if(toupper(getch()) != 'A' || toupper(getch()) != 'B' || toupper(getch()) != 'C' || toupper(getch()) != 'D'){
                    printf("\nPlease Enter Correct Option (A,B,C,D) \n");
                     getch();
                     break;
                }
                else{}

            case 13:
                printf("\n\n\nName the country where there no mosquitoes are found?");
                printf("\n\nA.Japan\t\tB.Italy\n\nC.Argentina\t\tD.France");
                if (toupper(getch()) == 'D')
                {
                    printf("\n\nCorrect answer!!!");
                    countr++;
                    getch();
                    break;
                }
                else if(toupper(getch()) == 'A' || toupper(getch()) == 'B' || toupper(getch()) == 'C')
                {
                    printf("\n\nWrong answer!!! The correct answer is D.France");
                    getch();
                    break;
                    goto score;
                }
               else if(toupper(getch()) != 'A' || toupper(getch()) != 'B' || toupper(getch()) != 'C' || toupper(getch()) != 'D'){
                    printf("\nPlease Enter Correct Option (A,B,C,D) \n");
                     getch();
                     break;
                }
                else{}

            case 14:
                printf("\n\n\nWho is the author of 'Pulpasa Cafe'?");
                printf("\n\nA.Narayan Wagle\t\tB.Lal Gopal Subedi\n\nC.B.P. Koirala\t\tD.Khagendra Sangraula");
                if (toupper(getch()) == 'A')
                {
                    printf("\n\nCorrect answer!!!");
                    countr++;
                    getch();
                    break;
                }
                else if(toupper(getch()) == 'D' || toupper(getch()) == 'B' || toupper(getch()) == 'C')
                {
                    printf("\n\nWrong answer!!! The correct answer is A.Narayan Wagle");
                    getch();
                    break;
                    goto score;
                }
                else if(toupper(getch()) != 'A' || toupper(getch()) != 'B' || toupper(getch()) != 'C' || toupper(getch()) != 'D'){
                    printf("\nPlease Enter Correct Option (A,B,C,D) \n");
                     getch();
                     break;
                }
                else{}

            case 15:
                printf("\n\n\nWhich Blood Group is known as the Universal Recipient?");
                printf("\n\nA.A\t\tB.AB\n\nC.B\t\tD.O");
                if (toupper(getch()) == 'B')
                {
                    printf("\n\nCorrect answer!!!");
                    countr++;
                    getch();
                    break;
                }
                else if(toupper(getch()) == 'A' || toupper(getch()) == 'C' || toupper(getch()) == 'C')
                {
                    printf("\n\nWrong answer!!! The correct answer is B.AB");
                    getch();
                    goto score;
                    break;
                }
                else if(toupper(getch()) != 'A' || toupper(getch()) != 'B' || toupper(getch()) != 'C' || toupper(getch()) != 'D'){
                    printf("\nPlease Enter Correct Option (A,B,C,D) \n");
                     getch();
                     break;
                }
                else{
                }
            }
        }
    score: // score working
        system("cls");
        score = (float)countr * 100000;      // example 1.00*100000
        if (score > 0.00 && score < 1000000) // condition winning cash
        {                                    // winning cash
            printf("\n\n\t\t**************** CONGRATULATION *****************");
            printf("\n\t You won $%.2f", score);
            goto go;
        }

        else if (score == 1000000.00)
        {
            printf("\n\n\n \t\t**************** CONGRATULATION YOU ARE WINNER ****************");
            printf("\n\t\t\t\t YOU ARE A MILLIONAIRE!!!!!!!!!");
            printf("\n\t\t You won $%.2f", score);
            printf("\n\t\t Thank You!!");
        }
        else
        { // no winning any cash because false of case 1 question
            printf("\n\n\t******** SORRY YOU DIDN'T WIN ANY CASH ********");
            printf("\n\t\t Thanks for your participation");
            printf("\n\t\t TRY AGAIN");
            goto go;
        }

	go:
		puts("\n\n Press Y if you want to play next game");
		puts(" Press any key if you want to go main menu");
		if (toupper(getch()) == 'Y')
			goto home;
		else
		{
			edit_score(score, playername);
			goto mainhome;
		}
	}
}

void show_record()
{
	system("cls");
	char name[20];
	float scr;
	FILE *f;
	f = fopen("score.txt", "r");
	fscanf(f, "%s%f", &name, &scr);
	printf("\n\n\t\t*************************************************************");
	printf("\n\n\t\t %s has secured the Highest Score %0.2f", name, scr);
	printf("\n\n\t\t*************************************************************");
	fclose(f);
	getch();
}

// void reset_score()
// {
// 	system("cls");
// 	float sc;
// 	char nm[20];
// 	FILE *f;
// 	f = fopen("score.txt", "r+");
// 	fscanf(f, "%s%f", &nm, &sc);
// 	sc = 0;
// 	fprintf(f, "%s,%.2f", nm, sc);
// 	fclose(f);
// }

void help()
{
	system("cls");
	printf("\n\n                              HELP");
	printf("\n -------------------------------------------------------------------------");
	printf("\n ......................... C program Quiz Game...........");
	printf("\n >> There are two rounds in the game, WARMUP ROUND & CHALLANGE ROUND");
	printf("\n >> In warmup round you will be asked a total of 3 questions to test your general");
	printf("\n    knowledge. You will be eligible to play the game if you can give atleast 2");
	printf("\n    right answers otherwise you can't play the Game...........");
	printf("\n >> Your game starts with the CHALLANGE ROUND. In this round you will be asked");
	printf("\n    total 10 questions each right answer will be awarded $100,000.");
	printf("\n    By this way you can win upto ONE MILLION cash prize in USD...............");
	printf("\n >> You will be given 4 options and you have to press A, B ,C or D for the");
	printf("\n    right option");
	printf("\n >> You will be asked questions continuously if you keep giving the right answers.");
	printf("\n >> No negative marking for wrong answers");

	printf("\n\n\t*********************BEST OF LUCK*********************************");
	printf("\n\n\t*****C PROGRAM QUIZ GAME is developed by CODE WITH C TEAM********");
}

void edit_score(float score, char plnm[20])
{
	system("cls");
	float sc;
	char nm[20];
	FILE *f;
	f = fopen("score.txt", "r");
	fscanf(f, "%s%f", &nm, &sc);
	if (score >= sc)
	{
		sc = score;
		fclose(f);
		f = fopen("score.txt", "w");
		fprintf(f, "%s\n%.2f", plnm, sc);
		fclose(f);
	}
}
