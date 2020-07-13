
#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<stdlib.h>

struct movies_db{
    char name[100];
    char gerne[100];
    int release;
    char language[100];
    int budge;
    int boxoffice;
    float rating;
    char country[100];
    char duration[100];
    int viewer;

};

int main()
{

    printf("                       ********************************\n");
    printf("                       *****                      *****\n");
    printf("                       ***** ST MOVIES COLLECTION *****\n");
    printf("                       *****                      *****\n");
    printf("                       ********************************\n");

    int i,n=30;
    movies_db s[n];

    FILE *fp;
    fp=fopen("movie_db.txt","r");

    for(int i=0;i<n;i++)
    {

        fscanf(fp,"%[^:]:%[^:]:%d:%[^:]:%d:%d:%f:%[^:]:%[^:]:%d ",&s[i].name,&s[i].gerne,&s[i].release,&s[i].language,&s[i].budge,&s[i].boxoffice,&s[i].rating,&s[i].country,&s[i].duration,&s[i].viewer);

    }

    fclose(fp);

/*
    for(int i=0;i<n;i++)
    {

        puts(s[i].name);
        printf("\n          Gerne = ");
        puts(s[i].gerne);
        printf("          Language = ");
        puts(s[i].language);
        printf("          Country = ");
        puts(s[i].country);
        printf("          Release Date = %d\n",s[i].release);
        printf("          Duration = ");
        puts(s[i].duration);
        printf("          Budge = %d million\n",s[i].budge);
        printf("          Box Office = %d million\n",s[i].boxoffice);
        printf("          Viewer = %d\n",s[i].viewer);
        printf("          Rating = %.2f\n",s[i].rating);
        printf("\n\n");
    }
*/
int lo;
    while(lo!=0)
    {
    printf(" \n\n\n                           ************************\n");
    printf("                 **********************************************\n");
    printf("             ************************   ****************************\n");
    printf("       **********            ********   *********           *************\n");
    printf("    ************* 1= ADNINE  ********   ********* 2= USERS  ****************\n");
    printf("       **********            ***              ***           *************\n");
    printf("             *******************   0 = EXIT   *********************\n");
    printf("               *****************              *******************\n");
    printf("                  ********************************************\n\n\n");
        scanf("%d",&lo);
    if(lo==1)
        {
            system("cls");
            printf("passward = ");
            int pas;
            scanf("%d",&pas);
            if(pas%123654==0)
            {
            printf("WELL COME IN ADMINE PANNEL");
            }
        }

    if(lo==2)
    {
        system("cls");
        while(1)
        {
            printf("\t\tWelcome To Movie Studio\n\n");

            printf("\t\t 1 | Search    2 | Home    3 | Recent Movies    4 | Hit Movies   5 | Search by Year\n\n");

            printf("\t\t 6 | Search From Year To Year        7 | Search By Genre      8 | Search By Country\n\n");

            printf("\t\t 9 | Search By Language     10 | Search By Rating     11| Search L.Rating To U.Rating \n\n");

            printf("\t\t12 | Most Viewed Movie     13 | Most rating Movie      \n\n");

            printf("\t14 | Search Movies Particularly Genre && Country      15 | Search Movies Particularly Genre && Rating\n\n");

            printf("\t16 | Search Movies Particularly Genre && Language     17 | Search Movies Particularly Country && Rating\n\n");

            printf("\t18 | ### WATCHING BEAST BANGLADESHI MOVIES ###        19 | Search Most Expensive Movie\n\n");

            printf("\t20 | SEarch Most Businessfull Movie                   21 | Search Most Viewed Any Country Movie\n\n");

            printf("\t\t\t  0 | Exit\n");

        int a;
        printf("\nYour Option :");
        scanf("%d",&a);

        if(a==1)
        {
                system("cls");
                char b[100];
                int flag=0;
                getchar();
                printf("Movie Name :");
                gets(b);
                for(i=0;i<n;i++)
                {
                    if(strcmp(b,s[i].name)==0)
                    {
                    printf("\n\n\nYes We Have This Movie\n\n");
                    puts(s[i].name);
                    printf("\n          Gerne = ");
                    puts(s[i].gerne);
                    printf("          Language = ");
                    puts(s[i].language);
                    printf("          Country = ");
                    puts(s[i].country);
                    printf("          Release Date = %d\n",s[i].release);
                    printf("          Duration = ");
                    puts(s[i].duration);
                    printf("          Budge = %d million\n",s[i].budge);
                    printf("          Box Office = %d million\n",s[i].boxoffice);
                    printf("          Viewer = %d\n",s[i].viewer);
                    printf("          Rating = %.2f\n",s[i].rating);
                    printf("\n\n");
                    flag=1;
                    }
                }
                if(flag==0)
                {
                printf("\nNot Found\n");
                printf("THIS MOVIE WILL BE SOON IN OUR SERVER\n\n");

                }

        }

        if(a==2)
        {
            int counter=0;
            system("cls");
            for(int i=0;i<n;i++)
            {
                counter++;
                printf("\n          Movie No = %d\n\n",i+1);
                puts(s[i].name);
                printf("\n          Gerne = ");
                puts(s[i].gerne);
                printf("          Language = ");
                puts(s[i].language);
                printf("          Country = ");
                puts(s[i].country);
                printf("          Release Date = %d\n",s[i].release);
                printf("          Duration = ");
                puts(s[i].duration);
                printf("          Budge = %d million\n",s[i].budge);
                printf("          Box Office = %d million\n",s[i].boxoffice);
                printf("          Viewer = %d\n",s[i].viewer);
                printf("          Rating = %.2f\n",s[i].rating);
                printf("\n\n");
            }
            printf("TOTAL %d MOVIES IN THIS SERVER\n\n",counter);
        }
         if(a==3)
        {

            system("cls");
            printf("### U R WATCHING RECENT MOVIES ###\n\n");

            for(i=0;i<n;i++)
            {
            if(s[i].release>=2010&&s[i].release<=2016)
            {

            puts(s[i].name);
            }
            }

        }
        if(a==4)
        {
                system("cls");
                printf("### U R WATCHING HIT MOVIES ###\n\n");

                for(i=0;i<n;i++)
                {
                if(s[i].boxoffice>s[i].budge*3)
                {
                puts(s[i].name);
                printf("          Budge = %d million\n",s[i].budge);
                printf("          Box Office = %d million\n",s[i].boxoffice);
                }

                }
        }

        if(a==5)
        {
            system("cls");
            getchar();
            int d1;
            printf("Enter Year=");
            scanf("%d",&d1);

            printf("### U R WATCHING  MOVIES OF %d YEAR ###\n\n",d1);

            for(i=0;i<n;i++)
            {
            if(s[i].release==d1)
            {
            puts(s[i].name);
            }
            }
        }

        if(a==6)
        {
                 system("cls");
                getchar();
                int d1,d2;
                printf("Enter 1st Date=");
                scanf("%d",&d1);
                printf("Enter 2st Date=");
                scanf("%d",&d2);
                printf("### U R WATCHING  MOVIES FROM %d - %d ###\n\n",d1,d2);

                for(i=0;i<n;i++)
                {
                if(s[i].release>=d1&&s[i].release<=d2)
                {
                puts(s[i].name);
                }
                }
        }
        if(a==7)
        {
            system("cls");
            char b[100];
            int flag=0,count=0;
            getchar();
            printf("Movie Genre :");
            gets(b);
            for(i=0;i<n;i++)
            {
                if(strcmp(b,s[i].gerne)==0)
                {
                    count++;
                    printf("\n          Movie No = %d\n\n",i+1);
                puts(s[i].name);
                printf("\n          Gerne = ");
                puts(s[i].gerne);
                printf("          Language = ");
                puts(s[i].language);
                printf("          Country = ");
                puts(s[i].country);
                printf("          Release Date = %d\n",s[i].release);
                printf("          Duration = ");
                puts(s[i].duration);
                printf("          Budge = %d million\n",s[i].budge);
                printf("          Box Office = %d million\n",s[i].boxoffice);
                printf("          Viewer = %d\n",s[i].viewer);
                printf("          Rating = %.2f\n",s[i].rating);
                printf("\n\n");
                flag=1;
                }

            }
            if(flag==0)
            {
                printf("\n\n\nNot Found\n\n");
            }
             printf("Total Amount Of This kind Movies = %d",count);
        }
        if(a==8)
        {
            system("cls");
            char b[100];
            int flag=0,count=0;
            getchar();
            printf("Movies By country :");
            gets(b);
            for(i=0;i<n;i++)
            {
                if(strcmp(b,s[i].country)==0)
                {
                    count++;
                    printf("\n          Movie No = %d\n\n",i+1);
                puts(s[i].name);
                printf("\n          Gerne = ");
                puts(s[i].gerne);
                printf("          Language = ");
                puts(s[i].language);
                printf("          Country = ");
                puts(s[i].country);
                printf("          Release Date = %d\n",s[i].release);
                printf("          Duration = ");
                puts(s[i].duration);
                printf("          Budge = %d million\n",s[i].budge);
                printf("          Box Office = %d million\n",s[i].boxoffice);
                printf("          Viewer = %d\n",s[i].viewer);
                printf("          Rating = %.2f\n",s[i].rating);
                printf("\n\n");
                flag=1;
                }

            }
            if(flag==0)
            {
                printf("\n\n\nNot Found\n\n");
            }
             printf("Total Amount Of This kind Movies = %d",count);
        }
        if(a==9)
        {
            system("cls");
            char b[100];
            int flag=0,count=0;
            getchar();
            printf("Movies By Language :");
            gets(b);
            for(i=0;i<n;i++)
            {
                if(strcmp(b,s[i].language)==0)
                {
                    count++;
                    printf("\n          Movie No = %d\n\n",i+1);
                puts(s[i].name);
                printf("\n          Gerne = ");
                puts(s[i].gerne);
                printf("          Language = ");
                puts(s[i].language);
                printf("          Country = ");
                puts(s[i].country);
                printf("          Release Date = %d\n",s[i].release);
                printf("          Duration = ");
                puts(s[i].duration);
                printf("          Budge = %d million\n",s[i].budge);
                printf("          Box Office = %d million\n",s[i].boxoffice);
                printf("          Viewer = %d\n",s[i].viewer);
                printf("          Rating = %.2f\n",s[i].rating);
                printf("\n\n");
                flag=1;
                }

            }
            if(flag==0)
            {
                printf("\n\n\nNot Found\n\n");
            }
             printf("Total Amount Of This kind Movies = %d",count);
        }

        if(a==10)
        {
          system("cls");
            float b;
            int flag=0,count=0;
            getchar();
            printf("Movies By Rating :");
            scanf("%f",&b);
            for(i=0;i<n;i++)
            {
                if(s[i].rating==b)
                {
                    count++;
                    printf("\n          Movie No = %d\n\n",i+1);
                puts(s[i].name);
                printf("\n          Gerne = ");
                puts(s[i].gerne);
                printf("          Language = ");
                puts(s[i].language);
                printf("          Country = ");
                puts(s[i].country);
                printf("          Release Date = %d\n",s[i].release);
                printf("          Duration = ");
                puts(s[i].duration);
                printf("          Budge = %d million\n",s[i].budge);
                printf("          Box Office = %d million\n",s[i].boxoffice);
                printf("          Viewer = %d\n",s[i].viewer);
                printf("          Rating = %.2f\n",s[i].rating);
                printf("\n\n");
                flag=1;
                }

            }
            if(flag==0)
            {
                printf("\n\n\nNot Found\n\n");
            }
             printf("Total Amount Of This kind Movies = %d",count);
        }

        if(a==11)
        {
          system("cls");
            float b,d;
            int flag=0,count=0;
            getchar();
            printf("Movies By Rating :");
            printf("Lower Rating :");
            scanf("%f",&b);
            getchar();
            printf("Upper Rating :");
            scanf("%f",&d);
            for(i=0;i<n;i++)
            {
                if(s[i].rating>=b&&s[i].rating<=d)
                {
                    count++;
                    printf("\n          Movie No = %d\n\n",i+1);
                puts(s[i].name);
                printf("\n          Gerne = ");
                puts(s[i].gerne);
                printf("          Language = ");
                puts(s[i].language);
                printf("          Country = ");
                puts(s[i].country);
                printf("          Release Date = %d\n",s[i].release);
                printf("          Duration = ");
                puts(s[i].duration);
                printf("          Budge = %d million\n",s[i].budge);
                printf("          Box Office = %d million\n",s[i].boxoffice);
                printf("          Viewer = %d\n",s[i].viewer);
                printf("          Rating = %.2f\n",s[i].rating);
                printf("\n\n");
                flag=1;
                }

            }
            if(flag==0)
            {
                printf("\n\n\nNot Found\n\n");
            }
             printf("Total Amount Of This kind Movies = %d",count);
        }

        if(a==12)
        {
            system("cls");
            int max_view=s[0].viewer;
            int  index=0;
            for(i=0;i<n;i++)
            {
                if(s[i].viewer>max_view)
                {
                    max_view=s[i].viewer;
                    index=i;
                }
            }

            puts(s[index].name);
        }
        if(a==13)
        {

             system("cls");
             getchar();
            int max_rating=s[0].rating;
            int  index=0;
            for(i=0;i<n;i++)
            {
                if(s[i].rating>max_rating)
                {
                    max_rating=s[i].rating;
                    index=i;
                }
            }

            puts(s[index].name);
        }

        if(a==14)
        {
            system("cls");
            char bg[100],dc[100];
            int flag=0,count=0;
            getchar();
            printf("ENTER YOUR GERNE :");
            gets(bg);
             printf("ENTER YOUR COUNTRY :");
            gets(dc);
            for(i=0;i<n;i++)
            {
                if(strcmp(bg,s[i].gerne)==0&&strcmp(dc,s[i].country)==0)
                {
                    count++;
                    printf("\n          Movie No = %d\n\n",i+1);
                puts(s[i].name);
                printf("\n          Gerne = ");
                puts(s[i].gerne);
                printf("          Language = ");
                puts(s[i].language);
                printf("          Country = ");
                puts(s[i].country);
                printf("          Release Date = %d\n",s[i].release);
                printf("          Duration = ");
                puts(s[i].duration);
                printf("          Budge = %d million\n",s[i].budge);
                printf("          Box Office = %d million\n",s[i].boxoffice);
                printf("          Viewer = %d\n",s[i].viewer);
                printf("          Rating = %.2f\n",s[i].rating);
                printf("\n\n");
                flag=1;
                }

            }
            if(flag==0)
            {
                printf("\n\n\nNot Found\n\n");
            }
             printf("Total Amount Of This kind Movies = %d",count);
        }

        if(a==15)
        {
            system("cls");
            char bg[100];
            float lr,ur;
            int flag=0,count=0;
            getchar();
            printf("ENTER YOUR GERNE :");
            gets(bg);
             printf("ENTER YOUR LOWER RATING :");
            scanf("%f",&lr);
            printf("ENTER YOUR UPPER RATING :");
            scanf("%f",&ur);
            for(i=0;i<n;i++)
            {
                if(strcmp(bg,s[i].gerne)==0&&s[i].rating>=lr&&s[i].rating<=ur)
                {
                    count++;
                    printf("\n          Movie No = %d\n\n",i+1);
                puts(s[i].name);
                printf("\n          Gerne = ");
                puts(s[i].gerne);
                printf("          Language = ");
                puts(s[i].language);
                printf("          Country = ");
                puts(s[i].country);
                printf("          Release Date = %d\n",s[i].release);
                printf("          Duration = ");
                puts(s[i].duration);
                printf("          Budge = %d million\n",s[i].budge);
                printf("          Box Office = %d million\n",s[i].boxoffice);
                printf("          Viewer = %d\n",s[i].viewer);
                printf("          Rating = %.2f\n",s[i].rating);
                printf("\n\n");
                flag=1;
                }

            }
            if(flag==0)
            {
                printf("\n\n\nNot Found\n\n");
            }
             printf("Total Amount Of This kind Movies = %d",count);
        }

        if(a==16)
        {
            system("cls");
            char bg[100],dc[100];
            int flag=0,count=0;
            getchar();
            printf("ENTER YOUR GERNE :");
            gets(bg);
             printf("ENTER YOUR LANGUAGE :");
            gets(dc);
            for(i=0;i<n;i++)
            {
                if(strcmp(bg,s[i].gerne)==0&&strcmp(dc,s[i].language)==0)
                {
                    count++;
                    printf("\n          Movie No = %d\n\n",i+1);
                puts(s[i].name);
                printf("\n          Gerne = ");
                puts(s[i].gerne);
                printf("          Language = ");
                puts(s[i].language);
                printf("          Country = ");
                puts(s[i].country);
                printf("          Release Date = %d\n",s[i].release);
                printf("          Duration = ");
                puts(s[i].duration);
                printf("          Budge = %d million\n",s[i].budge);
                printf("          Box Office = %d million\n",s[i].boxoffice);
                printf("          Viewer = %d\n",s[i].viewer);
                printf("          Rating = %.2f\n",s[i].rating);
                printf("\n\n");
                flag=1;
                }

            }
            if(flag==0)
            {
                printf("\n\n\nNot Found\n\n");
            }
             printf("Total Amount Of This kind Movies = %d",count);
        }

        if(a==17)
        {
                system("cls");
                char bg[100];
                float lr,ur;
                int flag=0,count=0;
                getchar();
                printf("ENTER YOUR COUNTRY :");
                gets(bg);
                printf("ENTER YOUR LOWER RATING :");
                scanf("%f",&lr);
                printf("ENTER YOUR UPPER RATING :");
                scanf("%f",&ur);
                for(i=0;i<n;i++)
                {
                if(strcmp(bg,s[i].country)==0&&s[i].rating>=lr&&s[i].rating<=ur)
                {
                count++;
                printf("\n          Movie No = %d\n\n",i+1);
                puts(s[i].name);
                printf("\n          Gerne = ");
                puts(s[i].gerne);
                printf("          Language = ");
                puts(s[i].language);
                printf("          Country = ");
                puts(s[i].country);
                printf("          Release Date = %d\n",s[i].release);
                printf("          Duration = ");
                puts(s[i].duration);
                printf("          Budge = %d million\n",s[i].budge);
                printf("          Box Office = %d million\n",s[i].boxoffice);
                printf("          Viewer = %d\n",s[i].viewer);
                printf("          Rating = %.2f\n",s[i].rating);
                printf("\n\n");
                flag=1;
                }

                }
                if(flag==0)
                {
                printf("\n\n\nNot Found\n\n");
                }
                printf("Total Amount Of This kind Movies = %d",count);
                }

        if(a==18)
        {
             system("cls");
            printf("### U R WATCHING BEAST BANGLADESHI MOVIES ###\n\n");

            for( i=0;i<n;i++)
            {
            if(strcmp(s[i].country,"BD")==0)

            {
               if(s[i].rating>6.5)
                puts(s[i].name);
            }

            }
        }
        if(a==19)
        {

             system("cls");
             getchar();
            int max_budge=s[0].budge;
            int  index=0;
            for(i=0;i<n;i++)
            {
                if(s[i].budge>max_budge)
                {
                    max_budge=s[i].budge;
                    index=i;
                }

            }

            puts(s[index].name);

        }

        if(a==20)
        {

             system("cls");
             getchar();
            int max_boxoffice=s[0].boxoffice;
            int  index=0;
            for(i=0;i<n;i++)
            {
                if(s[i].boxoffice>max_boxoffice)
                {
                    max_boxoffice=s[i].boxoffice;
                    index=i;
                }

            }

            puts(s[index].name);

        }
        if(a==21)
        {

             system("cls");
            int max_viewer=s[0].viewer;
            int  index=0;
            char cn[100];
             printf("ENTER YOUR COUNTRY = ");
             getchar();
             gets(cn);

             for(i=0;i<n;i++)
             {
                 if(strcmp(cn,s[i].country)==0)
                 {
                     max_viewer=s[i].viewer;
                     index=i;
                     break;
                 }
             }

             for(i=0;i<n;i++)
            {
                if(strcmp(cn,s[i].country)==0 && s[i].viewer>max_viewer)
                {
                    index=i;
                    max_viewer=s[i].viewer;
                }
            }
            puts(s[index].name);

        }

        if(a==0)
        {
            break;
        }

        }
    }
    }
    return 0;
}
