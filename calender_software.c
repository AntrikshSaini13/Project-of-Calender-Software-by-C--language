#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void calender(int);
int main(){
    int year;
    printf("Enter the  year plz\n");
    scanf("%d",&year);
    calender(year);

}
void calender(int year)
{
    system("cls");
    // clrscr();
    int month,day,row,col,sum;
    system("cls");
    printf("\tCalender of %d\n\n",year);

    // check here century or non - century 
    if(year % 100)
    {
        //non-century 
            for(month = 1; month <= 12; month++)
            {
            // check here leap year or non - leap year
                if(month == 1)
                {
                    sum = 0;
                    printf("\t  January %d\n",year);
                    for(row=1;row<=5;row++){
                            for(col=1;col<=7;col++){
                                day = 1;
                                sum = sum + day;
                                if(sum<=31)
                                {   
                                    printf("%4d",sum);
                                }
                                else{
                                    printf(" ");
                                }
                            }
                            printf("\n");
                        }
                }
                if(month == 2)
                {
                    sum = 0;
                    printf("\t  Febarury %d\n",year);
                    if(year % 4)
                    {
                        // non-leap year
                        for(row=1;row<=5;row++){
                            for(col=1;col<=7;col++){
                                day = 1;
                                sum = sum + day;
                                if(sum<=28)
                                {   
                                    printf("%4d",sum);
                                }
                                else{
                                    printf(" ");
                                }
                            }
                            printf("\n");
                        }
                    }
                    else
                    {
                        // leap year
                        for(row=1;row<=5;row++){
                            for(col=1;col<=7;col++){
                                day = 1;
                                sum = sum + day;
                                if(sum<=29)
                                {   
                                    printf("%4d",sum);
                                }
                                else{
                                    printf(" ");
                                }
                            }
                            printf("\n");
                        }
                    }
                }
                if(month == 3)
                {
                    sum = 0;
                    printf("\t   March %d\n",year);
                    for(row=1;row<=5;row++){
                            for(col=1;col<=7;col++){
                                day = 1;
                                sum = sum + day;
                                if(sum<=31)
                                {   
                                    printf("%4d",sum);
                                }
                                else{
                                    printf(" ");
                                }
                            }
                            printf("\n");
                        }
                }
                if(month == 4)
                {
                    sum = 0;
                    printf("\t   April %d\n",year);
                    for(row=1;row<=5;row++){
                            for(col=1;col<=7;col++){
                                day = 1;
                                sum = sum + day;
                                if(sum<=30)
                                {   
                                    printf("%4d",sum);
                                }
                                else{
                                    printf(" ");
                                }
                            }
                            printf("\n");
                        }
                }
                if(month == 5)
                {
                    sum = 0;
                    printf("\t    May %d\n",year);
                    for(row=1;row<=5;row++){
                            for(col=1;col<=7;col++){
                                day = 1;
                                sum = sum + day;
                                if(sum<=31)
                                {   
                                    printf("%4d",sum);
                                }
                                else{
                                    printf(" ");
                                }
                            }
                            printf("\n");
                        }
                }
                if(month == 6)
                {
                    sum = 0;
                    printf("\t   June %d\n",year);
                    for(row=1;row<=5;row++){
                            for(col=1;col<=7;col++){
                                day = 1;
                                sum = sum + day;
                                if(sum<=30)
                                {   
                                    printf("%4d",sum);
                                }
                                else{
                                    printf(" ");
                                }
                            }
                            printf("\n");
                        }
                }
                if(month == 7)
                {
                    sum = 0;
                    printf("\t   July %d\n",year);
                    for(row=1;row<=5;row++){
                            for(col=1;col<=7;col++){
                                day = 1;
                                sum = sum + day;
                                if(sum<=31)
                                {   
                                    printf("%4d",sum);
                                }
                                else{
                                    printf(" ");
                                }
                            }
                            printf("\n");
                        }
                }
                if(month == 8)
                {
                    sum = 0;
                    printf("\t Auguset %d\n",year);
                    for(row=1;row<=5;row++){
                            for(col=1;col<=7;col++){
                                day = 1;
                                sum = sum + day;
                                if(sum<=31)
                                {   
                                    printf("%4d",sum);
                                }
                                else{
                                    printf(" ");
                                }
                            }
                            printf("\n");
                        }
                }
                if(month == 9)
                {
                    sum = 0;
                    printf("\tSeptember %d\n",year);
                    for(row=1;row<=5;row++){
                            for(col=1;col<=7;col++){
                                day = 1;
                                sum = sum + day;
                                if(sum<=30)
                                {   
                                    printf("%4d",sum);
                                }
                                else{
                                    printf(" ");
                                }
                            }
                            printf("\n");
                        }
                }
                if(month == 10)
                {
                    sum = 0;
                    printf("\t  October %d\n",year);
                    for(row=1;row<=5;row++){
                            for(col=1;col<=7;col++){
                                day = 1;
                                sum = sum + day;
                                if(sum<=31)
                                {   
                                    printf("%4d",sum);
                                }
                                else{
                                    printf(" ");
                                }
                            }
                            printf("\n");
                        }
                }
                if(month == 11)
                {
                    sum = 0;
                    printf("\t November %d\n",year);
                    for(row=1;row<=5;row++){
                            for(col=1;col<=7;col++){
                                day = 1;
                                sum = sum + day;
                                if(sum<=30)
                                {   
                                    printf("%4d",sum);
                                }
                                else{
                                    printf(" ");
                                }
                            }
                            printf("\n");
                        }
                }
                if(month == 12)
                {
                    sum = 0;
                    printf("\t December %d\n",year);
                    for(row=1;row<=5;row++){
                            for(col=1;col<=7;col++){
                                day = 1;
                                sum = sum + day;
                                if(sum<=31)
                                {   
                                    printf("%4d",sum);
                                }
                                else{
                                    printf(" ");
                                }
                            }
                            printf("\n");
                        }
                }
            }
    }   
    else
    {
            // century
            for(month = 1; month <= 12; month++)
            {
            // check here leap year or non - leap year
                if(month == 1)
                {
                    sum = 0;
                    printf("\t  January %d\n",year);
                    for(row=1;row<=5;row++){
                            for(col=1;col<=7;col++){
                                day = 1;
                                sum = sum + day;
                                if(sum<=31)
                                {   
                                    printf("%4d",sum);
                                }
                                else{
                                    printf(" ");
                                }
                            }
                            printf("\n");
                        }
                }
                if(month == 2)
                {
                    sum = 0;
                    printf("\t  February %d\n",year);
                    if(year % 400)
                    {
                        // non-leap year
                        for(row=1;row<=5;row++){
                            for(col=1;col<=7;col++){
                                day = 1;
                                sum = sum + day;
                                if(sum<=28)
                                {   
                                    printf("%4d",sum);
                                }
                                else{
                                    printf(" ");
                                }
                            }
                            printf("\n");
                        }
                    }
                    else
                    {
                        // leap year
                        for(row=1;row<=5;row++){
                            for(col=1;col<=7;col++){
                                day = 1;
                                sum = sum + day;
                                if(sum<=29)
                                {   
                                    printf("%4d",sum);
                                }
                                else{
                                    printf(" ");
                                }
                            }
                            printf("\n");
                        }
                    }
                } 
                if(month == 3)
                {
                    sum = 0;
                    printf("\t   March %d\n",year);
                    for(row=1;row<=5;row++){
                            for(col=1;col<=7;col++){
                                day = 1;
                                sum = sum + day;
                                if(sum<=31)
                                {   
                                    printf("%4d",sum);
                                }
                                else{
                                    printf(" ");
                                }
                            }
                            printf("\n");
                        }
                }
                if(month == 4)
                {
                    sum = 0;
                    printf("\t   April %d\n",year);
                    for(row=1;row<=5;row++){
                            for(col=1;col<=7;col++){
                                day = 1;
                                sum = sum + day;
                                if(sum<=30)
                                {   
                                    printf("%4d",sum);
                                }
                                else{
                                    printf(" ");
                                }
                            }
                            printf("\n");
                        }
                }
                if(month == 5)
                {
                    sum = 0;
                    printf("\t    May %d\n",year);
                    for(row=1;row<=5;row++){
                            for(col=1;col<=7;col++){
                                day = 1;
                                sum = sum + day;
                                if(sum<=31)
                                {   
                                    printf("%4d",sum);
                                }
                                else{
                                    printf(" ");
                                }
                            }
                            printf("\n");
                        }
                }
                if(month == 6)
                {
                    sum = 0;
                    printf("\t   June %d\n",year);
                    for(row=1;row<=5;row++){
                            for(col=1;col<=7;col++){
                                day = 1;
                                sum = sum + day;
                                if(sum<=30)
                                {   
                                    printf("%4d",sum);
                                }
                                else{
                                    printf(" ");
                                }
                            }
                            printf("\n");
                        }
                }
                if(month == 7)
                {
                    sum = 0;
                    printf("\t   July %d\n",year);
                    for(row=1;row<=5;row++){
                            for(col=1;col<=7;col++){
                                day = 1;
                                sum = sum + day;
                                if(sum<=31)
                                {   
                                    printf("%4d",sum);
                                }
                                else{
                                    printf(" ");
                                }
                            }
                            printf("\n");
                        }
                }
                if(month == 8)
                {
                    sum = 0;
                    printf("\t Auguset %d\n",year);
                    for(row=1;row<=5;row++){
                            for(col=1;col<=7;col++){
                                day = 1;
                                sum = sum + day;
                                if(sum<=31)
                                {   
                                    printf("%4d",sum);
                                }
                                else{
                                    printf(" ");
                                }
                            }
                            printf("\n");
                        }
                }
                if(month == 9)
                {
                    sum = 0;
                    printf("\tSeptember %d\n",year);
                    for(row=1;row<=5;row++){
                            for(col=1;col<=7;col++){
                                day = 1;
                                sum = sum + day;
                                if(sum<=30)
                                {   
                                    printf("%4d",sum);
                                }
                                else{
                                    printf(" ");
                                }
                            }
                            printf("\n");
                        }
                }
                if(month == 10)
                {
                    sum = 0;
                    printf("\t  October %d\n",year);
                    for(row=1;row<=5;row++){
                            for(col=1;col<=7;col++){
                                day = 1;
                                sum = sum + day;
                                if(sum<=31)
                                {   
                                    printf("%4d",sum);
                                }
                                else{
                                    printf(" ");
                                }
                            }
                            printf("\n");
                        }
                }
                if(month == 11)
                {
                    sum = 0;
                    printf("\t November %d\n",year);
                    for(row=1;row<=5;row++){
                            for(col=1;col<=7;col++){
                                day = 1;
                                sum = sum + day;
                                if(sum<=30)
                                {   
                                    printf("%4d",sum);
                                }
                                else{
                                    printf(" ");
                                }
                            }
                            printf("\n");
                        }
                }
                if(month == 12)
                {
                    sum = 0;
                    printf("\t December %d\n",year);
                    for(row=1;row<=5;row++){
                            for(col=1;col<=7;col++){
                                day = 1;
                                sum = sum + day;
                                if(sum<=31)
                                {   
                                    printf("%4d",sum);
                                }
                                else{
                                    printf(" ");
                                }
                            }
                            printf("\n");
                        }
                }
            } 
    }
}
