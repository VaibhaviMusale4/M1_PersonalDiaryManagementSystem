#include "header.h"
int main()
{
	login();
    time_t t;
	time(&t);
    int ch;
    printf("\n\n\t:::::::::::::::::::::::::::::::::::\n");
    printf("\t:PERSONAL DIARY MANAGEMENT SYSTEM:\n");
    printf("\t:::::::::::::::::::::::::::::::::::");
    while(1)
    {
        printf("\n\n\t\t:MAIN MENU:");
        printf("\n\n\tPress <1> To ADD RECORD\t");
        printf("\n\tPress <2> To VIEW RECORDS\t");
        printf("\n\tPress <3> To EDIT RECORDS\t");
        printf("\n\tPress <4> To DELETE RECORD\t");
        printf("\n\tPress <5> To EDIT PASSWORD\t");
        printf("\n\tPress <6> To EXIT\t\t");   
        printf("\n\n\tCurrent date and time : %s",ctime(&t));
        printf("\n\n\tENTER YOUR CHOICE:");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            addrecord();
            break;
        case 2:
            viewrecord();
            break;
        case 3:
            editrecord();
            break;
        case 4:
            deleterecord();
            break;
        case 5:
            editpassword();
            break;
        case 6:
            printf("\n\n\t\tTHANK YOU FOR USING THE SOFTWARE ");
            getch();
            exit(0);
        default:
            printf("\nYOU ENTERED WRONG CHOICE..");
            printf("\nPRESS ANY KEY TO TRY AGAIN");
            getch();
            break;
        }
        system("cls");
    }
    return 0;
}