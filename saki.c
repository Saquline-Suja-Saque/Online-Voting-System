#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>

typedef struct voter_information
{
    char id[10];
    char name[20];
    char birth_date[15];
    char father_name[20];
    char mother_name[20];
    struct voter_information *next;
} node;

node *head;

int cunt1=0,cunt2=0,cunt3=0,cunt4=0,cunt5=0;

int main()
{

    system("cls");

    printf("\n\n\n");
    printf("\t                     - - - - - - WELCOME TO ONLINE VOTING SYSTEM - - - - - -\n\n");
    Sleep(1000);
    printf("\t                   - - - - - - *********************************** - - - - - -\n\n");
    Sleep(1000);
    printf("\t- - - - - This is the easiest way to vote your favourite candidate without waisting your time - - - - -\n\n\n\n\n\n\n\n");
    Sleep(1000);
    printf("\t              - - - - - - Please Enter One(1) For Logging Vote Main Loges - - - - - -\n\n");
    int B;
    scanf("%d",&B);
    if(B==1)
    {
        main_loges();
    }


    return 0;
}



void main_loges()
{
    system("cls");

    printf("\n\n\n");
    printf("\t||||||||------------------------------ 1. FOR VOTE ENTRY   ---------------------------------||||||||\n");
    Sleep(300);
    printf("\t||||||||------------------------------ 2. FOR ADMIN PANEL  ---------------------------------||||||||\n");
    Sleep(300);
    printf("\t||||||||------------------------------ 3. FOR WINNER       ---------------------------------||||||||\n");
    Sleep(300);
    printf("\t||||||||------------------------------ 4. FOR EXIT         ---------------------------------||||||||\n\n\n");
    printf("\t  - - - - - - - After Voter Entry You Can Give Your Vote Otherwise You Can Not - - - - - - - \n\n\n");
    Sleep(300);
    printf("\t    - - - - - ******* - - - - - - -So Please Enter(1)- - - - - - - ******* - - - - - - - -   \n\n\n");
    int T;
    scanf("%d",&T);
    if(T==1)
    {
        voter_insert();
    }
    if(T==2)
    {
        admin();
    }
    if(T==3)
    {
        winner();
    }
    if(T==4)
    {
        exi();
    }

}


int cunt=0,count=0,R=3;

void voter_insert()
{
    node *temp;

    char name[25],birth_date[15],f_name[25],m_name[25],id[10];
    system("cls");
    printf("\n\n\n");
    printf("\tif your NATIONAL ID ,NAME, BIRTH DATE,FATHER NAME AND MOTHER NAME MATCH you can give VOTE otherwise NOT\n\n");
    Sleep(300);
    printf("\t\t\tif you DO WRONG (%d) times, the programme will stop automatically\n\n\n",R);
    Sleep(300);
    printf("\t\tPLEASE---\n\n");
    Sleep(300);
    printf("\t\t ENTER YOUR NATIONAL ID NUMBER  ");
    gets(id);
    gets(id);
    printf("\t\t ENTER YOUR NAME                ");
    gets(name);
    printf("\t\t ENTER YOUR BIRTH DATE          ");
    gets(birth_date);
    printf("\t\t ENTER YOUR FATHER NAME         ");
    gets(f_name);
    printf("\t\t ENTER YOUR MOTHER NAME         ");
    gets(m_name);
    temp=(node *)malloc (sizeof(node));
    strcpy(temp->id,id);
    strcpy(temp->name,name);
    strcpy(temp->birth_date,birth_date);
    strcpy(temp->father_name,f_name);
    strcpy(temp->mother_name,m_name);
    temp->next=NULL;
    head=temp;
    while(temp!=NULL)
    {
        if((strcmp(temp->id,"1111")==0 && strcmp(temp->name,"Saki")==0 && strcmp(temp->birth_date,"1999")==0 && strcmp(temp->father_name,"Sujat")==0 && strcmp(temp->mother_name,"Aysha")==0)||
           (strcmp(temp->id,"2222")==0 && strcmp(temp->name,"Sabbir")==0 && strcmp(temp->birth_date,"1999")==0 && strcmp(temp->father_name,"Abulkhair")==0 && strcmp(temp->mother_name,"Rekha")==0)||
           (strcmp(temp->id,"3333")==0 && strcmp(temp->name,"Ramjan")==0 && strcmp(temp->birth_date,"1999")==0 && strcmp(temp->father_name,"Salamot")==0 && strcmp(temp->mother_name,"Johra")==0)||
           (strcmp(temp->id,"4444")==0 && strcmp(temp->name,"Rakibul")==0 && strcmp(temp->birth_date,"1999")==0 && strcmp(temp->father_name,"Isharul")==0 && strcmp(temp->mother_name,"Fatema")==0)||
           (strcmp(temp->id,"5555")==0 && strcmp(temp->name,"Mostafizur")==0 && strcmp(temp->birth_date,"1999")==0 && strcmp(temp->father_name,"Shofiqul")==0 && strcmp(temp->mother_name,"Hasina")==0)   )

              {
                cunt++;
                if(cunt>100)
                {
                    not_again();
                    break;
                }
                voting();
                }
                else
                {
                R--;
                count++;
                if(count==3)
                {
                    stop();
                    break;
                }
            printf("\n\n\n\n");
            printf("\t\tyour voter id or name or date of birth or fathers name or mothers name is wrong\n\n");
            Sleep(300);
            printf("\t\t\t\t\tplease re enter\n\n");
            Sleep(300);
            system("pause");
            main_loges();
        }
        temp=temp->next;
    }
}




