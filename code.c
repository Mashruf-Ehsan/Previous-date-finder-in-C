#include <stdio.h>

int main(void)
{
    int d,m,y;
    printf("Enter Day: ");
    scanf("%d",&d);
    printf("Enter Month: ");
    scanf("%d",&m);
    printf("Enter Year: ");
    scanf("%d",&y);

    if(m==1){
            if(d==1){
            d=31;
            m=12;
            y--;
            printf("\nPrevious Date: %d\nPrevious Month: %d\nPrevious Year: %d\n",d,m,y);
            }
            else if(d>1 && d<=31){
                d--;
                printf("\nPrevious Date: %d\nPrevious Month: %d\nPrevious Year: %d\n",d,m,y);
            }
            else
        printf("\nInvalid Date !\n");
    }
    else if(m==5||m==7||m==10||m==12){

                if(d==1){
                d=30;
                m--;
                printf("\nPrevious Date: %d\nPrevious Month: %d\nPrevious Year: %d\n",d,m,y);
                }
                else if(d>1 && d<=31){
                    d--;
                    printf("\nPrevious Date: %d\nPrevious Month: %d\nPrevious Year: %d\n",d,m,y);
                }
                else
                printf("\nInvalid Date !\n");
    }
    else if(m==2){
            if(y%400==0 || y%4==0 && y%100!=0){
                if(d==1){
                    d=31;
                    m=1;
                    printf("\nPrevious Date: %d\nPrevious Month: %d\nPrevious Year: %d\n",d,m,y);
                }
                else if(d>1 && d<=29){
                    d--;
                    printf("\nPrevious Date: %d\nPrevious Month: %d\nPrevious Year: %d\n",d,m,y);
                }
                else
                    printf("\nInvalid Date !\n");
                }
            else{
                if(d==1){
                    d=31;
                    m=1;
                    printf("\nPrevious Date: %d\nPrevious Month: %d\nPrevious Year: %d\n",d,m,y);
                }
                else if(d>1 && d<=28){
                    d--;
                    printf("\nPrevious Date: %d\nPrevious Month: %d\nPrevious Year: %d\n",d,m,y);
                }
                else
                    printf("\nInvalid Date !\n");
            }
    }
    else if(m==4||m==6||m==8||m==9||m==11){
        if(d==1){
            d=31;
            m--;
            printf("\nPrevious Date: %d\nPrevious Month: %d\nPrevious Year: %d\n",d,m,y);
        }
        else if(d>1 && d<=30){
            d--;
            printf("\nPrevious Date: %d\nPrevious Month: %d\nPrevious Year: %d\n",d,m,y);
        }
        else
        printf("\nInvalid Date !\n");
    }
    else if(m==3){
        if(y%400==0 || y%4==0 && y%100!=0){
            if(d==1){
                d=29;
                m=2;
                printf("\nPrevious Date: %d\nPrevious Month: %d\nPrevious Year: %d\n",d,m,y);
            }
            else if(d>1 && d<=31){
                d--;
                printf("\nPrevious Date: %d\nPrevious Month: %d\nPrevious Year: %d\n",d,m,y);
            }
            else
                printf("\nInvalid Date !\n");
        }
        else{
                if(d==1){
                    d=28;
                    m=2;
                    printf("\nPrevious Date: %d\nPrevious Month: %d\nPrevious Year: %d\n",d,m,y);
                }
                else if(d>1 && d<=31){
                    d--;
                    printf("\nPrevious Date: %d\nPrevious Month: %d\nPrevious Year: %d\n",d,m,y);
                }
                else
                    printf("\nInvalid Date !\n");
            }
    }
    else
        printf("\nInvalid Date !\n");

    return 0;

}
