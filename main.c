#include<stdio.h>
#include<conio.h>
void main()
{
    int choice;
    void quiz(int c);
    printf("__________QUIZ__________\n");
    printf("RULES:\n1.For every right answer +4\n2.For every wrong answer -1\n3.Every set contains 5 questions\n4.Minimum 8 marks to be scored\n");
    printf("\n1.All about C\n2.India\n3.World\n");
    printf("Enter your choice ");
    scanf("%d",&choice);
    quiz(choice);
    getch();
}
void quiz(int c)
{
    int score=0,ans;
    switch(c)
    {
        case 1 :printf("__________ALL ABOUT C__________\n");
                printf("Q1. Which of these no. is palindrome\n");
                printf("1.109845     2.10599501     3.26789501     4.70365914\n");
                printf("Answer(1/2/3/4) = ");
                scanf("%d",&ans);
                if(ans==2)
                {
                    printf("Correct\n\n");
                    score+=4;
                }
                else
                {
                    printf("InCorrect\n");
                    score--;
                }
                printf("Q2.To display output on screen ____ is used?\n");
                printf("1.cout     2.scanf     3.printf     4.output\n");
                printf("Answer(1/2/3/4) = ");
                scanf("%d",&ans);
                if(ans==3)
                {
                    printf("Correct\n");
                    score+=4;
                }
                else
                {
                    printf("InCorrect\n");
                    score--;
                }
                printf("Q3. What is data type of 3.12\n");
                printf("1.float     2.int     3.char     4.long int\n");
                printf("Answer(1/2/3/4) = ");
                scanf("%d",&ans);
                if(ans==1)
                {
                    printf("Correct\n");
                    score+=4;
                }
                else
                {
                    printf("InCorrect\n");
                    score--;
                }
                printf("Q4. Which of these is  an identifier\n");
                printf("1.simple_interest     2.roll no     3.3friends     4.char\n");
                printf("Answer(1/2/3/4) = ");
                scanf("%d",&ans);
                if(ans==1)
                {
                    printf("Correct\n");
                    score+=4;
                }
                else
                {
                    printf("InCorrect\n");
                    score--;
                }
                printf("Q5. If the two strings are identical, then 'strcmp()' function returns\n");
                printf("1. 1     2. 0     3. -1     4. YES\n");
                printf("Answer(1/2/3/4) = ");
                scanf("%d",&ans);
                if(ans==4)
                {
                    printf("Correct\n");
                    score+=4;
                }
                else
                {
                    printf("InCorrect\n");
                    score--;
                }
                printf("Total score = %d\n",score);
                if(score>=8)
                    printf("PASS\n");
                else
                    printf("Fail\n");
                break;

        case 2: printf("__________INDIA__________\n");
                printf("Q1. Who is known as 'Father of Indian Renaissance'?\n");
                printf("1.B.G.Tilak     2.Swami Vivekanand     3.Raja Ram Mohan Roy    4.Mahatma Gandhi\n");
                printf("Answer(1/2/3/4) = ");
                scanf("%d",&ans);
                if(ans==3)
                {
                    printf("Correct\n");
                    score+=4;
                }
                else
                {
                    printf("InCorrect\n");
                    score--;
                }
                printf("Q2. Which of these is union territory\n");
                printf("1.Kolkata     2.Nashik     3.Telangana     4.Chandigarh\n");
                printf("Answer(1/2/3/4) = ");
                scanf("%d",&ans);
                if(ans==4)
                {
                    printf("Correct\n");
                    score+=4;
                }
                else
                {
                    printf("InCorrect\n");
                    score--;
                }
                printf("Q3. Which city is known as electronic city?\n");
                printf("1.Bangalore     2.Pune     3.Delhi     4.Mumbai\n");
                printf("Answer(1/2/3/4) = ");
                scanf("%d",&ans);
                if(ans==1)
                {
                    printf("Correct\n");
                    score+=4;
                }
                else
                {
                    printf("InCorrect\n");
                    score--;
                }
                printf("Q4. What is SIACHEN?\n");
                printf("1.glacier zone between India and China  2.frontier zone between India and China  3.frontier zone between India and China  4.glacier zone between India and Pakistan\n");
                printf("Answer(1/2/3/4) = ");
                scanf("%d",&ans);
                if(ans==4)
                {
                    printf("Correct\n");
                    score+=4;
                }
                else
                {
                    printf("InCorrect\n");
                    score--;
                }
                printf("Q5. Which is coldest place in India\n");
                printf("1.Shimla  2.Dras(Kashmir)  3.Ladakh  4.Darjeeling\n");
                printf("Answer(1/2/3/4) = ");
                scanf("%d",&ans);
                if(ans==2)
                {
                    printf("Correct\n");
                    score+=4;
                }
                else
                {
                    printf("InCorrect\n");
                    score--;
                }
                printf("Total = %d\n",score);
                if (score>=8)
                    printf("PASS");
                else
                    printf("FAIL");
                break;
        case 3: printf("_______WORLD_______\n");
                printf("Q1.Largest country?\n");
                printf("1.India  2.China  3.Russia  4.Canada\n");
                printf("Answer(1/2/3/4) = ");
                scanf("%d",&ans);
                if(ans==3)
                {
                    printf("Correct\n");
                    score+=4;
                }
                else
                {
                    printf("InCorrect\n");
                    score--;
                }
                printf("Q2. Largest country in terms of population?\n");
                printf("1.Canada  2.USA  3.India  4.China\n");
                printf("Answer(1/2/3/4) = ");
                scanf("%d",&ans);
                if(ans==4)
                {
                    printf("Correct\n");
                    score+=4;
                }
                else
                {
                    printf("InCorrect\n");
                    score--;
                }
                printf("Q3. Capital of Australia?\n");
                printf("1.Sydney  2.Perth  3.Canberra  4.Melbourne\n");
                printf("Answer(1/2/3/4) = ");
                scanf("%d",&ans);
                if(ans==3)
                {
                    printf("Correct\n");
                    score+=4;
                }
                else
                {
                    printf("InCorrect\n");
                    score--;
                }
                printf("Q4. Total no. of oceans ?\n");
                printf("1. 3  2. 5  3. 4  4. 6\n");
                printf("Answer(1/2/3/4) = ");
                scanf("%d",&ans);
                if(ans==2)
                {
                    printf("Correct\n");
                    score+=4;
                }
                else
                {
                    printf("InCorrect\n");
                    score--;
                }
                printf("Q5. WHich of these in not included in 'Seven wonders of World'?\n");
                printf("1.India Gate  2.Great Wall of China  3.Petra  4.Taj Mahal\n");
                printf("Answer(1/2/3/4) = ");
                scanf("%d",&ans);
                if(ans==2)
                {
                    printf("Correct\n");
                    score+=4;
                }
                else
                {
                    printf("InCorrect\n");
                    score--;
                }
                printf("Total = %d\n",score);
                if (score>=8)
                    printf("PASS\n");
                else
                    printf("FAIL\n");
                break;
    }
}
