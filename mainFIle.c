#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<conio.h>
#include<string.h>
void student();
void mentor();
void list();
void prabha();
void gotoxy();
void gotoxy(int x, int y)
{
COORD c;
c.X = x;
c.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}

int main()
{
	ug:
	gotoxy(49, 3);
	printf("WELCOME!!!");
	gotoxy(40,6);
	printf("----------********----------");
	gotoxy(47,8);
	printf("DEVELOPERS:");
	gotoxy(20,10);
	printf("@_KK\t@_LOHEITH\t@_MADAN S\t@_MADAN KK");
	gotoxy(0,13);
	
		printf("1.Student\t2.Mentor \t>>>");
		int c;
		scanf("%d",&c);
	switch(c){
	
	case 1: student();
			int x;
			scanf("%d",&x);
			if(x==0){
			system("cls");
			goto ug;
			}else{
				break;
			}break;
	case 2:
		mentor();
		printf("\n\n---Press(0)_for_Back---");
		int y;
		scanf("%d",&y);
		if(y==0){
		system("cls");
		goto ug;
		}else{
		break;
		}break;
	}

	return 0;
}

//student function;
void student(){
	
		char a[20];
	
		int i;
		char roll[]="22cs074",lo[]="22cs079";
	 	int pass,pword=632005,loh=582005;
		printf("\nRoll no:");
		scanf("%s",&a);
		
	if(a[0]==roll[0] && a[1]==roll[1] && a[2]==roll[2] && a[3]==roll[3] && a[4]==roll[4] && a[5]==roll[5] && a[6]==roll[6])
	{
	printf("\nPassword:");
	scanf("%d",&pass);
	if(pass==pword)
	{
	printf("\nStudent Name :kishore kumar s\tPhone:9043479026\tD.O.B:06/03/2005\nFather's Name: P Santhanam\tMother's Name: S Lakshmi\tNative :Madurai");
	printf("\nBack>>>(0) :");
	
	}else{
		printf("password does not match");
	}
	}

	else if(a[0]==lo[0] && a[1]==lo[1] && a[2]==lo[2] && a[3]==lo[3] && a[4]==lo[4] && a[5]==lo[5] && a[6]==lo[6])
	{
	printf("\nPassword:");
	scanf("%d",&pass);
	if(pass==loh)
	{
	printf("\nStudent Name :Lohieth\tPhone:9043479026\tD.O.B:06/03/2005\nFather's Name: Rangasamy B\tNative :Namakal");
	printf("\nBack>>>(0) :");
	
	}else{
		printf("password does not match");
	}
	}	else{
		printf("Roll Not found");
	}
}

void mentor()
{	system("cls");
	int v;
	void prabha();
	int pin,pr=0000,jan=1111,nithin=2222;
	men:
	printf("\n1.PRABHAKARAN\t2.JANAGI\t3.NITHINRAULT \t4.BACK>>>>");
	scanf("%d",&v);
	switch(v){
		case 1:system("cls");
		on:
			printf("\n\n>>>Prabhakaran<<<");
			printf("\n\nPassword:");
				scanf("%d",&pin);
				if(pin==pr){
				system("cls");
			int q;
			void list(),menties();
			printf("\n1.Students Data \t2.Menties \t3.back\t>>>");
			scanf("%d",&q);
			
			switch(q){
				case 1: printf("\n>>>Total Students:53\n>>>International Students:6\n\n");list();break;
				case 2: menties();break;
				case 3:
				printf("Press(0):");
				 int c;
				scanf("%d",&c);
				if(c==0){
					system("cls");
					goto men;
					}else{
					break;
						}
					}
				}else{printf("Wrong Pass");
				system("cls");
					goto on;
	};break;
		case 2:system("cls");
		no:
			printf("\n\n>>>Janagi<<<");
			printf("\n\nPassword:");
				scanf("%d",&pin);
	if(pin==jan){
				system("cls");
			int q;
			void list(),janmen();
			printf("\n1.Students Data \t2.Menties \t3.back\t>>>");
			scanf("%d",&q);
			
			switch(q){
				case 1: printf("\n>>>Total Students:53\n>>>International Students:6\n\n");list();break;
				case 2: janmen();break;
				case 3:
				printf("Press(0):");
				 int c;
				scanf("%d",&c);
				if(c==0){
					system("cls");
					goto men;
					}else{
					break;
						}
					}
	}else{printf("Wrong Pass");
				system("cls");
					goto no;
	};
	break;
			
		case 3:system("cls");
		
			nv:
			printf("\n\n>>>NithinRault<<<");
			printf("\n\nPassword:");
				scanf("%d",&pin);
	if(pin==nithin){
				system("cls");
			int q;
			void list(),nith();
			printf("\n1.Students Data \t2.Menties \t3.back\t>>>");
			scanf("%d",&q);
			
			switch(q){
				case 1: printf("\n>>>Total Students:53\n>>>International Students:6\n\n");list();break;
				case 2: nith();break;
				case 3:
				printf("Press(0):");
				 int c;
				scanf("%d",&c);
				if(c==0){
					system("cls");
					goto men;
					}else{
					break;
						}
					}
	}else{printf("Wrong Pass");
				system("cls");
					goto nv;
	};
		
		
		break;
		case 4:break;
	}

}


