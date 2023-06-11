#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include"teams.h"
#include"match.h"
int main()
{
	printf("\n\t\t ___________________________________________________________________________________________________");
	printf("\n\t\t|                       *****WELCOME TO INDIAN PREMIER LEAGUE 2023*****                             |");
	printf("\n\t\t|___________________________________________________________________________________________________|");
	printf("\n\n\t\t\t\t-----------------LIST OF MATCHES OF INDIAN PREMEIR LEAGUE 2023----------------\n");
	printf("\t\t1.SUN,30 APR\n\t\t match:41 CSK VS PBKS\n \t\t2.SUN,30 APR\n\t\t match:42 MI VS RR\n \t\t3.MON,01 MAY\n\t\t match:43 RCB VS LSG\n \t\t4.TUES,02 MAY\n\t\t match:44 DC VS GT\n \t\t5.WED,03 MAY\n\t\t match:45 LSG VS CSK\n \t\t6.WED,03 MAY\n\t\t match:46 MI VS PBKS\n \t\t7.THU,04 MAY\n\t\t match:47 KKR VS SRH\n \t\t8.FRI,05 MAY\n\t\t match:48 RR VS GT\n \t\t9.SAT,06 MAY\n\t\t match:49 MI VS CSK\n \t\t10.SAT,06 MAY\n\t\t match:50 RCB VS DC\n");
	printf("\n\t\t------------------------------------------------------------------------------------------------------------");
	int digit;
	printf("\n\t\tChoose match no:");
	scanf("%d",&digit);
	switch(digit)
	{
	case 1:printf("MATCH NO:41\n\n\t\t\t\t\tCSK vs PBKS");
	       printf("\n\nTIME:03:30PM\n\nVENUE:MA Chidambaram stadium,Chennai.\n");
	       
	       printf("\n\nToss, to Say by CSK with Heads & Tails(H/T):");
	       scanf("%s",&toss);
	       if(toss=='H'||toss=='h')
	       	printf("\n ***PBKS Won the toss and choose to Bowl..");
		   else if(toss=='T'||toss=='t')
		   printf("\n ***CSK won the toss and choose to Bat..");
		    else{
		    	exit(0);
			}
	       printf("\nTEAMS(playing XI)");
	       printf("\n%s\n",CSK);
	       printf("\n%s",PBKS);
	        cskvspbks();
	        break;
	case 2:printf("match No:42\n\n\t\t\t\t\t MI VS RR");
	       printf("\n\nTIME:07:30PM\n\nVENUE:Wankhede Stadium,Mumbai.\n");
	       printf("\n\n Toss, to Say by MI with Heads & Tails(H/T):");
	       scanf("%s",&toss);
	       if(toss=='H'||toss=='h')
	       	printf("\n ***MI Won the toss and choose to Bowl..");
		   else if(toss=='T'||toss=='t')
		   printf("\n ***RR won the toss and choose to Bat..");
		    else{
		    	exit(0);
			}
	       printf("\n TEAMS(playing XI)");
	       printf("\n%s\n",MI);
	       printf("\n%s",RR);
	       mivsrr();
	       break;
	case 3:printf("match No:43\n\n\t\t\t\t\t RCB VS LSG");
	       printf("\n\nTIME:07:30PM\n\nVENUE:Bharat Ratna Stadium,Lucknow.\n");
	       printf("\n\n Toss, to Say by RCB with Heads & Tails(H/T):");
	       scanf("%s",&toss);
	       if(toss=='H'||toss=='h')
	       	printf("\n ***RCB Won the toss and choose to Bat..");
		   else if(toss=='T'||toss=='t')
		   printf("\n ***LSG won the toss and choose to bowl");
		    else{
		    	exit(0);
			}
	       printf("\nTEAMS(playing XI)");
	       printf("\n%s\n",RCB);
	       printf("\n%s",LSG);
	       rcbvslsg();
	       break;
	case 4:printf("match No:44\n\n\t\t\t\t\t DC VS GT");
	       printf("\n\nTIME:07:30PM\n\nVENUE:Narendra Modi stadium.\n");
	       printf("\n\n Toss, to Say by GT with Heads & Tails(H/T):");
	       scanf("%s",&toss);
	       if(toss=='H'||toss=='h')
	       	printf("\n ***GT Won the toss and choose to Bowl..");
		   else if(toss=='T'||toss=='t')
		   printf("\n ***DC won the toss and choose to bat...");
		    else{
		    	exit(0);
			}
	       printf("\nTEAMS(playing XI)");
	       printf("\n%s\n",GT);
	       printf("\n%s",DC);
	       dcvsgt();
		   break;
	case 5:printf("match No:45\n\n\t\t\t\t\t CSK VS LSG");
	       printf("\n\nTIME:04:30PM\n\nVENUE:Bharat Ratna Stadium,Lucknow.\n");
	       printf("\n\n Toss, to Say by CSK with Heads & Tails(H/T):");
	     scanf("%s",&toss);
	       if(toss=='H'||toss=='h')
	       	printf("\n ***CSK Won the toss and choose to Bowl..");
		   else if(toss=='T'||toss=='t')
		   printf("\n ***LSG won the toss and choose to bowl..");
		    else{
		    	exit(0);
			}
	       printf("\nTEAMS(playing XI)");
	       printf("\n%s\n",CSK);
	       printf("\n%s",LSG);
	       lsgvscsk();
		   break;
	case 6:printf("match No:46\n\n\t\t\t\t\t MI VS PBKS");
	       printf("\n\nTIME:07:30PM\n\nVENUE:Punjab cricket Association stadium,Mohali.\n");
	       printf("\n\n Toss, to Say by MI with Heads & Tails(H/T):");
	    scanf("%s",&toss);
	       if(toss=='H'||toss=='h')
	       	printf("\n ***MI Won the toss and choose to Bowl..");
		   else if(toss=='T'||toss=='t')
		   printf("\n ***PBKS won the toss and choose to Bat..");
		    else{
		    	exit(0);
			}
	       printf("\nTEAMS(playing XI)");
	       printf("\n%s\n",MI);
	       printf("\n%s",PBKS);
	       mivspbks();
		   break;
	case 7:printf("match No:47\n\n\t\t\t\t\t KKR VS SRH");
	       printf("\n\nTIME:07:30PM\n\nVENUE:Rajiv Gandhi Stadium,Hyderabad.\n");
	       printf("\n\n Toss, to Say by SRH with Heads & Tails(H/T):");
	    scanf("%s",&toss);
	       if(toss=='H'||toss=='h')
	       	printf("\n ***SRH Won the toss and choose to Bowl..");
		   else if(toss=='T'||toss=='t')
		   printf("\n ***KKR won the toss and choose to Bat..");
		    else{
		    	exit(0);
			}
	       printf("\nTEAMS(playing XI)");
	       printf("\n%s\n",KKR);
	       printf("\n%s",SRH);
	       kkrvssrh();   
		   break;
	case 8:printf("match No:48\n\n\t\t\t\t\t GT VS RR");
	       printf("\n\nTIME:07:30PM\n\nVENUE:sawai mansingh stadium,Jaipur.\n");
	       printf("\n\n Toss, to Say by GT with Heads & Tails(H/T):");
	    scanf("%s",&toss);
	       if(toss=='H'||toss=='h')
	       	printf("\n ***GT Won the toss and choose to Bowl..");
		   else if(toss=='T'||toss=='t')
		   printf("\n ***RR won the toss and choose to Bat..");
		    else{
		    	exit(0);
			}
	       printf("\nTEAMS(playing XI)");
	       printf("\n%s\n",GT);
	       printf("\n%s",RR);
	       gtvsrr();
		   break;
	case 9:printf("match No:49\n\n\t\t\t\t\t MI VS CSk");
	       printf("\n\nTIME:03:30PM\n\nVENUE:MA Chidambaram stadium,Chennai.\n");
	       printf("\n\n Toss, to Say by CSK with Heads & Tails(H/T):");
	    scanf("%s",&toss);
	       if(toss=='H'||toss=='h')
	       	printf("\n ***CSk Won the toss and choose to Bowl..");
		   else if(toss=='T'||toss=='t')
		   printf("\n ***MI won the toss and choose to Bat..");
		    else{
		    	exit(0);
			}
	       printf("\nTEAMS(playing XI)");
	       printf("\n%s\n",MI);
	       printf("\n%s",CSK);
	       mivscsk();
		   break;
	case 10:printf("match No:50\n\n\t\t\t\t\t DC VS RCB");
	        printf("\n\nTIME:07:30PM\n\nVENUE:Arun jaitley stadium,Delhi.\n");
	        printf("\n\n Toss, to Say by DC with Heads & Tails(H/T):");
	        scanf("%s",&toss);
	        if(toss=='H'||toss=='h')
	       	printf("\n ***DC Won the toss and choose to Bowl..");
		    else if(toss=='T'||toss=='t')
		    printf("\n ***RCB won the toss and choose to Bat..");
		    else{
		    	exit(0);
			}
	        printf("\n TEAMS(playing XI)");
	        printf("\n%s\n",RCB);
	        printf("\n%s",DC);
	        rcbvsdc();
	        break;    
	}
}