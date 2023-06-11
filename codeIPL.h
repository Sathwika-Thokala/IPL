char toss,predict[6];
struct player{
	char name[50];
	int runs;
	int balls;
	int four;
	int six;
	float sr;
}v;
FILE *pt,*ptr,*fp;
//function to get predicted results.
void predict_n(char won[5])
{
  char a[5];
		if(predict[6]==a[5])
		{
		printf("\nCorrect, you predicted %s and that had been won...\n\n Your predicting skills are high.\n \n\n\t\t\t\t\t\t\t\t\t\t    Thank you for Visiting us.Make sure, to come on next match.",predict);
	    }
		  else
	   {
	       printf("\nyou have predicted wrong.\nYour need to predict correctly next time.\n \n\n\t\t\t\t\t\t\t\t\t\t    Thank you for Visiting us.Make sure, to come on next match and deal with predictions.");
	   }
}
//***functions main code============================================================M1
void cskvspbks(){
	char a[5]="CSK",b[5]="PBKS",ch;
	int i,score_csk=0,csk_balls=0;
	    fp=fopen("m1.txt","w+");//main pointer 
		ptr=fopen("rough.txt","w+");
		printf("\npredict the winner who gets 2 points(%s/%s):\n",a,b);
		scanf("%s",predict);
		fprintf(fp,"%s scoreboard==>\nName\t\truns\tball\t4s\t6s\tSR\n",a);//related to line no.86
	do{
		printf("\nenter the name of player %d\n",i+1);
		scanf("%s",v.name);
		printf("\nenter the runs:\n");
		scanf("%d",&v.runs);
		printf("\nenter the balls:\n");
		scanf("%d",&v.balls);       	
		printf("\nenter the 4S:\n");
		scanf("%d",&v.four);
		printf("\nenter the 6s:\n");
		scanf("%d",&v.six);
		v.sr=100*v.runs/v.balls;
		printf("\nstrike rate of %s is %.2f",v.name,v.sr);
		fwrite(&v,sizeof(v),1,ptr);
       	fprintf(fp,"\n%s\t\t%d\t%d\t%d\t%d\t%.2f",v.name,v.runs,v.balls,v.four,v.six,v.sr);
       	printf("\npress(Y/N) to enter the score of next batsman:");
       	score_csk+=v.runs;
       	csk_balls+=v.balls;
       	ch=getche();
       	i++;
	   }while(ch=='y'||ch=='Y');
	   if(csk_balls<120||csk_balls>120)
	   {
	   	printf("\ncheck balls faced by %s and correct it.",a);
	   }
	   	rewind(fp);
		fscanf(fp,"\n%s\t\t%d\t%d\t%d\t%d\t%.2f",v.name,&v.runs,&v.balls,&v.four,&v.six,&v.sr);		 
		printf("\n%s scoreboard==>\nName\t\truns\tball\t4s\t6s\tSR\n",a);
	   rewind(ptr);
	   while(fread(&v,sizeof(v),1,ptr)>0)
	   printf("\n%s\t\t%d\t%d\t%d\t%d\t%.2f",v.name,v.runs,v.balls,v.four,v.six,v.sr);
	   printf("\n/n %s need %d runs in 120 balls====>>>>\n",b,score_csk+1);
	   fclose(fp);
	   fclose(ptr);
	   fp=fopen("m1.txt","a+");
	   pt=fopen("t2.txt","w+");
	   int score_pbks=0,pbks_balls=0;
       char che;
       i=0;
       int wtk=0;
       fprintf(fp,"\n%s scoreboard==>\nName\t\truns\tball\t4s\t6s\tSR\n ",b);
	   do{
       	printf("\nenter the name of player %d\n",i+1);
       	scanf("%s",v.name);
       	printf("\nenter the runs:\n");
       	scanf("%d",&v.runs);
       	printf("\nenter the balls:\n");
       	scanf("%d",&v.balls);
       	printf("\nenter the 4S:\n");
       	scanf("%d",&v.four);
       	printf("\nenter the 6s:\n");
       	scanf("%d",&v.six);
       	v.sr=100*v.runs/v.balls;
       	printf("\nstrike rate of %s is %.2f",v.name,v.sr);
       	fwrite(&v,sizeof(v),1,pt);
        fprintf(fp,"\n%s\t\t%d\t%d\t%d\t%d\t%.2f",v.name,v.runs,v.balls,v.four,v.six,v.sr);		       
		printf("\npress(Y/N) to enter the score of next batsman:");
       	score_pbks+=v.runs;
       	pbks_balls+=v.balls;
       	che=getche();
       	i++;
       	if(i>2){
       	 wtk++;
       }
	}while(che=='y'||che=='Y');   
       ptr=fopen("rough.txt","r");
	   printf("\n Final scorecard of both teams:\n");
	   printf("\n%s scoreboard==>\nName\t\truns\tball\t4s\t6s\tSR\n",a);
	   while(fread(&v,sizeof(v),1,ptr)>0)
	   printf("\n%s\t\t%d\t%d\t%d\t%d\t%.2f",v.name,v.runs,v.balls,v.four,v.six,v.sr);
	   rewind(pt);
	   printf("\n%s scoreboard==>\nName\t\truns\tball\t4s\t6s\tSR\n",b);
	   while(fread(&v,sizeof(v),1,pt)>0)
	   printf("\n%s\t\t%d\t%d\t%d\t%d\t%.2f",v.name,v.runs,v.balls,v.four,v.six,v.sr);
	   rewind(fp);
	   fscanf(fp,"\n%s\t\t%d\t%d\t%d\t%d\t%.2f",v.name,&v.runs,&v.balls,&v.four,&v.six,&v.sr);
	   char won[5];
	   if(score_pbks>score_csk){
	   won[5]=b;
	   	printf("\n %s won by %dWtks.",b,10-wtk);
	   }
	   else if(score_csk>score_pbks){
	   won[5]=a;
	   printf("\n %s WON BY %d runs.",a,score_csk-score_pbks);
}
	   else
	   printf("\n After the match tied due to the rainfall the match results willbe unseen. So, both Teams gets each 1 points. ");
	   fclose(fp);
	   fclose(ptr);
	   fclose(pt);
	   predict_n(won[5]);		
}
 //=================================================================m2