void voting()
{
   system("cls");
   printf("\n\n\n\n");
   printf("\t\t *******************list of the candidates*****************\n\n\n");
   Sleep(300);
   printf("\t\t   Name------------------------------------------ Symbol\n\n\n");
   Sleep(300);
   printf("\t\t 1. Sheikh Hasina ---------------------------------1. Boat\n\n\n");
   Sleep(300);
   printf("\t\t 2. Khaleda zia------------------------------------2. paddy\n\n\n");
   Sleep(300);
   printf("\t\t 3. Shajeeb wajed joy------------------------------3. jackfruit\n\n\n");
   Sleep(300);
   printf("\t\t 4. Tarek Rahman-----------------------------------4. mango\n\n\n");
   Sleep(300);
   printf("\t\t 5. Arshad ali-------------------------------------5. langol\n\n\n");


   int B,j;
   printf("\t\t\t Please--,\n");
   printf("\t\t\t Enter Your Choice      ");
   for(j=1;j<=1;j++)
   {
       scanf("%d",&B);

       if(B==1)
       {
           cunt1++;
       }
       if(B==2)
       {
           cunt2++;
       }
       if(B==3)
       {
           cunt3++;
       }
       if(B==4)
       {
           cunt4++;
       }
       if(B==5)
       {
           cunt5++;
       }
       if(B!=1 && B!=2 && B!=3 && B!=4 && B!=5)
       {
           printf("\t\t\t Your Vote is Invalid\n");
           main_loges();
       }
   }
   int R;
   system("cls");
   printf("\n\n\n\n");

   printf("\t\t\t If You Want To See Present Winner Enter One(1) \n\n\n\t\t\t\t\t\tOR\n\n\n\t\t\t\t\tZero(0) For Main Loges\n\n\n");
   scanf("%d",&R);
   if(R==1)
   {
       winner();
   }
   if(R!=1)
   {
       main_loges();
   }
}



void admin()
{
    int B;
    printf("\n\n\n\n");
    printf("\t\t\tEnter password to admin panel\n\n");
    scanf("%d",&B);
    if(B==12345)
    {
       show();
    }
    else
    {
       printf("Wrong Password\n");
    }
}



