#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
#define DATA_SIZE 1000
struct login{
    char fname[30];
    char lname[30];
    char username[30];
    char password[20];
};
int View_Responses(int Options[],char Chap[]);
void Access_a_Paper(){
	system("cls");
	char AaP_Qp[20],s,p;
	printf("\n\t\t\t\t\t\t\t\t\t\t        Welcome\n");
	printf("\n\t\t\t\t\t\t\t\t\t\tThese are the question papers that we have as of now : \n");
	printf("\n\t\t\t\t\t\t\t\t\t\t1.Arrays.txt\n\t\t\t\t\t\t\t\t\t\t2.Stacks.txt\n\t\t\t\t\t\t\t\t\t\t3.Queues.txt\n\t\t\t\t\t\t\t\t\t\t4.Linked List.txt\n\t\t\t\t\t\t\t\t\t\t5.Doubly Linked List.txt\n\t\t\t\t\t\t\t\t\t\t6.Circular Linked List\n\t\t\t\t\t\t\t\t\t\t7.Stacks_LL.txt\n\t\t\t\t\t\t\t\t\t\t8.Queues_LL.txt\n\t\t\t\t\t\t\t\t\t\t9.BinaryT_Arrays.txt\n\t\t\t\t\t\t\t\t\t\t10.BinaryT_LL.txt\n\t\t\t\t\t\t\t\t\t\t11.BT_Operations.txt");
	FILE* Stor_ptr = fopen("Storage.txt","r");
	while((s=fgetc(Stor_ptr))!=EOF){
		printf("%c",s);
	}
	printf("\n\t\t\t\t\t\t\t\t\t\tWant to check any one?");
	printf("Enter the file name : ");
	scanf("%s",AaP_Qp);
	FILE* fptr = fopen(AaP_Qp,"r");
	if (fptr == NULL)
    {
        fputs("\t\t\t\t\t\t\t\t\t\tError at opening File!\n", stderr);
        //exit(1);
    }
	else{	
		while((p=fgetc(fptr))!=EOF){
			printf("%c",p);
		}
	}
	printf("\n\t\t\t\t\t\t\t\t\t\tThank You!!\n");
}
int Access_Results(char Options[],char Chap[]){
	//system("cls");
	int marks = 0,i = 0;
	printf("\nAccess_Results\n");
	//View_Responses(Options,Chap);
	char str[] = "Arrays.txt";
	if(!strcmp(Chap,str)){
		//printf("Entered!");
		FILE* Arrays_ptr = fopen("Arrays_ans.txt","r");
		char s;
		while (1){
			s = fgetc ( Arrays_ptr ) ; 
			if(Options[i] == s){
				marks++;
			}
			else if(s == EOF){
				break;
			}
			else{
				marks--;
			}
			printf ( "%c - %c\n",s,Options[i]);
			i++;
		}
	}
	else if(!strcmp(Chap,"Stacks.txt")){
		FILE* Stacks_ptr = fopen("Stacks_ans.txt","r");
		char s;
		while (1){
			s = fgetc ( Stacks_ptr ) ; 
			if(Options[i] == s){
				marks++;
			}
			else if(s == EOF){
				break;
			}
			else{
				marks--;
			}
			printf ( "%c - %c\n",s,Options[i]);
			i++;
		}
	}
	else if(!strcmp(Chap,"Queues.txt")){
		FILE* Queues_ptr = fopen("Queues_ans.txt","r");
		char s;
		while (1){
			s = fgetc ( Queues_ptr ) ; 
			if(Options[i] == s){
				marks++;
			}
			else if(s == EOF){
				break;
			}
			else{
				marks--;
			}
			printf ( "%c - %c\n",s,Options[i]);
			i++;
		}
	}
	else if(!strcmp(Chap,"LinkedList.txt")){
		FILE* LL_ptr = fopen("LL_ans.txt","r");
		char s;
		while (1){
			s = fgetc ( LL_ptr ) ; 
			if(Options[i] == s){
				marks++;
			}
			else if(s == EOF){
				break;
			}
			else{
				marks--;
			}
			printf ( "%c - %c\n",s,Options[i]);
			i++;
		}
	}
	else if(!strcmp(Chap,"Doubly Linked List.txt")){
		FILE* DLL_ptr = fopen("DLL_ans.txt","r");
		char s;
		while (1){
			s = fgetc ( DLL_ptr ) ; 
			if(Options[i] == s){
				marks++;
			}
			else if(s == EOF){
				break;
			}
			else{
				marks--;
			}
			printf ( "%c - %c\n",s,Options[i]);
			i++;
		}
	}
	else if(!strcmp(Chap,"Circular Linked List.txt")){
		FILE* CLL_ptr = fopen("CLL_ans.txt","r");
		char s;
		while (1){
			s = fgetc ( CLL_ptr ) ; 
			if(Options[i] == s){
				marks++;
			}
			else if(s == EOF){
				break;
			}
			else{
				marks--;
			}
			printf ( "%c - %c\n",s,Options[i]);
			i++;
		}
	}
	else if(!strcmp(Chap,"Stacks_LL.txt")){
		FILE* SLL_ptr = fopen("SLL_ans.txt","r");
		char s;
		while (1){
			s = fgetc ( SLL_ptr ) ; 
			if(Options[i] == s){
				marks++;
			}
			else if(s == EOF){
				break;
			}
			else{
				marks--;
			}
			printf ( "%c - %c\n",s,Options[i]);
			i++;
		}
	}
	else if(!strcmp(Chap,"Queues_LL.txt")){
		FILE* QLL_ptr = fopen("QLL_ans.txt","r");
		char s;
		while (1){
			s = fgetc ( QLL_ptr ) ; 
			if(Options[i] == s){
				marks++;
			}
			else if(s == EOF){
				break;
			}
			else{
				marks--;
			}
			printf ( "%c - %c\n",s,Options[i]);
			i++;
		}
	}
	else if(!strcmp(Chap,"BinaryT_Arrays.txt")){
		FILE* BTA_ptr = fopen("BTA_ans.txt","r");
		char s;
		while (1){
			s = fgetc ( BTA_ptr ) ; 
			if(Options[i] == s){
				marks++;
			}
			else if(s == EOF){
				break;
			}
			else{
				marks--;
			}
			printf ( "%c - %c\n",s,Options[i]);
			i++;
		}
	}
	else if(!strcmp(Chap,"BinaryT_LL.txt")){
		FILE* BTLL_ptr = fopen("BTLL_ans.txt","r");
		char s;
		while (1){
			s = fgetc ( BTLL_ptr ) ; 
			if(Options[i] == s){
				marks++;
			}
			else if(s == EOF){
				break;
			}
			else{
				marks--;
			}
			printf ( "%c - %c\n",s,Options[i]);
			i++;
		}
	}
	else if(!strcmp(Chap,"BT_Operations.txt")){
		FILE* BTO_ptr = fopen("BTO_ans.txt","r");
		char s;
		while (1){
			s = fgetc ( BTO_ptr ) ; 
			if(Options[i] == s){
				marks++;
			}
			else if(s == EOF){
				break;
			}
			else{
				marks--;
			}
			printf ( "%c - %c\n",s,Options[i]);
			i++;
		}
	}
	else{
		printf("Wrong way!!");
	}
	return marks;
}
void Set_Exam_and_time(){
	//does nothing
}
void Records(char str[]){
	FILE* RM_ptr = fopen("Storage.txt","a+");
	fprintf(RM_ptr,str);
	fclose(RM_ptr);
}
void Record_Management(){
	/*FILE* RM_ptr = fopen("Storage.txt","a+");
	fprintf(RM_ptr,str);
	fclose(RM_ptr);*/
	char s;
	printf("\n\t\t\t\t\t\t\t\t\t\tWelcome To the Record Management!!");
	printf("\n\t\t\t\t\t\t\t\t\t\tThe Files that we have are : \n");
	FILE* RM_Read = fopen("Storage.txt","r");
	printf("\n\t\t\t\t\t\t\t\t\t\t");
	while((s=fgetc(RM_Read))!= EOF){
		printf("%c",s);
	}
	printf("\n");
}
int Event_Manager(){
	system("cls");
	int em;
	printf("\n\n\n\t\t\t\t\t\t\t\t\t\tYou have logged in as Event Manager!!\n");
	printf("\t\t\t\t\t\t\t\t\t==============================================\n");
	printf("\t\t\t\t\t\t\t\t\t1.Access a Paper\n\t\t\t\t\t\t\t\t\t2.Access results\n\t\t\t\t\t\t\t\t\t3.Record management\n\t\t\t\t\t\t\t\t\tEnter any other number to Exit\n");
    printf("\t\t\t\t\t\t\t\t\t==============================================\n");
	printf("\t\t\t\t\t\t\t\t\t\tEnter your choice : ");
	scanf("%d",&em);
	while(em >=1 && em<=3 ){
		if(em == 1){
			Access_a_Paper();
		}
		else if(em == 2){
			char Options[12];
			char Chap[20];
			Access_Results(Options,Chap);
		}
		else{
			Record_Management();
		}
		//system("cls");
		printf("\t\t\t\t\t\t\t\t\t==============================================\n");
		printf("\t\t\t\t\t\t\t\t\t1.Access a Paper\n\t\t\t\t\t\t\t\t\t2.Access results\n\t\t\t\t\t\t\t\t\t3.Record management\n\t\t\t\t\t\t\t\t\tEnter any other number to Exit\n");
		printf("\t\t\t\t\t\t\t\t\t==============================================\n");
		printf("\t\t\t\t\t\t\t\t\t\tEnter your choice : ");
		scanf("%d",&em);
	}
	if(em<=0 && em>=4){
		system("cls");
		printf("\n\n\n\t\t\t\t\t\t\t\t\t\tThank you!!\n\n\n");
		return 0;
	}
	return 0;
}
void View_Results(char Options[],char Chap[]){
	system("cls");
	printf("\n\t\t\t\t\t\t\t\t\t\tView Results!!\n");
	int marks = Access_Results(Options,Chap);
	printf("Your marks are : %d",marks);
}
void Continue_Chap_Test(){
	int op;
	system("cls");
	printf("\n\t\t\t\t\t\t\t\t\t\t1.Already done with atleast one chapter? If Yes, Enter 1\n\t\t\t\t\t\t\t\t\t\t2.New Student, have not written any test yet, then enter 2\n\t\t\t\t\t\t\t\t\t\t3.Exit\n");
	printf("\n\t\t\t\t\t\t\t\t\t\tEnter your choice : ");
	scanf("%d",&op);
	if(op == 1){
		char Chap[20],p;
		int test_choice;
		printf("\t\t\t\t\t\t\t\t\t\t1.Grand Test\n\t\t\t\t\t\t\t\t\t\t2.Chapter Test?\n");
		printf("t\t\t\t\t\t\t\t\t\t\tEnter Your Choice : ");
		scanf("%d",&test_choice);
		if(test_choice == 2){
			printf("\n\t\t\t\t\t\t\t\t\t\t1.Arrays.txt\n\t\t\t\t\t\t\t\t\t\t2.Stacks.txt\n\t\t\t\t\t\t\t\t\t\t3.Queues.txt\n\t\t\t\t\t\t\t\t\t\t4.Linked List.txt\n\t\t\t\t\t\t\t\t\t\t5.Doubly Linked List.txt\n\t\t\t\t\t\t\t\t\t\t6.Circular Linked List\n\t\t\t\t\t\t\t\t\t\t7.Stacks_LL.txt\n\t\t\t\t\t\t\t\t\t\t8.Queues_LL.txt\n\t\t\t\t\t\t\t\t\t\t9.BinaryT_Arrays.txt\n\t\t\t\t\t\t\t\t\t\t10.BinaryT_LL.txt\n\t\t\t\t\t\t\t\t\t\t11.BT_Operations.txt");
			FILE* fptr = fopen("Storage.txt","r");
			while((p=fgetc(fptr))!=EOF){
				printf("%c",p);
			}
			printf("\n\t\t\t\t\t\t\t\t\t\tEnter the chapter you are in : ");
			scanf("%s",Chap);
			FILE* fileptr = fopen(Chap,"r");
			while(fileptr == NULL){
			printf("\n\t\t\t\t\t\t\t\t\t\tInvalid File!!\n");
			printf("\n\t\t\t\t\t\t\t\t\t\t1.Arrays.txt\n\t\t\t\t\t\t\t\t\t\t2.Stacks.txt\n\t\t\t\t\t\t\t\t\t\t3.Queues.txt\n\t\t\t\t\t\t\t\t\t\t4.Linked List.txt\n\t\t\t\t\t\t\t\t\t\t5.Doubly Linked List.txt\n\t\t\t\t\t\t\t\t\t\t6.Circular Linked List\n\t\t\t\t\t\t\t\t\t\t7.Stacks_LL.txt\n\t\t\t\t\t\t\t\t\t\t8.Queues_LL.txt\n\t\t\t\t\t\t\t\t\t\t9.BinaryT_Arrays.txt\n\t\t\t\t\t\t\t\t\t\t10.BinaryT_LL.txt\n\t\t\t\t\t\t\t\t\t\t11.BT_Operations.txt");
			printf("\n\t\t\t\t\t\t\t\t\t\tPlease Enter the valid file!! : ");
			scanf("%s",Chap);
			}
			char s,options[12];
			int count = 0,c,i=0, h,q_no;
			while((s=fgetc(fileptr))!= EOF) {
				while((s=fgetc(fileptr))!='~'){
					printf("%c",s);
				}
				printf("\nEnter your choice : ");
				scanf(" %c",&options[count]);
				count++;
				/*printf("\nClear your option? 1.Yes, 2.no\n");
				if(c == 1){
					printf("Enter your choice then : ");
					scanf("%d",&options[count]);
				}*/
				//system("cls");
				if((s=fgetc(fileptr))==EOF){
					break;
				}
			}
			fclose(fileptr);
			FILE* ptr = fopen(Chap,"r");
			printf("here are your selected answers : \n");
			while((s=fgetc(ptr))!=EOF) {
				while((s=fgetc(ptr))!='~'){
					printf("%c",s);
				}
				printf("\n%d\n",options[i]);
				i++;
				if((s=fgetc(ptr))==EOF){
					break;
				}
			}
			printf("\nWant to clear any option? 1.yes,2.no");
			scanf("%d",&h);
			while(h!=2){
				if(h == 1){
					printf("Enter the question number : ");
					scanf("%d",&q_no);
					printf("Enter your choice : ");
					scanf("%d",&options[q_no]);
					printf("Changed Successfully");
				}
				else{
					printf("Thank You!!\n");
				}
			}
			printf("All your answers are saved!!");
			int ch;
			printf("\n\t\t\t\t\t\t\t\t\t\tThank you!!\n\t\t\t\t\t\t\t\t\t\tYour Responses are recorded!!\n");
			printf("\t\t\t\t\t\t\t\t\t\tWould you like to look at the results?\n");
			printf("\t\t\t\t\t\t\t\t\t\tIf yes, Enter 1 ,No, Enter 2 : ");
			scanf("%d",&ch);
			if(ch == 1){
				View_Results(options,Chap);
			}
			else{
				printf("\t\t\t\t\t\t\t\t\t\tWe respect your opinion!! Thank You!!\n");
			}
			fclose(fileptr);
		}
		else if(test_choice == 1){
			char GT_choice[20];
			printf("\n\t\t\t\t\t\t\t\t\t\t1.1-5 chapters\n\t\t\t\t\t\t\t\t\t\t2.6-11 chapters\n\t\t\t\t\t\t\t\t\t\t3. 1-11 chapters\n");
			printf("\t\t\t\t\t\t\t\t\t\tEnter your choice of chapters : ");
			scanf("%s",GT_choice);
			FILE* fileptr = fopen(GT_choice,"r");
			char s;
			int count = 0,options[12];
			while((s=fgetc(fileptr))!='`') {
				while((s=fgetc(fileptr))!='~'){
					printf("%c",s);
				}
				printf("\nEnter your choice : ");
				scanf("%d",&options[count]);
				//printf("\n");
				count++;
				system("cls");
				if((s=fgetc(fileptr))=='`'){
					break;
				}
			}
		}
		else{
			printf("\n\t\t\t\t\t\t\t\t\t\tThank You!!Hope you write the test next Time\n");
		}
	}
	else if(op == 2){
		printf("\n\t\t\t\t\t\t\t\t\t\t1.Arrays.txt\n\t\t\t\t\t\t\t\t\t\t2.Stacks.txt\n\t\t\t\t\t\t\t\t\t\t3.Queues.txt\n\t\t\t\t\t\t\t\t\t\t4.Linked List.txt\n\t\t\t\t\t\t\t\t\t\t5.Doubly Linked List.txt\n\t\t\t\t\t\t\t\t\t\t6.Circular Linked List\n\t\t\t\t\t\t\t\t\t\t7.Stacks_LL.txt\n\t\t\t\t\t\t\t\t\t\t8.Queues_LL.txt\n\t\t\t\t\t\t\t\t\t\t9.BinaryT_Arrays.txt\n\t\t\t\t\t\t\t\t\t\t10.BinaryT_LL.txt\n\t\t\t\t\t\t\t\t\t\t11.BT_Operations.txt");
		char choice[20],options[12];
		int count = 0,q_no,h;
		printf("\n\t\t\t\t\t\t\t\t\t\tWe recommend to start from the first chapter, Enter your choice : ");
		scanf("%s",choice);
		FILE* fileptr = fopen(choice,"r");
		while(fileptr == NULL){
			printf("\n\t\t\t\t\t\t\t\t\t\tInvalid File!!\n");
			printf("\n\t\t\t\t\t\t\t\t\t\t1.Arrays.txt\n\t\t\t\t\t\t\t\t\t\t2.Stacks.txt\n\t\t\t\t\t\t\t\t\t\t3.Queues.txt\n\t\t\t\t\t\t\t\t\t\t4.Linked List.txt\n\t\t\t\t\t\t\t\t\t\t5.Doubly Linked List.txt\n\t\t\t\t\t\t\t\t\t\t6.Circular Linked List\n\t\t\t\t\t\t\t\t\t\t7.Stacks_LL.txt\n\t\t\t\t\t\t\t\t\t\t8.Queues_LL.txt\n\t\t\t\t\t\t\t\t\t\t9.BinaryT_Arrays.txt\n\t\t\t\t\t\t\t\t\t\t10.BinaryT_LL.txt\n\t\t\t\t\t\t\t\t\t\t11.BT_Operations.txt");
			printf("\n\t\t\t\t\t\t\t\t\t\tPlease Enter the valid file!! : ");
			scanf("%s",choice);
		}
		char s;
		system("cls");
		while((s=fgetc(fileptr))!= EOF) {
			while((s=fgetc(fileptr))!='~'){
				printf("%c",s);
			}
			printf("\nEnter your choice : ");
			scanf(" %c",&options[count]);
			count++;
			system("cls");
			if((s=fgetc(fileptr))==EOF){
				break;
			}
		}
		printf("\nWant to clear any option? 1.yes,2.Exit");
		printf("\nEnter your choice : ");
		scanf("%d",&h);
		if(h == 1){
			printf("Enter the question number : ");
			scanf("%d",&q_no);
			printf("Enter your choice : ");
			scanf("%d",&options[q_no]);
			printf("Changed Successfully");
			//break;
		}
		else{
			printf("Invalid Input!!\n1.yes,2.no,3.Exit\nEnter the valid option!!");
		}
		printf("All your answers are saved!!");
		int ch;
		printf("\n\t\t\t\t\t\t\t\t\t\tThank you!!\n\t\t\t\t\t\t\t\t\t\tYour Responses are recorded!!\n");
		printf("\t\t\t\t\t\t\t\t\t\tWould you like to look at the results?\n");
		printf("\t\t\t\t\t\t\t\t\t\tIf yes, Enter 1 , No, Enter 2 : ");
		scanf("%d",&ch);
		if(ch == 1){
			View_Results(options,choice);
		}
		else{
			printf("\n\t\t\t\t\t\t\t\t\t\tWe respect your opinion!! Thank You!!\n");
		}
	}
	else{
		printf("\n\t\t\t\t\t\t\t\t\t\tThank You!!\n");
	}
}
void Recovery_Card(){
	system("cls");
	printf("\n\t\t\t\t\t\t\t\t\t\tRecovery Card!!\n");
}
int View_Types_OfTests(){
	system("cls");
	printf("***********************************************************************************************************************************************************************************************\n\n");
	printf("\t\t\t\t\t\t\t\t\t\tThere are two types of tests : \n\n");
	printf("\t\t\t\t\t\t\t\t\t\t1.Grand Test\n\t\t\t\t\t\t\t\t\t\t2.Chapter Test\n\n");
	printf("\t\t\t\t\t\t\t\t\t\tCode for them : 1.GT\n\t\t\t\t\t\t\t\t\t\t\t2.CT\n\n");
	printf("\t\t\t\t\t\t\t\t\t\tGrand Test has the questions from 5 or all chapters in a subject.\n\n");
	printf("\t\t\t\t\t\t\t\t\t\tChapter Test has the questions only from the selected chapter\n\n");
	printf("***********************************************************************************************************************************************************************************************\n\n");
}
int Valid_User(){
    int marks=0,val,i;
    char username[30],password[20];
    FILE *log;
    log = fopen("login.txt","r");
    if (log == NULL)
    {
        fputs("Error at opening File!", stderr);
        exit(1);
    }
    struct login l;
    printf("\n\t\t\t\t\t\t\t\t\t\tPlease Enter your login credentials below\n");
    printf("\t\t\t\t\t\t\t\t\t\tUsername:  ");
    scanf("%s",username);
    printf("\n\t\t\t\t\t\t\t\t\t\tPassword: ");
    scanf("%s",password);
    while(fread(&l,sizeof(l),1,log)){
        if(strcmp(username,l.username)==0 && strcmp(password,l.password)==0){ 
            printf("\n\t\t\t\t\t\t\t\t\t\tWelcome %s %s\n",l.fname,l.lname);
            printf("\n\t\t\t\t\t\t\t\t\t\tSuccessful Login\n");
			return 1;
		}
        else{
            return -1;
		}
	}
    fclose(log);
}
int Login_User(){
	int e = Valid_User();
	if(e == 1){
		int lu;
		system("cls");
		printf("\n\n\n\t\t\t\t\t\t\t\t\t\t  You have Logged In as User!!\n");
		printf("\t\t\t\t\t\t\t\t\t\t====================================\n");
		printf("\t\t\t\t\t\t\t\t\t\t\t1.Continue Chapter Test\n\t\t\t\t\t\t\t\t\t\t\t2.View Results\n\t\t\t\t\t\t\t\t\t\t\t3.View Types of tests\n\t\t\t\t\t\t\t\t\t\t\t4.Recovery Card\n\t\t\t\t\t\t\t\t\t\t\tEnter any othe rnumber to Exit\n");
		printf("\t\t\t\t\t\t\t\t\t\t====================================\n");
		printf("\t\t\t\t\t\t\t\t\t\t\tEnter your choice : ");
		scanf("%d",&lu);
		while(lu>=1 && lu<=4){
			if(lu == 1){
				Continue_Chap_Test();
			}
			else if(lu == 2){
				char Options[12];
				char Chap[20];
				View_Results(Options,Chap);
			}
			else if(lu == 3){
				View_Types_OfTests();
			}
			else{
				Recovery_Card();
			}
			printf("\n\n\n\t\t\t\t\t\t\t\t\t\t  You have Logged In as User!!\n");
			printf("\t\t\t\t\t\t\t\t\t\t====================================\n");
			printf("\t\t\t\t\t\t\t\t\t\t\t1.Continue Chapter Test\n\t\t\t\t\t\t\t\t\t\t\t2.View Results\n\t\t\t\t\t\t\t\t\t\t\t3.View Types of tests\n\t\t\t\t\t\t\t\t\t\t\t4.Recovery Card\n\t\t\t\t\t\t\t\t\t\t\tEnter any othe rnumber to Exit\n");
			printf("\t\t\t\t\t\t\t\t\t\t====================================\n");
			printf("\t\t\t\t\t\t\t\t\t\t\tEnter your choice : ");
			scanf("%d",&lu);
		}
		if(lu<=0 && lu>=5){
			system("cls");
			printf("\n\n\n\t\t\t\t\t\t\t\t\t\tThank you!!\n\n\n");
			return 0;
		}
	}
	else{
		while(e != 1){
			system("cls");
			printf("\n\n\t\t\t\t\t\t\t\t\t\tInvalid Details!!\n\n");
			printf("\t\t\t\t\t\t\t\t\t\tPlease enter valid details : ");
			Valid_User();
		}
	}
	return 0;
}
void View_MQ_Results(int options[]){
	int i,marks = 0;
	int Ans_ops[] = {3,4,1,1,2};
	for(i=0;i<5;i++){
		if(Ans_ops[i] == options[i]){
			marks++;
		}
	}
	printf("\n\t\t\t\t\t\t\t\t\t\tYour Marks are : %d\n",marks);
	if(marks == 0){
		printf("\t\t\t\t\t\t\t\t\t\tGood Try!! Wish you all the best for the future\n");
		printf("\t\t\t\t\t\t\t\t\t\tWe Recommend you to start from the first Chapter!!\n");
	}
	else if(marks == 1 || marks == 2){
		printf("\n\t\t\t\t\t\t\t\t\t\tDo not worry we make you the best!!");
		if(marks == 1){
			if(options[0] == Ans_ops[0]){
				printf("n\t\t\t\t\t\t\t\t\t\tWe recommend you to Start from the second chapter!!");
			}
			else{
				printf("n\t\t\t\t\t\t\t\t\t\tYou are Good at some specified Topics, Please Start from the first to be confident from all the chapters!!\n");
			}
		}
		else{
			if(options[0] == Ans_ops[0] && options[1] == Ans_ops[1]){
				printf("n\t\t\t\t\t\t\t\t\t\tYou are good at the Basics, We recommend you to start from the Third Chpater\n");
			}
			else{
				printf("n\t\t\t\t\t\t\t\t\t\tYou are Good at some specified Topics, Please Start from the first to be confident from all the chapters!!\n");
			}
		}
	}
	else if(marks == 3 || marks == 4){
		printf("\n\t\t\t\t\t\t\t\t\t\tYou are an Inch back to be called as Brilliant!! Continue Trying!!");
		if(options[0] == Ans_ops[0] && options[1] == Ans_ops[1] && options[2] == Ans_ops[2]){
			printf("\n\t\t\t\t\t\t\t\t\t\tWe Recommend you to start from 4th chapter!!\n");
		}
		else{
			printf("n\t\t\t\t\t\t\t\t\t\tYou are Good at some specified Topics, Please Start from the first to be confident from all the chapters!!\n");
		}
	}
	else{
		printf("\n\t\t\t\t\t\t\t\t\t\tCongratulations!!\n");
		printf("\n\t\t\t\t\t\t\t\t\t\twish you all the best and hope you gain something productive through these test and questions!!\n");
	}
}
void Take_A_MockQ(){
	printf("\n\t\t\t\t\t\t\t\t\t\tYou have choosen to take a mock - quiz!!\n");
	FILE* MQ_ptr = fopen("Mock_Quiz.txt","r");
	char s;
	int options[12], j = 0;
	while((s=fgetc(MQ_ptr))!=EOF) {
		while((s=fgetc(MQ_ptr))!='~'){
			printf("%c",s);
		}
		printf("\nEnter your choice : ");
		scanf("%d",&options[j]);
		printf("\n");
		j++;
		/*if((s=fgetc(MQ_ptr))=='~'){
			count++;
		}*/
	}
	int res;
	system("cls");
	printf("\n\t\t\t\t\t\t\t\t\t\tWant know the your scope?{Results}");
	printf("\n\t\t\t\t\t\t\t\t\t\tEnter 1 to know, if not Enter 2, Enter 3 to exit : ");
	scanf("%d",&res);
	while(res!=3){
		if(res == 1){
			View_MQ_Results(options);
			break;
		}
		else if(res == 2){
			printf("\n\t\t\t\t\t\t\t\t\t\tThank You for your attempt!!\n");
			break;
		}
		else{
			printf("\n\t\t\t\t\t\t\t\t\t\tInvalid Input!!\n\t\t\t\t\t\t\t\t\t\t Please Enter the valid Option! : ");
		}
		printf("\n\t\t\t\t\t\t\t\t\t\tEnter 1 to know, if not Enter 2, Enter 3 to exit : ");
		scanf("%d",&res);
	}
	//printf("*******************************************************************************");
	fclose(MQ_ptr);
}
void Register_User(){
    char firstname[15];
    FILE *log;
    log=fopen("login.txt","w");
    if (log == NULL)
    {
        fputs("Error at opening File!", stderr);
        exit(1);
    }
    struct login l;
    printf("\n\t\t\t\t\t\t\t\t\t\tYou need to enter some details for registration.\n");
    printf("\n\t\t\t\t\t\t\t\t\t\tEnter First Name:");
    scanf("%s",l.fname);
    printf("\n\t\t\t\t\t\t\t\t\t\tEnter Last Name: ");
    scanf("%s",l.lname);
    printf("\t\t\t\t\t\t\t\t\t\tThank you.\n\t\t\t\t\t\t\t\t\t\tNow please choose a username and password as credentials for system login.\n\t\t\t\t\t\t\t\t\t\tEnsure the username is no more than 30 characters long.\n\t\t\t\t\tEnsure your password is at least 8 characters long and contains lowercase, uppercase, numerical and special character values.\n"); 
    printf("\n\t\t\t\t\t\t\t\t\t\tEnter Username:");
    scanf("%s",l.username);
    printf("\n\t\t\t\t\t\t\t\t\t\tEnter Password:");
    scanf("%s",l.password);
    fwrite(&l,sizeof(l),1,log);
    fclose(log);
    printf("\n\t\t\t\t\t\t\t\t\t\tConfirming details......\n\t\t\t\t\t\t\t\t\t\tWelcome, %s!\n\n",l.fname);
    printf("\n\t\t\t\t\t\t\t\t\t\tRegistration Successful!\n");
    //printf("Press any key to continue...");
    //getchar();
	int option;
	printf("\t\t\t\t\t\t\t\t\t\tWe Recommend You to take a Mock Quiz?\n\t\t\t\t\t\t\t\t\t\tWant to write any Mock - Quiz?\n");
	printf("\t\t\t\t\t\t\t\t\t\tEnter 1 to continue, if not, Enter 2, Enter 3 to exit : ");
	scanf("%d",&option);
	while(option!=3){
		if(option == 1){
			Take_A_MockQ();
			break;
		}
		else if(option == 2){
			printf("\n\t\t\t\t\t\t\t\t\t\tWe respect your option!!\n");
			break;
		}
		else{
			printf("\n\t\t\t\t\t\t\t\t\t\tInvalid Input!!Please Enter the valid Option !\n");
		}
		printf("\t\t\t\t\t\t\t\t\t\tEnter 1 to continue, if not, Enter 2, Enter 3 to exit : ");
		scanf("%d",&option);
	}
	Login_User();
}
void Set_a_Paper(){
	system("cls");
	int op;
	printf("\t\t\t\t\t\t\t\t\t============Welcome============\n");
	printf("\t\t\t\t\t\t\t\t\t1.Want to add questions to the existing papers\n\t\t\t\t\t\t\t\t\t2.Set new paper\n\t\t\t\t\t\t\t\t\t3.Exit\n");
	printf("\t\t\t\t\t\t\t\t\tEnter your choice : ");
	scanf("%d",&op);
	while(op!=3){
		if(op == 1){
			char file_name[20],Data[1000];
			char Ans[2],Explanation[1000];
			FILE* Append_ptr = fopen("Something.txt","w");
			printf("Enter contents to store in file : \n");
			printf("Enter the Options : ");
			scanf("%s",Data);
			fgets(Data, sizeof(Data), stdin);
			fputs(Data, Append_ptr);
			fprintf(Append_ptr, "%s", Data);
			fclose(Append_ptr);
			printf("These are the existing files : \n");
			printf("1.Arrays.txt\n2.Stacks.txt\n3.Queues.txt\n4.Linked List.txt\n5.Doubly Linked List.txt\n6.Circular Linked List\n7.Stacks_LL.txt\n8.Queues_LL.txt\n9.BinaryT_Arrays.txt\n10.BinaryT_LL.txt\n11.BT_Operations.txt");
			printf("\nEnter the name of the file : ");
			scanf("%s",file_name);
			FILE* source = fopen("Something.txt","a+");
			FILE* destination = fopen(file_name,"a+");
			fprintf(destination, "\n");
			fgets(Data, sizeof(Data), source);
			fprintf(destination, "%s", Data);
			rewind(destination); 
			fclose(source);
			fclose(destination);
			printf("\nEnter the Answer : ");
			scanf("%s",Ans);
			printf("\nEnter the Explanation : ");
			scanf("%s",Explanation);
		}
		else if(op == 2){
			char ch[100], Contents[DATA_SIZE];
			printf("Please Enter the file name : ");
			scanf("%s",ch);
			Records(ch);
			FILE* fptr = fopen(ch,"w+");
			printf("Enter the contents that are to be inserted : ");
			fgets(Contents, DATA_SIZE, stdin);
			/* Write data to file */
			fputs(Contents, fptr);
			/* Close file to save file data */
			fclose(fptr);
		}
		else{
			printf("Invalid Input!! Please choose 1 through 3\n");
		}
		system("cls");
		printf("\t\t\t\t\t\t\t\t\t1.Want to add questions to the existing papers\n\t\t\t\t\t\t\t\t\t2.Set new paper\n\t\t\t\t\t\t\t\t\t3.Exit\n");
		printf("\t\t\t\t\t\t\t\t\tEnter your choice : \n");
		scanf("%d",&op);
	}

}
int View_Responses(int Options[],char Chap[]){
	system("cls");
	printf("\n\n\t\t\t\t\t\t\t\tview Responses\n");
}
int Valid_Teacher(){
    int marks=0,val,i;
    char username[30],password[20];
    FILE *log;
    log = fopen("login_T.txt","r");
    if (log == NULL)
    {
        fputs("Error at opening File!", stderr);
        exit(1);
    }
    struct login l;
    printf("\n\t\t\t\t\t\t\t\t\t\tPlease Enter your login credentials below");
    printf("\n\t\t\t\t\t\t\t\t\t\tUsername:  ");
    scanf("%s",username);
    printf("\n\t\t\t\t\t\t\t\t\t\tPassword: ");
    scanf("%s",password);
    while(fread(&l,sizeof(l),1,log)){
        if(strcmp(username,l.username)==0 && strcmp(password,l.password)==0){ 
            printf("\t\t\t\t\t\t\t\t\t\tWelcome %s %s\n",l.fname,l.lname);
            printf("\n\t\t\t\t\t\t\t\t\t\tSuccessful Login\n");
			return 1;
		}
		else{
			return -1;
		}
	}
    fclose(log);
}
void Login_Teacher(){
	int e = Valid_Teacher();
	if(e == 1){
		system("cls");
		int lt;
		printf("\n\n\t\t\t\t\t\t\t\t\t   You have logged in as Teacher!!\n");
		printf("\t\t\t\t\t\t\t\t\t======================================\n");
		printf("\t\t\t\t\t\t\t\t\t\t1.Set Paper\n\t\t\t\t\t\t\t\t\t\t2.View Responses\n\t\t\t\t\t\t\t\t\t\t3.View Types Of Tests\n\t\t\t\t\t\t\t\t\t\tEnter any other number to exit\n");
		printf("\t\t\t\t\t\t\t\t\t======================================\n");
		printf("\t\t\t\t\t\t\t\t\t\tEnter your choice : ");
		scanf("%d",&lt);
		while(lt>=1 && lt<=3){
			if(lt == 1){
				Set_a_Paper();
			}
			else if(lt == 2){
				int Options[12];
				char Chap[20];
				View_Responses(Options,Chap);
			}
			else{
				View_Types_OfTests();
			}
			printf("\n\n\t\t\t\t\t\t\t\t\t   You have logged in as Teacher!!\n");
			printf("\t\t\t\t\t\t\t\t\t======================================\n");
			printf("\t\t\t\t\t\t\t\t\t\t1.Set Paper\n\t\t\t\t\t\t\t\t\t\t2.View Responses\n\t\t\t\t\t\t\t\t\t\t3.View Types Of Tests\n\t\t\t\t\t\t\t\t\t\tEnter any other number to exit\n");
			printf("\t\t\t\t\t\t\t\t\t======================================\n");
			printf("\t\t\t\t\t\t\t\t\t\tEnter your choice : ");
			scanf("%d",&lt);
		}
		if(lt<=0 && lt>=4){
			system("cls");
			printf("\n\n\n\t\t\t\t\t\t\t\t\t\tThank you!!\n\n\n");
		}
	}
	else{
		while(e != 1){
			system("cls");
			printf("\n\n\t\t\t\t\t\t\t\t\t\tInvalid Details!!\n\n");
			printf("\t\t\t\t\t\t\t\t\t\tPlease enter valid details : ");
			Valid_Teacher();
		}
	}
}
int Register_Teacher(){
    char firstname[15];
    FILE *log;
    log=fopen("login_T.txt","a");
	system("cls");
    if (log == NULL)
    {
        fputs("Error at opening File!", stderr);
        exit(1);
    }
    struct login l;
    printf("\n\t\t\t\t\t\t\t\t\t\tYou need to enter some details for registration.\n");
    printf("\n\t\t\t\t\t\t\t\t\t\tEnter First Name : ");
    scanf("%s",l.fname);
    printf("\n\t\t\t\t\t\t\t\t\t\tEnter Last Name : ");
    scanf("%s", l.lname);
    printf("\n\t\t\t\t\t\t\t\t\t\tThank you.\n\t\t\t\t\t\t\t\t\t\tNow please choose a username and password as credentials for system login.\n\t\t\t\t\t\t\t\t\t\tEnsure the username is no more than 30 characters long.\n\t\t\t\t\t\tEnsure your password is at least 8 characters long and contains lowercase, uppercase, numerical and special character values.\n"); 
    printf("\n\t\t\t\t\t\t\t\t\t\tEnter Username : ");
    scanf("%s",l.username);
    printf("\n\t\t\t\t\t\t\t\t\t\tEnter Password : ");
    scanf("%s",l.password);
    fwrite(&l,sizeof(l),1,log);
    fclose(log);
	system("cls");
    printf("\n\t\t\t\t\t\t\t\t\t\tConfirming details......\n\t\t\t\t\t\t\t\t\t\tWelcome, %s!\n\n",l.fname);
    printf("\n\t\t\t\t\t\t\t\t\t\tRegistration Successful!\n");
    Login_Teacher();
	return 0;
}
int main(){
	int ch,c;
	char a[25];
	system("cls");
	printf("\n\n\n\t\t\t\t\t\t\t\t====================Welcome====================\n\n");
	printf("\t\t\t\t\t\t\t\t\tLogin as : \n");
	printf("\t\t\t\t\t\t\t\t\t\t1.Teacher\n\t\t\t\t\t\t\t\t\t\t2.User\n\t\t\t\t\t\t\t\t\t\t3.Event Manager\n\t\t\t\t\t\t\t\t\t\tEnter any other number to Exit\n");
	printf("\n\t\t\t\t\t\t\t\t===============================================\n");
	printf("\t\t\t\t\t\t\t\t\tEnter your choice : ");
	scanf("%d",&ch);
	if(ch == 1){
		system("cls");
		printf("\n\n\n\t\t\t\t\t\t\t\t\t\tYou want to login/register as Teacher\n");
		printf("\t\t\t\t\t\t\t\t\t==================================================\n");
		printf("\t\t\t\t\t\t\t\t\t\t1.Have an account? Then, Login\n\t\t\t\t\t\t\t\t\t\t2.New to this? Then, Register\n\t\t\t\t\t\t\t\t\t\tEnter any other number to Exit");
		printf("\n\t\t\t\t\t\t\t\t\t==================================================\n");
		printf("\t\t\t\t\t\t\t\t\t\tEnter your choice : ");
		scanf("%d",&c);
		if(c == 1){
			Login_Teacher();
		}
		else if(c == 2){
			Register_Teacher();
		}
		else{
			return 0;
		}
	}
	else if(ch == 2){
		system("cls");
		printf("\n\n\n\t\t\t\t\t\t\t\t\t\tYou want to login/register as User\n");
		printf("\t\t\t\t\t\t\t\t\t==================================================\n");
		printf("\t\t\t\t\t\t\t\t\t\t1.Have an account? Then, Login\n\t\t\t\t\t\t\t\t\t\t2.New to this? Then, Register\n\t\t\t\t\t\t\t\t\t\tEnter any other number to Exit");
		printf("\n\t\t\t\t\t\t\t\t\t==================================================\n");
		printf("\t\t\t\t\t\t\t\t\t\tEnter your choice : ");
		scanf("%d",&c);
		if(c == 1){
			Login_User();
		}
		else if(c == 2){
			Register_User();
		}
		else{
		       return 0;
		}
	}
	else if(ch == 3){
	    system("cls");
		int i,j=0; 
		char p[20]={'T','e','a','m','_','2','8'},password[20],ch;
		printf("\t\t\t\t\t\t\t\t\tEnter password : ");
		scanf("%s",password);
		if(!strcmp(password,p)){
			Event_Manager();
		}
		else{
			system("cls");
			while(strcmp(password,p)){
				printf("\n\n\n\t\t\t\t\t\t\t\t\tInvalid Password!!\n");
				printf("\t\t\t\t\t\t\t\t\tEnter your password again : ");
				scanf("%s",password);
			}
			if(!strcmp(password,p)){
					Event_Manager();
			}
		}
	}
	else{
		system("cls");
		printf("\n\n\n\t\t\t\t\t\t\t\t\t\tThank you!!\n\n\n");
		return 0;
	}
	return 0;
}