void mivsrr(){
 char a[5]="RR",b[5]="MI",ch;
    int i,score_csk=0,csk_balls=0;
	   fp=fopen("m2.txt","w+");
       ptr=fopen("rough.txt","w+");//rough
       printf("\npredict the winner who gets 2 points(%s/%s):\n",a,b);
       scanf("%s",predict);
       fprintf(fp,"%s scoreboard==>\nName\t\truns\tball\t4s\t6s\tSR\n",a);//related to line no.86
	   do{
       	printf("\nenter the name of player %d\n",i+1);
       	scanf("%s",v.name);
       	printf("\nenter the runs:\n");
       	scanf("%d",&v.runs);
       	printf("\nenter the balls:\n");
       	scanf("%d",&v.balls);
       	printf("\nenter the 4S:\n");
       	scanf("%d",&v.four);
       	printf("\nenter the 6s:\n");
       	scanf("%d",&v.six);
       	v.sr=100*v.runs/v.balls;
       	printf("\nstrike rate of %s is %.2f",v.name,v.sr);
       	fwrite(&v,sizeof(v),1,ptr);
       	fprintf(fp,"\n%s\t\t%d\t%d\t%d\t%d\t%.2f",v.name,v.runs,v.balls,v.four,v.six,v.sr);
       	printf("\npress(Y/N) to enter the score of next batsman:");
       	score_csk+=v.runs;
       	csk_balls+=v.balls;
       	ch=getch();
       	i++;	
	   }while(ch=='y'||ch=='Y');
	   if(csk_balls<120||csk_balls>120)
	   {
	   	printf("\ncheck balls faced by %s and correct it.",a);
	   }
	   	rewind(fp);
		fscanf(fp,"\n%s\t\t%d\t%d\t%d\t%d\t%.2f",v.name,&v.runs,&v.balls,&v.four,&v.six,&v.sr);		 
		printf("\n%s scoreboard==>\nName\t\truns\tball\t4s\t6s\tSR\n",a);
	   rewind(ptr);
	   while(fread(&v,sizeof(v),1,ptr)>0)
	   printf("\n%s\t\t%d\t%d\t%d\t%d\t%.2f",v.name,v.runs,v.balls,v.four,v.six,v.sr);
	   printf("\n/n %s need %d runs in 120 balls====>>>>\n",b,score_csk+1);
	   fclose(fp);
	   fclose(ptr);
	   fp=fopen("m2.txt","a+");
	   pt=fopen("t2.txt","w+");
	   int score_pbks=0,pbks_balls=0;
       char che;
       i=0;
       int wtk=0;
       fprintf(fp,"\n%s scoreboard==>\nName\t\truns\tball\t4s\t6s\tSR\n ",b);
	   do{
       	printf("\nenter the name of player %d\n",i+1);
       	scanf("%s",v.name);
       	printf("\nenter the runs:\n");
       	scanf("%d",&v.runs);
       	printf("\nenter the balls:\n");
       	scanf("%d",&v.balls);
       	printf("\nenter the 4S:\n");
       	scanf("%d",&v.four);
       	printf("\nenter the 6s:\n");
       	scanf("%d",&v.six);
       	v.sr=100*v.runs/v.balls;
       	printf("\nstrike rate of %s is %.2f",v.name,v.sr);
       	fwrite(&v,sizeof(v),1,pt);
 fprintf(fp,"\n%s\t\t%d\t%d\t%d\t%d\t%.2f",v.name,v.runs,v.balls,v.four,v.six,v.sr);		       
		printf("\npress(Y/N) to enter the score of next batsman:");
       	score_pbks+=v.runs;
       	pbks_balls+=v.balls;
       	che=getche();
       	i++;
       	if(i>2){
       	 wtk++;
       }
	   }while(che=='y'||che=='Y');
       ptr=fopen("rough.txt","r");
	   printf("\n Final scorecard of both teams:\n");
	   printf("\n%s scoreboard==>\nName\t\truns\tball\t4s\t6s\tSR\n",a);
	   while(fread(&v,sizeof(v),1,ptr)>0)
	   printf("\n%s\t\t%d\t%d\t%d\t%d\t%.2f",v.name,v.runs,v.balls,v.four,v.six,v.sr);
	   rewind(pt);
	   printf("\n%s scoreboard==>\nName\t\truns\tball\t4s\t6s\tSR\n",b);
	   while(fread(&v,sizeof(v),1,pt)>0)
	   printf("\n%s\t\t%d\t%d\t%d\t%d\t%.2f",v.name,v.runs,v.balls,v.four,v.six,v.sr);
	   rewind(fp);
	   fscanf(fp,"\n%s\t\t%d\t%d\t%d\t%d\t%.2f",v.name,&v.runs,&v.balls,&v.four,&v.six,&v.sr);
	   char won[5];
	   if(score_pbks>score_csk){
	   won[5]=b;
	   	printf("\n %s won by %dWtks.",b,10-wtk);
	   }
	   else if(score_csk>score_pbks){
	   won[5]=a;
	   printf("\n %s WON BY %d runs.",a,score_csk-score_pbks);
}
	   else
	   printf("\n After the match tied due to the rainfall the match results willbe unseen. So, both Teams gets each 1 points. ");
	   fclose(fp);
	   fclose(ptr);
	   fclose(pt);
	   predict_n(won[5]);
			   
}
//===============================================================================m3
void rcbvslsg(){
	char a[5]="RCB",b[5]="LSG",ch;
	 int i,score_csk=0,csk_balls=0;
	   fp=fopen("m3.txt","w+");
       ptr=fopen("rough.txt","w+");//rough
       printf("\npredict the winner who gets 2 points(%s/%s):\n",a,b);
       scanf("%s",predict);
       fprintf(fp,"%s scoreboard==>\nName\t\truns\tball\t4s\t6s\tSR\n",a);//related to line no.86
	   do{
       	printf("\nenter the name of player %d\n",i+1);
       	scanf("%s",v.name);
       	printf("\nenter the runs:\n");
       	scanf("%d",&v.runs);
       	printf("\nenter the balls:\n");
       	scanf("%d",&v.balls);
       	printf("\nenter the 4S:\n");
       	scanf("%d",&v.four);
       	printf("\nenter the 6s:\n");
       	scanf("%d",&v.six);
       	v.sr=100*v.runs/v.balls;
       	printf("\nstrike rate of %s is %.2f",v.name,v.sr);
       	fwrite(&v,sizeof(v),1,ptr);
       	fprintf(fp,"\n%s\t\t%d\t%d\t%d\t%d\t%.2f",v.name,v.runs,v.balls,v.four,v.six,v.sr);
       	printf("\npress(Y/N) to enter the score of next batsman:");
       	score_csk+=v.runs;
       	csk_balls+=v.balls;
       	ch=getch();
       	i++;	
	   }while(ch=='y'||ch=='Y');
	   if(csk_balls<120||csk_balls>120)
	   {
	   	printf("\ncheck balls faced by %s and correct it.",a);
	   }
	   	rewind(fp);
		fscanf(fp,"\n%s\t\t%d\t%d\t%d\t%d\t%.2f",v.name,&v.runs,&v.balls,&v.four,&v.six,&v.sr);		 
		printf("\n%s scoreboard==>\nName\t\truns\tball\t4s\t6s\tSR\n",a);
	   rewind(ptr);
	   while(fread(&v,sizeof(v),1,ptr)>0)
	   printf("\n%s\t\t%d\t%d\t%d\t%d\t%.2f",v.name,v.runs,v.balls,v.four,v.six,v.sr);
	   printf("\n/n %s need %d runs in 120 balls====>>>>\n",b,score_csk+1);
	   fclose(fp);
	   fclose(ptr);
	   fp=fopen("m3.txt","a+");
	   pt=fopen("t2.txt","w+");
	   int score_pbks=0,pbks_balls=0;
       char che;
       i=0;
       int wtk=0;
       fprintf(fp,"\n%s scoreboard==>\nName\t\truns\tball\t4s\t6s\tSR\n ",b);
	   do{
       	printf("\nenter the name of player %d\n",i+1);
       	scanf("%s",v.name);
       	printf("\nenter the runs:\n");
       	scanf("%d",&v.runs);
       	printf("\nenter the balls:\n");
       	scanf("%d",&v.balls);
       	printf("\nenter the 4S:\n");
       	scanf("%d",&v.four);
       	printf("\nenter the 6s:\n");
       	scanf("%d",&v.six);
       	v.sr=100*v.runs/v.balls;
       	printf("\nstrike rate of %s is %.2f",v.name,v.sr);
       	fwrite(&v,sizeof(v),1,pt);
 fprintf(fp,"\n%s\t\t%d\t%d\t%d\t%d\t%.2f",v.name,v.runs,v.balls,v.four,v.six,v.sr);		       
		printf("\npress(Y/N) to enter the score of next batsman:");
       	score_pbks+=v.runs;
       	pbks_balls+=v.balls;
       	che=getche();
       	i++;
       	if(i>2){
       	 wtk++;
       }
	}while(che=='y'||che=='Y');   
       ptr=fopen("rough.txt","r");
	   printf("\n Final scorecard of both teams:\n");
	   printf("\n%s scoreboard==>\nName\t\truns\tball\t4s\t6s\tSR\n",a);
	   while(fread(&v,sizeof(v),1,ptr)>0)
	   printf("\n%s\t\t%d\t%d\t%d\t%d\t%.2f",v.name,v.runs,v.balls,v.four,v.six,v.sr);
	   rewind(pt);
	   printf("\n%s scoreboard==>\nName\t\truns\tball\t4s\t6s\tSR\n",b);
	   while(fread(&v,sizeof(v),1,pt)>0)
	   printf("\n%s\t\t%d\t%d\t%d\t%d\t%.2f",v.name,v.runs,v.balls,v.four,v.six,v.sr);
	   rewind(fp);
	   fscanf(fp,"\n%s\t\t%d\t%d\t%d\t%d\t%.2f",v.name,&v.runs,&v.balls,&v.four,&v.six,&v.sr);
	   char won[5];
	   if(score_pbks>score_csk){
	   won[5]=b;
	   	printf("\n %s won by %dWtks.",b,10-wtk);
	   }
	   else if(score_csk>score_pbks){
	   won[5]=a;
	   printf("\n %s WON BY %d runs.",a,score_csk-score_pbks);
}
	   else
	   printf("\n After the match tied due to the rainfall the match results willbe unseen. So, both Teams gets each 1 points. ");
	   fclose(fp);
	   fclose(ptr);
	   fclose(pt);
	   predict_n(won[5]);			
}
//=========================================================m4
voiddcvsgt(){
	char a[5]="DC",b[5]="GT",ch;
	 int i,score_csk=0,csk_balls=0;
	   fp=fopen("m4.txt","w+");
       ptr=fopen("rough.txt","w+");//rough
       printf("\npredict the winner who gets 2 points(%s/%s):\n",a,b);
       scanf("%s",predict);
       fprintf(fp,"%s scoreboard==>\nName\t\truns\tball\t4s\t6s\tSR\n",a);//related to line no.86
	   do{
       	printf("\nenter the name of player %d\n",i+1);
       	scanf("%s",v.name);
       	printf("\nenter the runs:\n");
       	scanf("%d",&v.runs);
       	printf("\nenter the balls:\n");
       	scanf("%d",&v.balls);
       	printf("\nenter the 4S:\n");
       	scanf("%d",&v.four);
       	printf("\nenter the 6s:\n");
       	scanf("%d",&v.six);
       	v.sr=100*v.runs/v.balls;
       	printf("\nstrike rate of %s is %.2f",v.name,v.sr);
       	fwrite(&v,sizeof(v),1,ptr);
       	fprintf(fp,"\n%s\t\t%d\t%d\t%d\t%d\t%.2f",v.name,v.runs,v.balls,v.four,v.six,v.sr);
       	printf("\npress(Y/N) to enter the score of next batsman:");
       	score_csk+=v.runs;
       	csk_balls+=v.balls;
       	ch=getch();
       	i++;
	   }while(ch=='y'||ch=='Y');
	   if(csk_balls<120||csk_balls>120)
	   {
	   	printf("\ncheck balls faced by %s and correct it.",a);
	   }
	   	rewind(fp);
		fscanf(fp,"\n%s\t\t%d\t%d\t%d\t%d\t%.2f",v.name,&v.runs,&v.balls,&v.four,&v.six,&v.sr);		        
		printf("\n%s scoreboard==>\nName\t\truns\tball\t4s\t6s\tSR\n",a);
	   rewind(ptr);
	   while(fread(&v,sizeof(v),1,ptr)>0)
	   printf("\n%s\t\t%d\t%d\t%d\t%d\t%.2f",v.name,v.runs,v.balls,v.four,v.six,v.sr);
	   printf("\n/n %s need %d runs in 120 balls====>>>>\n",b,score_csk+1);
	   fclose(fp);
	   fclose(ptr);
	   fp=fopen("m4.txt","a+");
	   pt=fopen("t2.txt","w+");
	   int score_pbks=0,pbks_balls=0;
       char che;
       i=0;
       int wtk=0;
       fprintf(fp,"\n%s scoreboard==>\nName\t\truns\tball\t4s\t6s\tSR\n ",b);
	   do{
       	printf("\nenter the name of player %d\n",i+1);
       	scanf("%s",v.name);
       	printf("\nenter the runs:\n");
       	scanf("%d",&v.runs);
       	printf("\nenter the balls:\n");
       	scanf("%d",&v.balls);
       	printf("\nenter the 4S:\n");
       	scanf("%d",&v.four);
       	printf("\nenter the 6s:\n");
       	scanf("%d",&v.six);
       	v.sr=100*v.runs/v.balls;
       	printf("\nstrike rate of %s is %.2f",v.name,v.sr);
       	fwrite(&v,sizeof(v),1,pt);
        fprintf(fp,"\n%s\t\t%d\t%d\t%d\t%d\t%.2f",v.name,v.runs,v.balls,v.four,v.six,v.sr);		       
		printf("\npress(Y/N) to enter the score of next batsman:");
       	score_pbks+=v.runs;
       	pbks_balls+=v.balls;
       	che=getche();
       	i++;
       	if(i>2){
       	 wtk++;
       }
	   }while(che=='y'||che=='Y');
       ptr=fopen("rough.txt","r");
	   printf("\n Final scorecard of both teams:\n");
	   printf("\n%s scoreboard==>\nName\t\truns\tball\t4s\t6s\tSR\n",a);
	   while(fread(&v,sizeof(v),1,ptr)>0)
	   printf("\n%s\t\t%d\t%d\t%d\t%d\t%.2f",v.name,v.runs,v.balls,v.four,v.six,v.sr);
	   rewind(pt);
	   printf("\n%s scoreboard==>\nName\t\truns\tball\t4s\t6s\tSR\n",b);
	   while(fread(&v,sizeof(v),1,pt)>0)
	   printf("\n%s\t\t%d\t%d\t%d\t%d\t%.2f",v.name,v.runs,v.balls,v.four,v.six,v.sr);
	   rewind(fp);
	   fscanf(fp,"\n%s\t\t%d\t%d\t%d\t%d\t%.2f",v.name,&v.runs,&v.balls,&v.four,&v.six,&v.sr);
	   char won[5];
	   if(score_pbks>score_csk){
	   won[5]=b;
	   	printf("\n %s won by %dWtks.",b,10-wtk);
	   }
	   else if(score_csk>score_pbks){
	   won[5]=a;
	   printf("\n %s WON BY %d runs.",a,score_csk-score_pbks);
}
	   else
	   printf("\n After the match tied due to the rainfall the match results willbe unseen. So, both Teams gets each 1 points. ");
	   fclose(fp);
	   fclose(ptr);
	   fclose(pt);
	   predict_n(won[5]);			   		
}
//==================================================================m5
void lsgvscsk(){
    char a[5]="LSG",b[5]="CSK",ch;
    int i,score_csk=0,csk_balls=0;
	   fp=fopen("m5.txt","w+");
       ptr=fopen("rough.txt","w+");//rough
       printf("\npredict the winner who gets 2 points(%s/%s):\n",a,b);
       scanf("%s",predict);
       fprintf(fp,"%s scoreboard==>\nName\t\truns\tball\t4s\t6s\tSR\n",a);//related to line no.86
	   do{
       	printf("\nenter the name of player %d\n",i+1);
       	scanf("%s",v.name);
       	printf("\nenter the runs:\n");
       	scanf("%d",&v.runs);
       	printf("\nenter the balls:\n");
       	scanf("%d",&v.balls);
       	printf("\nenter the 4S:\n");
       	scanf("%d",&v.four);
       	printf("\nenter the 6s:\n");
       	scanf("%d",&v.six);
       	v.sr=100*v.runs/v.balls;
       	printf("\nstrike rate of %s is %.2f",v.name,v.sr);
       	fwrite(&v,sizeof(v),1,ptr);
       	fprintf(fp,"\n%s\t\t%d\t%d\t%d\t%d\t%.2f",v.name,v.runs,v.balls,v.four,v.six,v.sr);
       	printf("\npress(Y/N) to enter the score of next batsman:");
       	score_csk+=v.runs;
       	csk_balls+=v.balls;
       	ch=getche();
       	i++;
	   }while(ch=='y'||ch=='Y');
	   if(csk_balls<120||csk_balls>120)
	   {
	   	printf("\ncheck balls faced by %s and correct it.",a);
	   }
	   	rewind(fp);
		fscanf(fp,"\n%s\t\t%d\t%d\t%d\t%d\t%.2f",v.name,&v.runs,&v.balls,&v.four,&v.six,&v.sr);		        
		printf("\n%s scoreboard==>\nName\t\truns\tball\t4s\t6s\tSR\n",a);
	   rewind(ptr);
	   while(fread(&v,sizeof(v),1,ptr)>0)
	   printf("\n%s\t\t%d\t%d\t%d\t%d\t%.2f",v.name,v.runs,v.balls,v.four,v.six,v.sr);
	   printf("\n/n %s need %d runs in 120 balls====>>>>\n",b,score_csk+1);
	   fclose(fp);
	   fclose(ptr);
	   fp=fopen("m5.txt","a+");
	   pt=fopen("t2.txt","w+");
	   int score_pbks=0,pbks_balls=0;
       char che;
       i=0;
       int wtk=0;
       fprintf(fp,"\n%s scoreboard==>\nName\t\truns\tball\t4s\t6s\tSR\n ",b);
	   do{
       	printf("\nenter the name of player %d\n",i+1);
       	scanf("%s",v.name);
       	printf("\nenter the runs:\n");
       	scanf("%d",&v.runs);
       	printf("\nenter the balls:\n");
       	scanf("%d",&v.balls);
       	printf("\nenter the 4S:\n");
       	scanf("%d",&v.four);
       	printf("\nenter the 6s:\n");
       	scanf("%d",&v.six);
       	v.sr=100*v.runs/v.balls;
       	printf("\nstrike rate of %s is %.2f",v.name,v.sr);
       	fwrite(&v,sizeof(v),1,pt);
        fprintf(fp,"\n%s\t\t%d\t%d\t%d\t%d\t%.2f",v.name,v.runs,v.balls,v.four,v.six,v.sr);		       
		printf("\npress(Y/N) to enter the score of next batsman:");
       	score_pbks+=v.runs;
       	pbks_balls+=v.balls;
       	che=getche();
       	i++;
       	if(i>2){
       	 wtk++;
       }
	   }while(che=='y'||che=='Y');
       ptr=fopen("rough.txt","r");
	   printf("\n Final scorecard of both teams:\n");
	   printf("\n%s scoreboard==>\nName\t\truns\tball\t4s\t6s\tSR\n",a);
	   while(fread(&v,sizeof(v),1,ptr)>0)
	   printf("\n%s\t\t%d\t%d\t%d\t%d\t%.2f",v.name,v.runs,v.balls,v.four,v.six,v.sr);
	   rewind(pt);
	   printf("\n%s scoreboard==>\nName\t\truns\tball\t4s\t6s\tSR\n",b);
	   while(fread(&v,sizeof(v),1,pt)>0)
	   printf("\n%s\t\t%d\t%d\t%d\t%d\t%.2f",v.name,v.runs,v.balls,v.four,v.six,v.sr);
	   rewind(fp);
	   fscanf(fp,"\n%s\t\t%d\t%d\t%d\t%d\t%.2f",v.name,&v.runs,&v.balls,&v.four,&v.six,&v.sr);
	   char won[5];
	   if(score_pbks>score_csk){
	   won[5]=b;
	   	printf("\n %s won by %dWtks.",b,10-wtk);
	   }
	   else if(score_csk>score_pbks){
	   won[5]=a;
	   printf("\n %s WON BY %d runs.",a,score_csk-score_pbks);
}
	   else
	   printf("\n After the match tied due to the rainfall the match results willbe unseen. So, both Teams gets each 1 points. ");
	   fclose(fp);
	   fclose(ptr);
	   fclose(pt);
	   predict_n(won[5]);
}   
void mivspbks(){
    char a[5]="PBKS",b[5]="MI",ch;
    int i,score_csk=0,csk_balls=0;
	   fp=fopen("m6.txt","w+");
       ptr=fopen("rough.txt","w+");//rough
       printf("\npredict the winner who gets 2 points(%s/%s):\n",a,b);
       scanf("%s",predict);
       fprintf(fp,"%s scoreboard==>\nName\t\truns\tball\t4s\t6s\tSR\n",a);//related to line no.86
	   do{
       	printf("\nenter the name of player %d\n",i+1);
       	scanf("%s",v.name);
       	printf("\nenter the runs:\n");
       	scanf("%d",&v.runs);
       	printf("\nenter the balls:\n");
       	scanf("%d",&v.balls);
       	printf("\nenter the 4S:\n");
       	scanf("%d",&v.four);
       	printf("\nenter the 6s:\n");
       	scanf("%d",&v.six);
       	v.sr=100*v.runs/v.balls;
       	printf("\nstrike rate of %s is %.2f",v.name,v.sr);
       	fwrite(&v,sizeof(v),1,ptr);
       	fprintf(fp,"\n%s\t\t%d\t%d\t%d\t%d\t%.2f",v.name,v.runs,v.balls,v.four,v.six,v.sr);
       	printf("\npress(Y/N) to enter the score of next batsman:");
       	score_csk+=v.runs;
       	csk_balls+=v.balls;
       	ch=getche();
       	i++;
	   }while(ch=='y'||ch=='Y');
	   if(csk_balls<120||csk_balls>120)
	   {
	   	printf("\ncheck balls faced by %s and correct it.",a);
	   }
	   	rewind(fp);
		fscanf(fp,"\n%s\t\t%d\t%d\t%d\t%d\t%.2f",v.name,&v.runs,&v.balls,&v.four,&v.six,&v.sr);		        
		printf("\n%s scoreboard==>\nName\t\truns\tball\t4s\t6s\tSR\n",a);
	   rewind(ptr);
	   while(fread(&v,sizeof(v),1,ptr)>0)
	   printf("\n%s\t\t%d\t%d\t%d\t%d\t%.2f",v.name,v.runs,v.balls,v.four,v.six,v.sr);
	   printf("\n/n %s need %d runs in 120 balls====>>>>\n",b,score_csk+1);
	   fclose(fp);
	   fclose(ptr);
	   fp=fopen("m6.txt","a+");
	   pt=fopen("t2.txt","w+");
	   int score_pbks=0,pbks_balls=0;
       char che;
       i=0;
       int wtk=0;
       fprintf(fp,"\n%s scoreboard==>\nName\t\truns\tball\t4s\t6s\tSR\n ",b);
	   do{
       	printf("\nenter the name of player %d\n",i+1);
       	scanf("%s",v.name);
       	printf("\nenter the runs:\n");
       	scanf("%d",&v.runs);
       	printf("\nenter the balls:\n");
       	scanf("%d",&v.balls);
       	printf("\nenter the 4S:\n");
       	scanf("%d",&v.four);
       	printf("\nenter the 6s:\n");
       	scanf("%d",&v.six);
       	v.sr=100*v.runs/v.balls;
       	printf("\nstrike rate of %s is %.2f",v.name,v.sr);
       	fwrite(&v,sizeof(v),1,pt);
        fprintf(fp,"\n%s\t\t%d\t%d\t%d\t%d\t%.2f",v.name,v.runs,v.balls,v.four,v.six,v.sr);		       
		printf("\npress(Y/N) to enter the score of next batsman:");
       	score_pbks+=v.runs;
       	pbks_balls+=v.balls;
       	che=getche();
       	i++;
       	if(i>2){
       	 wtk++;
       }
	   }while(che=='y'||che=='Y');
       ptr=fopen("rough.txt","r");
	   printf("\n Final scorecard of both teams:\n");
	   printf("\n%s scoreboard==>\nName\t\truns\tball\t4s\t6s\tSR\n",a);
	   while(fread(&v,sizeof(v),1,ptr)>0)
	   printf("\n%s\t\t%d\t%d\t%d\t%d\t%.2f",v.name,v.runs,v.balls,v.four,v.six,v.sr);
	   rewind(pt);
	   printf("\n%s scoreboard==>\nName\t\truns\tball\t4s\t6s\tSR\n",b);
	   while(fread(&v,sizeof(v),1,pt)>0)
	   printf("\n%s\t\t%d\t%d\t%d\t%d\t%.2f",v.name,v.runs,v.balls,v.four,v.six,v.sr);
	   rewind(fp);
	   fscanf(fp,"\n%s\t\t%d\t%d\t%d\t%d\t%.2f",v.name,&v.runs,&v.balls,&v.four,&v.six,&v.sr);
	   char won[5];
	   if(score_pbks>score_csk){
	   won[5]=b;
	   	printf("\n %s won by %dWtks.",b,10-wtk);
	   }
	   else if(score_csk>score_pbks){
	   won[5]=a;
	   printf("\n %s WON BY %d runs.",a,score_csk-score_pbks);
}
	   else
	   printf("\n After the match tied due to the rainfall the match results willbe unseen. So, both Teams gets each 1 points. ");
	   fclose(fp);
	   fclose(ptr);
	   fclose(pt);
	   predict_n(won[5]);
}
//===========================================================================================m7
void kkrvssrh(){
    char a[5]="SRH",b[5]="KKR",ch;
    int i,score_csk=0,csk_balls=0;
	   fp=fopen("m7.txt","w+");
       ptr=fopen("rough.txt","w+");//rough
       printf("\npredict the winner who gets 2 points(%s/%s):\n",a,b);
       scanf("%s",predict);
       fprintf(fp,"%s scoreboard==>\nName\t\truns\tball\t4s\t6s\tSR\n",a);//related to line no.86
	   do{
       	printf("\nenter the name of player %d\n",i+1);
       	scanf("%s",v.name);
       	printf("\nenter the runs:\n");
       	scanf("%d",&v.runs);
       	printf("\nenter the balls:\n");
       	scanf("%d",&v.balls);
       	printf("\nenter the 4S:\n");
       	scanf("%d",&v.four);
       	printf("\nenter the 6s:\n");
       	scanf("%d",&v.six);
       	v.sr=100*v.runs/v.balls;
       	printf("\nstrike rate of %s is %.2f",v.name,v.sr);
       	fwrite(&v,sizeof(v),1,ptr);
       	fprintf(fp,"\n%s\t\t%d\t%d\t%d\t%d\t%.2f",v.name,v.runs,v.balls,v.four,v.six,v.sr);
       	printf("\npress(Y/N) to enter the score of next batsman:");
       	score_csk+=v.runs;
       	csk_balls+=v.balls;
       	ch=getche();
       	i++;	
	   }while(ch=='y'||ch=='Y');
	   if(csk_balls<120||csk_balls>120)
	   {
	   	printf("\ncheck balls faced by %s and correct it.",a);
	   }
	   	rewind(fp);
		fscanf(fp,"\n%s\t\t%d\t%d\t%d\t%d\t%.2f",v.name,&v.runs,&v.balls,&v.four,&v.six,&v.sr);		        
		printf("\n%s scoreboard==>\nName\t\truns\tball\t4s\t6s\tSR\n",a);
	   rewind(ptr);
	   while(fread(&v,sizeof(v),1,ptr)>0)
	   printf("\n%s\t\t%d\t%d\t%d\t%d\t%.2f",v.name,v.runs,v.balls,v.four,v.six,v.sr);
	   printf("\n/n %s need %d runs in 120 balls====>>>>\n",b,score_csk+1);
	   fclose(fp);
	   fclose(ptr);
	   fp=fopen("m7.txt","a+");
	   pt=fopen("t2.txt","w+");
	   int score_pbks=0,pbks_balls=0;
       char che;
       i=0;
       int wtk=0;
       fprintf(fp,"\n%s scoreboard==>\nName\t\truns\tball\t4s\t6s\tSR\n ",b);
	   do{
       	printf("\nenter the name of player %d\n",i+1);
       	scanf("%s",v.name);
       	
       	printf("\nenter the runs:\n");
       	scanf("%d",&v.runs);
       	
       	printf("\nenter the balls:\n");
       	scanf("%d",&v.balls);
       	
       	printf("\nenter the 4S:\n");
       	scanf("%d",&v.four);
       	
       	printf("\nenter the 6s:\n");
       	scanf("%d",&v.six);
       	
       	v.sr=100*v.runs/v.balls;
       	printf("\nstrike rate of %s is %.2f",v.name,v.sr);
       	
       	fwrite(&v,sizeof(v),1,pt);
       	
        fprintf(fp,"\n%s\t\t%d\t%d\t%d\t%d\t%.2f",v.name,v.runs,v.balls,v.four,v.six,v.sr);		       
		printf("\npress(Y/N) to enter the score of next batsman:");
       	score_pbks+=v.runs;
       	pbks_balls+=v.balls;
       	che=getche();
       	i++;
       	if(i>2){
       	 wtk++;
       }
	   }while(che=='y'||che=='Y');
       ptr=fopen("rough.txt","r");
	   printf("\n Final scorecard of both teams:\n");
	   printf("\n%s scoreboard==>\nName\t\truns\tball\t4s\t6s\tSR\n",a);
	   while(fread(&v,sizeof(v),1,ptr)>0)
	   printf("\n%s\t\t%d\t%d\t%d\t%d\t%.2f",v.name,v.runs,v.balls,v.four,v.six,v.sr);
	   rewind(pt);
	   printf("\n%s scoreboard==>\nName\t\truns\tball\t4s\t6s\tSR\n",b);
	   while(fread(&v,sizeof(v),1,pt)>0)
	   printf("\n%s\t\t%d\t%d\t%d\t%d\t%.2f",v.name,v.runs,v.balls,v.four,v.six,v.sr);
	   rewind(fp);
	   fscanf(fp,"\n%s\t\t%d\t%d\t%d\t%d\t%.2f",v.name,&v.runs,&v.balls,&v.four,&v.six,&v.sr);
	   char won[5];
	   if(score_pbks>score_csk){
	   won[5]=b;
	   	printf("\n %s won by %dWtks.",b,10-wtk);
	   }
	   else if(score_csk>score_pbks){
	   won[5]=a;
	   printf("\n %s WON BY %d runs.",a,score_csk-score_pbks);
}
	   else
	   printf("\n After the match tied due to the rainfall the match results willbe unseen. So, both Teams gets each 1 points. ");
	   fclose(fp);
	   fclose(ptr);
	   fclose(pt);
	   predict_n(won[5]);
}
//====================================================m8
void gtvsrr(){
    char a[5]="RR",b[5]="GT",ch;
    int i,score_csk=0,csk_balls=0;
	   fp=fopen("m8.txt","w+");
       ptr=fopen("rough.txt","w+");//rough
       printf("\npredict the winner who gets 2 points(%s/%s):\n",a,b);
       scanf("%s",predict);
       fprintf(fp,"%s scoreboard==>\nName\t\truns\tball\t4s\t6s\tSR\n",a);//related to line no.86
	   do{
       	printf("\nenter the name of player %d\n",i+1);
       	scanf("%s",v.name);
       	printf("\nenter the runs:\n");
       	scanf("%d",&v.runs);
       	printf("\nenter the balls:\n");
       	scanf("%d",&v.balls);
       	printf("\nenter the 4S:\n");
       	scanf("%d",&v.four);
       	printf("\nenter the 6s:\n");
       	scanf("%d",&v.six);
       	v.sr=100*v.runs/v.balls;
       	printf("\nstrike rate of %s is %.2f",v.name,v.sr);
       	fwrite(&v,sizeof(v),1,ptr);
       	fprintf(fp,"\n%s\t\t%d\t%d\t%d\t%d\t%.2f",v.name,v.runs,v.balls,v.four,v.six,v.sr);
       	printf("\npress(Y/N) to enter the score of next batsman:");
       	score_csk+=v.runs;
       	csk_balls+=v.balls;
       	ch=getche();
       	i++;	
	   }while(ch=='y'||ch=='Y');
	   if(csk_balls<120||csk_balls>120)
	   {
	   	printf("\ncheck balls faced by %s and correct it.",a);
	   }
	   	rewind(fp);
		fscanf(fp,"\n%s\t\t%d\t%d\t%d\t%d\t%.2f",v.name,&v.runs,&v.balls,&v.four,&v.six,&v.sr);		        
		printf("\n%s scoreboard==>\nName\t\truns\tball\t4s\t6s\tSR\n",a);
	   rewind(ptr);
	   while(fread(&v,sizeof(v),1,ptr)>0)
	   printf("\n%s\t\t%d\t%d\t%d\t%d\t%.2f",v.name,v.runs,v.balls,v.four,v.six,v.sr);
	   printf("\n/n %s need %d runs in 120 balls====>>>>\n",b,score_csk+1);
	   fclose(fp);
	   fclose(ptr);
	   fp=fopen("m8.txt","a+");
	   pt=fopen("t2.txt","w+");
	   int score_pbks=0,pbks_balls=0;
       char che;
       i=0;
       int wtk=0;
       fprintf(fp,"\n%s scoreboard==>\nName\t\truns\tball\t4s\t6s\tSR\n ",b);
	   do{
       	printf("\nenter the name of player %d\n",i+1);
       	scanf("%s",v.name);
       	printf("\nenter the runs:\n");
       	scanf("%d",&v.runs);
       	printf("\nenter the balls:\n");
       	scanf("%d",&v.balls);
       	printf("\nenter the 4S:\n");
       	scanf("%d",&v.four);
       	printf("\nenter the 6s:\n");
       	scanf("%d",&v.six);
       	v.sr=100*v.runs/v.balls;
       	printf("\nstrike rate of %s is %.2f",v.name,v.sr);
       	fwrite(&v,sizeof(v),1,pt);
        fprintf(fp,"\n%s\t\t%d\t%d\t%d\t%d\t%.2f",v.name,v.runs,v.balls,v.four,v.six,v.sr);		       
		printf("\npress(Y/N) to enter the score of next batsman:");
       	score_pbks+=v.runs;
       	pbks_balls+=v.balls;
       	che=getche();
       	i++;
       	if(i>2){
       	 wtk++;
       }
	}while(che=='y'||che=='Y');
       ptr=fopen("rough.txt","r");
	   printf("\n Final scorecard of both teams:\n");
	   printf("\n%s scoreboard==>\nName\t\truns\tball\t4s\t6s\tSR\n",a);
	   while(fread(&v,sizeof(v),1,ptr)>0)
	   printf("\n%s\t\t%d\t%d\t%d\t%d\t%.2f",v.name,v.runs,v.balls,v.four,v.six,v.sr);
	   rewind(pt);
	   printf("\n%s scoreboard==>\nName\t\truns\tball\t4s\t6s\tSR\n",b);
	   while(fread(&v,sizeof(v),1,pt)>0)
	   printf("\n%s\t\t%d\t%d\t%d\t%d\t%.2f",v.name,v.runs,v.balls,v.four,v.six,v.sr);
	   rewind(fp);
	   fscanf(fp,"\n%s\t\t%d\t%d\t%d\t%d\t%.2f",v.name,&v.runs,&v.balls,&v.four,&v.six,&v.sr);
	   char won[5];
	   if(score_pbks>score_csk){
	   won[5]=b;
	   	printf("\n %s won by %dWtks.",b,10-wtk);
	   }
	   else if(score_csk>score_pbks){
	   won[5]=a;
	   printf("\n %s WON BY %d runs.",a,score_csk-score_pbks);
}
	   else
	   printf("\n After the match tied due to the rainfall the match results willbe unseen. So, both Teams gets each 1 points. ");
	   fclose(fp);
	   fclose(ptr);
	   fclose(pt);
	   predict_n(won[5]);
}
void mivscsk(){
    char a[5]="MI",b[5]="CSK",ch;
    int i,score_csk=0,csk_balls=0;
	   fp=fopen("m9.txt","w+");
       ptr=fopen("rough.txt","w+");//rough
       printf("\npredict the winner who gets 2 points(%s/%s):\n",a,b);
       scanf("%s",predict);
       fprintf(fp,"%s scoreboard==>\nName\t\truns\tball\t4s\t6s\tSR\n",a);//related to line no.86
	   do{
       	printf("\nenter the name of player %d\n",i+1);
       	scanf("%s",v.name);
       	printf("\nenter the runs:\n");
       	scanf("%d",&v.runs);
       	printf("\nenter the balls:\n");
       	scanf("%d",&v.balls);
       	printf("\nenter the 4S:\n");
       	scanf("%d",&v.four);
       	printf("\nenter the 6s:\n");
       	scanf("%d",&v.six);
       	v.sr=100*v.runs/v.balls;
       	printf("\nstrike rate of %s is %.2f",v.name,v.sr);
       	fwrite(&v,sizeof(v),1,ptr);
       	fprintf(fp,"\n%s\t\t%d\t%d\t%d\t%d\t%.2f",v.name,v.runs,v.balls,v.four,v.six,v.sr);
       	printf("\npress(Y/N) to enter the score of next batsman:");
       	score_csk+=v.runs;
       	csk_balls+=v.balls;
       	ch=getche();
       	i++;
	   }while(ch=='y'||ch=='Y');
	   if(csk_balls<120||csk_balls>120)
	   {
	   	printf("\ncheck balls faced by %s and correct it.",a);
	   }
	   	rewind(fp);
		fscanf(fp,"\n%s\t\t%d\t%d\t%d\t%d\t%.2f",v.name,&v.runs,&v.balls,&v.four,&v.six,&v.sr);		        
		printf("\n%s scoreboard==>\nName\t\truns\tball\t4s\t6s\tSR\n",a);
	   rewind(ptr);
	   while(fread(&v,sizeof(v),1,ptr)>0)
	   printf("\n%s\t\t%d\t%d\t%d\t%d\t%.2f",v.name,v.runs,v.balls,v.four,v.six,v.sr);
	   printf("\n/n %s need %d runs in 120 balls====>>>>\n",b,score_csk+1);
	   fclose(fp);
	   fclose(ptr);
	   fp=fopen("m9.txt","a+");
	   pt=fopen("t2.txt","w+");
	   int score_pbks=0,pbks_balls=0;
       char che;
       i=0;
       int wtk=0;
       fprintf(fp,"\n%s scoreboard==>\nName\t\truns\tball\t4s\t6s\tSR\n ",b);
	   do{
       	printf("\nenter the name of player %d\n",i+1);
       	scanf("%s",v.name);
       	printf("\nenter the runs:\n");
       	scanf("%d",&v.runs);
       	printf("\nenter the balls:\n");
       	scanf("%d",&v.balls);
       	printf("\nenter the 4S:\n");
       	scanf("%d",&v.four);
       	printf("\nenter the 6s:\n");
       	scanf("%d",&v.six);
       	v.sr=100*v.runs/v.balls;
       	printf("\nstrike rate of %s is %.2f",v.name,v.sr);
       	fwrite(&v,sizeof(v),1,pt);
        fprintf(fp,"\n%s\t\t%d\t%d\t%d\t%d\t%.2f",v.name,v.runs,v.balls,v.four,v.six,v.sr);		       
		printf("\npress(Y/N) to enter the score of next batsman:");
       	score_pbks+=v.runs;
       	pbks_balls+=v.balls;
       	che=getche();
       	i++;
       	if(i>2){
       	 wtk++;
       }
	}while(che=='y'||che=='Y');   
       ptr=fopen("rough.txt","r");
	   printf("\n Final scorecard of both teams:\n");
	   printf("\n%s scoreboard==>\nName\t\truns\tball\t4s\t6s\tSR\n",a);
	   while(fread(&v,sizeof(v),1,ptr)>0)
	   printf("\n%s\t\t%d\t%d\t%d\t%d\t%.2f",v.name,v.runs,v.balls,v.four,v.six,v.sr);
	   rewind(pt);
	   printf("\n%s scoreboard==>\nName\t\truns\tball\t4s\t6s\tSR\n",b);
	   while(fread(&v,sizeof(v),1,pt)>0)
	   printf("\n%s\t\t%d\t%d\t%d\t%d\t%.2f",v.name,v.runs,v.balls,v.four,v.six,v.sr);
	   rewind(fp);
	   fscanf(fp,"\n%s\t\t%d\t%d\t%d\t%d\t%.2f",v.name,&v.runs,&v.balls,&v.four,&v.six,&v.sr);
	   char won[5];
	   if(score_pbks>score_csk){
	   won[5]=b;
	   	printf("\n %s won by %dWtks.",b,10-wtk);
	   }
	   else if(score_csk>score_pbks){
	   won[5]=a;
	   printf("\n %s WON BY %d runs.",a,score_csk-score_pbks);
}
	   else
	   printf("\n After the match tied due to the rainfall the match results willbe unseen. So, both Teams gets each 1 points. ");
	   fclose(fp);
	   fclose(ptr);
	   fclose(pt);
	   predict_n(won[5]);
}
//====================================================================m10
void rcbvsdc(){
    char a[5]="RCB",b[5]="DC",ch;
    int i,score_csk=0,csk_balls=0;
	   fp=fopen("m10.txt","w+");
       ptr=fopen("rough.txt","w+");//rough
       printf("\npredict the winner who gets 2 points(%s/%s):\n",a,b);
       scanf("%s",predict);
       fprintf(fp,"%s scoreboard==>\nName\t\truns\tball\t4s\t6s\tSR\n",a);//related to line no.86
	   do{
       	printf("\nenter the name of player %d\n",i+1);
       	scanf("%s",v.name);
       	printf("\nenter the runs:\n");
       	scanf("%d",&v.runs);
       	printf("\nenter the balls:\n");
       	scanf("%d",&v.balls);
       	printf("\nenter the 4S:\n");
       	scanf("%d",&v.four);
       	printf("\nenter the 6s:\n");
       	scanf("%d",&v.six);
       	v.sr=100*v.runs/v.balls;
       	printf("\nstrike rate of %s is %.2f",v.name,v.sr);
       	fwrite(&v,sizeof(v),1,ptr);
       	fprintf(fp,"\n%s\t\t%d\t%d\t%d\t%d\t%.2f",v.name,v.runs,v.balls,v.four,v.six,v.sr);
       	printf("\npress(Y/N) to enter the score of next batsman:");
       	score_csk+=v.runs;
       	csk_balls+=v.balls;
       	ch=getche();
       	i++;
	   }while(ch=='y'||ch=='Y');
	   if(csk_balls<120||csk_balls>120)
	   {
	   	printf("\ncheck balls faced by %s and correct it.",a);
	   }
	   	rewind(fp);
		fscanf(fp,"\n%s\t\t%d\t%d\t%d\t%d\t%.2f",v.name,&v.runs,&v.balls,&v.four,&v.six,&v.sr);		        
		printf("\n%s scoreboard==>\nName\t\truns\tball\t4s\t6s\tSR\n",a);
	   rewind(ptr);
	   while(fread(&v,sizeof(v),1,ptr)>0)
	   printf("\n%s\t\t%d\t%d\t%d\t%d\t%.2f",v.name,v.runs,v.balls,v.four,v.six,v.sr);
	   printf("\n/n %s need %d runs in 120 balls====>>>>\n",b,score_csk+1);
	   fclose(fp);
	   fclose(ptr);
	   fp=fopen("m10.txt","a+");
	   pt=fopen("t2.txt","w+");
	   int score_pbks=0,pbks_balls=0;
       char che;
       i=0;
       int wtk=0;
       fprintf(fp,"\n%s scoreboard==>\nName\t\truns\tball\t4s\t6s\tSR\n ",b);
	   do{
       	printf("\nenter the name of player %d\n",i+1);
       	scanf("%s",v.name);
       	printf("\nenter the runs:\n");
       	scanf("%d",&v.runs);
       	printf("\nenter the balls:\n");
       	scanf("%d",&v.balls);
       	printf("\nenter the 4S:\n");
       	scanf("%d",&v.four);
       	printf("\nenter the 6s:\n");
       	scanf("%d",&v.six);
       	v.sr=100*v.runs/v.balls;
       	printf("\nstrike rate of %s is %.2f",v.name,v.sr);
       	fwrite(&v,sizeof(v),1,pt);
        fprintf(fp,"\n%s\t\t%d\t%d\t%d\t%d\t%.2f",v.name,v.runs,v.balls,v.four,v.six,v.sr);		       
		printf("\npress(Y/N) to enter the score of next batsman:");
       	score_pbks+=v.runs;
       	pbks_balls+=v.balls;
       	che=getche();
       	i++;
       	if(i>2){   
        wtk++;
       }
	   }while(che=='y'||che=='Y');
       ptr=fopen("rough.txt","r");
	   printf("\n Final scorecard of both teams:\n");
	   printf("\n%s scoreboard==>\nName\t\truns\tball\t4s\t6s\tSR\n",a);
	   while(fread(&v,sizeof(v),1,ptr)>0)
	   printf("\n%s\t\t%d\t%d\t%d\t%d\t%.2f",v.name,v.runs,v.balls,v.four,v.six,v.sr);
	   rewind(pt);
	   printf("\n%s scoreboard==>\nName\t\truns\tball\t4s\t6s\tSR\n",b);
	   while(fread(&v,sizeof(v),1,pt)>0)
	   printf("\n%s\t\t%d\t%d\t%d\t%d\t%.2f",v.name,v.runs,v.balls,v.four,v.six,v.sr);
	   rewind(fp);
	   fscanf(fp,"\n%s\t\t%d\t%d\t%d\t%d\t%.2f",v.name,&v.runs,&v.balls,&v.four,&v.six,&v.sr);
	   char won[5];
	   if(score_pbks>score_csk){
	   won[5]=b;
	   	printf("\n %s won by %dWtks.",b,10-wtk);
	   }
	   else if(score_csk>score_pbks){
	   won[5]=a;
	   printf("\n %s WON BY %d runs.",a,score_csk-score_pbks);
}
	   else
	   printf("\n After the match tied due to the rainfall the match results willbe unseen. So, both Teams gets each 1 points. ");
	   fclose(fp);
	   fclose(ptr);
	   fclose(pt);
	   predict_n(won[5]);
}