void show()
{
    system("cls");

    printf("\n\n\n");
    printf("\t\t\t     How many votes who Get\n\n\n\n\n");
    Sleep(500);
    printf("\t\t\t Seikh Hasina got (***%d***) votes\n\n",cunt1);
    Sleep(500);
    printf("\t\t\t Khaleda Zia  got (***%d***) votes\n\n",cunt2);
    Sleep(500);
    printf("\t\t\t Sajib joy    got (***%d***) votes\n\n",cunt3);
    Sleep(500);
    printf("\t\t\t Tarek Rahman got (***%d***) votes\n\n",cunt4);
    Sleep(500);
    printf("\t\t\t Mr. Arsad    got (***%d***) votes\n\n",cunt5);
    Sleep(500);

    int R;
    printf("\n\n\n\t\t\t    Enter one(1) for main loges \n\n\t\t\t\t\tOR\n\n \t\t\t\tZero(0) For Exits\n");
    scanf("%d",&R);
    if(R==1)
    {
       main_loges();
    }
    else
    {
       exi();
    }
}



void winner()
{
    system("cls");

    printf("\n\n\n\n");
    if(cunt2<cunt1 && cunt3<cunt1 && cunt4<cunt1 && cunt5<cunt1)
    printf("\t The present Winner is (***SEIKH HASINA***) and she got (***%d***) votes\n\n\n\n\n",cunt1);

    if(cunt1<cunt2 && cunt3<cunt2 && cunt4<cunt2 && cunt5<cunt2)
    printf("\t The present Winner is (***KHALEDA ZIA***) and she got (***%d***) votes\n\n\n\n\n",cunt2);

    if(cunt1<cunt3 && cunt2<cunt3 && cunt4<cunt3 && cunt5<cunt3)
    printf("\t The present Winner is (***SHAZIB JOY***) and he got (***%d***) votes\n\n\n\n\n",cunt3);

    if(cunt1<cunt4 && cunt2<cunt4 && cunt3<cunt4 && cunt5<cunt4)
    printf("\t The present Winner is (***TAREK RAHMAN***) and he got (***%d***) votes\n\n\n\n\n",cunt4);

    if(cunt1<cunt5 && cunt2<cunt5 && cunt3<cunt5 && cunt4<cunt5)
    printf("\t The present Winner is (***MR. ERSHAD***) and he got (***%d***) votes\n\n\n\n\n",cunt5);

    int T;
    printf("\t\t\tEnter one(1) for main menu loges OR\n\n\n \t\t\t\tZero(0) For Exits\n");
    scanf("%d",&T);
    if(T==1)
    {
       main_loges();
    }
    else
    {
       exi();
    }
}



void stop()
{
    system("cls");

    printf("\n\n\n");
    printf("\t- - - - - - - (:-SORRY YOU CAN NOT GIVE YOUR VOTE FOR YOUR WRONG ENTRY THREE(3) TIMES -:) - - - - - - -\n\n\n");
    Sleep(500);
    printf("\t\t\t * * * * * ~~~ PLEASE TRY AGAIN AFTER A FEW MOMENTS  ~~~ * * * * *\n\n\n");
    Sleep(500);
    printf("\t\t\t * * * * * ~~~ THANK YOU  ~~~ * * * * *\n\n\n");
    Sleep(500);
}



void not_again()
{
    system("cls");

    printf("\n\n\n");
    printf("\t\t - - - - - - - - - - YOU HAVE GIVE YOUR VOTE SUCCESSFULLY - - - - - - - - - -\n\n");
    Sleep(300);
    printf("\t\t\t - - - - - If you want to see present winner Enter (1) OR\n\n\n \t\t\t\ttwo(2) For main logs- - - - -\n\n\n");
    Sleep(300);
    printf("\t\t - - - - - - - - - - Zero(0) for Exit - - - - - - - - - -\n\n");
    Sleep(300);

    scanf("%d",&R);
    if(R==1)
    {
       winner();
    }
    if(R==2)
    {
       main_loges();
    }
    else
    {
       exi();
    }
}



void exi()
{
    system("cls");

    printf("\n\n\n");
    printf("\t\t\t - - - - - You have give your vote successfully- - - - -\n\n\n");
    Sleep(300);
    printf("\t\t\t    - - - - - - - - - - THANK YOU - - - - - - - - - -\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    Sleep(1000);
}

