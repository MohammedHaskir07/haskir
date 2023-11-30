#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char ville[10];
int tanger=0,asila=0,tetouan=0,laayone=0,dakhla=0,smara=0,place,total,w,s;
void bus (){
    int i;
   do{ printf("Enter your age: ");

    while (1) {
        if (scanf("%d", &s) == 1) {
            break;
        } else {
            printf("Please enter your age: \n");

            while (getchar() != '\n') {
            }
        }
    }


         if(s<=30)
        {
            if(tanger+asila+tetouan<7)
            {
                printf(" welcome to Northern Morocco \n tanger = 50DH \n asila = 40DH \n tetouan 70DH \n Write which city to choose \n\n");
                scanf("%s",ville);
                if(strcmp(ville,"tanger")==0)
                {
                    printf("welcom to tanger \n\n");
                    tanger++;
                }
                else if(strcmp(ville,"asila")==0)
                {
                    printf("welcom to asila \n\n");
                    asila++;
                }
                else if(strcmp(ville,"tetouan")==0)
                {
                    printf("welcom to tetouan \n\n");
                    tetouan++;
                }
                else printf("non disponible\n\n");
            }

        }
        else if (s>30&&s<100)
        {
            if (laayone+dakhla+smara<7)
            {

                printf(" welcoom to South Morocco \n laayone = 300DH \n dakhla = 400DH \n smara = 500DH \n Write which city to choose \n\n ");
                scanf("%s",ville);
                if(strcmp(ville,"laayone")==0)
                {
                    printf("welcom to laayone \n\n");
                    laayone++;
                }
                else if(strcmp(ville,"dakhla")==0)
                {
                    printf("welcome to dakhla\n\n");
                    dakhla++;
                }
                else if(strcmp(ville,"smara")==0)
                {
                    printf("welcom to smara \n\n");
                    smara++;
                }
                else printf("Not available \n\n");
            }


        }

    }while(tanger+asila+tetouan+laayone+dakhla+smara<7);

}
int main()
{


    printf("                                                   safari \n");

    bus();
    printf("the north = %iDH \n",(tanger*50)+(asila*40)+(tetouan*70));
    printf("the south= %iDH \n",(laayone*300)+(dakhla*400)+(smara*500));
    printf("tanger %i place = %iDH \n",tanger,tanger*50);
    printf("tetouan %i place = %iDH \n",tetouan,tetouan*70);
    printf("asila %i place = %iDH \n",asila,asila*40);
    printf("laayon %i place = %iDH \n",laayone,laayone*300);
    printf("dakhla %i place = %iDH \n",dakhla,dakhla*400);
    printf("smara %i place = %iDH \n",smara,smara*500);
    place=tanger+asila+tetouan+laayone+dakhla+smara;
    total=(tanger*50)+(asila*40)+(tetouan*70)+(laayone*300)+(dakhla*400)+(smara*500);
    printf("le bus est charge %i places = %iDH \n",place,total);





    return 0;
}