//List of CSE-B
void list()
{ system("cls");
	void om(),jan(),jas(),jay();
	FILE * file=fopen("cseb.txt","r");
	if(file!=NULL){
	char no;
	while ((no=fgetc(file))!=EOF)
			putchar(no);
			fclose(file);
			printf("\n\nSelect By their No:");
			int d;
			scanf("%d",&d);
			switch(d){
			case 1:om();break;
			case 2:jan();break;
			case 3:jas();break;  
			case 4:jay();break;
			}
}
}
void menties()
{system("cls");
void jit(),kar(),mou(),kat(),mat();
	FILE * menti=fopen("CaptainMenti.txt","r");
 	if(menti!=NULL){
	char no;
	while ((no=fgetc(menti))!=EOF)
	putchar(no);
	fclose(menti);
	int d;
	printf("\nSELECT BY THEIR NUM:");
	scanf("%d",&d);
	switch(d){
	case 1: jit();break;
	case 2:kar();break;
	case 3:mou();break;
	case 4:kat();break;
	case 5:mat();break;}
	
}}
void janmen()
{system("cls");
void shon(),ks(),kis();
	FILE * menti=fopen("janMen.txt","r");
 	if(menti!=NULL){
	char no;
	while ((no=fgetc(menti))!=EOF)
	putchar(no);
	fclose(menti);
	int d;
	printf("\nSELECT BY THEIR NUM:");
	scanf("%d",&d);
	switch(d){
	case 1: kis();break;
	case 2:ks();break;
	case 3:shon();break;
}
	
}}

void nith()
{system("cls");
void lo(),karthick(),nivash();
	FILE * menti=fopen("nithin.txt","r");
 	if(menti!=NULL){
	char no;
	while ((no=fgetc(menti))!=EOF)
	putchar(no);
	fclose(menti);
	int d;
	printf("\nSELECT BY THEIR NUM:");
	scanf("%d",&d);
	switch(d){
	case 1: lo();break;
	case 2:karthick();break;
	case 3:nivash();break;
}
	
}}

//Students details Function;
void om()
{system("cls");
	printf("\nName : Omar \tClass: CSE-B\n\tBack(1):");
}

void jan(){system("cls");
	printf("\nName: Janika \tClass: CSE-B");
}

void jas(){system("cls");
	printf("\nName: Jasmitha \tClass: CSE-B");
}
void jay()
{system("cls");
	printf("\nName: Jayanth \tClass: CSE-B");
}

void jit(){
	system("cls");
	printf("\nName: JITHU KRISHNA \tClass: CSE-B");
}
void kar(){
	system("cls");
	printf("\nName: KARTHIK GT \tClass: CSE-B");
}

void mou()
{
	system("cls");
	printf("\nName: MOUNIESH \tClass: CSE-B");
}
void kat(){
	system("cls");
	printf("\nName: KATHIR KARTHIK \tClass: CSE-B");
}

void mat()
{
	system("cls");
	printf("\nName: MATHESHWARAN \tClass: CSE-B");
}
void ks()
{
	system("cls");
	printf("\nName: KISHORE KUMAR KS \tClass: CSE-B");
}
void shon()
{
	system("cls");
	printf("\nName: KISHON P \tClass: CSE-B");
}
void kis()
{
	system("cls");
	printf("\nName: KISHORE KUMAR S \tClass: CSE-B");
}
void lo()
{
	system("cls");
	printf("\nName: LOHIETH \tClass: CSE-B");
}
void karthick()
{
	system("cls");
	printf("\nName: KARTHICK S \tClass: CSE-B");
}
void nivash()
{
	system("cls");
	printf("\nName: NIVASH \tClass: CSE-B");
}
