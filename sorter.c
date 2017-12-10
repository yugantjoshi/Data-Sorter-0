#include "sorter.h"
#include "mergesort.c"
#include <math.h>


char isValidColumn(const char* sortColumn){
        if(
                strcmp(sortColumn, "color")!= 0
                && strcmp(sortColumn, "director_name")!= 0
                && strcmp(sortColumn, "num_critic_for_reviews")!= 0
                && strcmp(sortColumn, "duration")!= 0
                && strcmp(sortColumn, "director_facebook_likes")!= 0
                && strcmp(sortColumn, "actor_3_facebook_likes")!= 0
                && strcmp(sortColumn, "actor_2_name")!= 0
                && strcmp(sortColumn, "actor_1_facebook_likes")!= 0
                && strcmp(sortColumn, "gross")!= 0
                && strcmp(sortColumn, "genres")!= 0
                && strcmp(sortColumn, "actor_1_name")!= 0
                && strcmp(sortColumn, "movie_title")!= 0
                && strcmp(sortColumn, "num_voted_users")!= 0
                && strcmp(sortColumn, "cast_total_facebook_likes")!= 0
                && strcmp(sortColumn, "actor_3_name")!= 0
                && strcmp(sortColumn, "facenumber_in_poster")!= 0
                && strcmp(sortColumn, "plot_keywords")!= 0
                && strcmp(sortColumn, "movie_imdb_link")!= 0
                && strcmp(sortColumn, "num_user_for_reviews")!= 0
                && strcmp(sortColumn, "language")!= 0
                && strcmp(sortColumn, "country")!= 0
                && strcmp(sortColumn, "content_rating")!= 0
                && strcmp(sortColumn, "budget")!= 0
                && strcmp(sortColumn, "title_year")!= 0
                && strcmp(sortColumn, "actor_2_facebook_likes")!= 0
                && strcmp(sortColumn, "imdb_score")!= 0
                && strcmp(sortColumn, "aspect_ratio")!= 0
                && strcmp(sortColumn, "movie_facebook_likes")!= 0) {
                return 'f';
        }
        return 't';
}
char* findColumnDataType(const char* sortColumn){
        char *data_type = (char*)malloc(sizeof(char)*30);

        if(strcmp(sortColumn, "color") == 0) {
                strncpy(data_type, "int", 10);
                //data_type = 'int';
                return data_type;
        }
        else if(strcmp(sortColumn, "director_name")==0) {
                strncpy(data_type, "string", 10);
                //printf("value after director_name %s\n", value);
                return data_type;
        }
        else if(strcmp(sortColumn, "num_critic_for_reviews") == 0) {
                strncpy(data_type, "int", 10);
                return data_type;
        }
        else if(strcmp(sortColumn, "duration") == 0) {
                strncpy(data_type, "int", 10);
                return data_type;
        }
        else if(strcmp(sortColumn, "director_facebook_likes") == 0) {
                strncpy(data_type, "int", 10);
                return data_type;
        }
        else if(strcmp(sortColumn, "actor_3_facebook_likes") == 0) {
                strncpy(data_type, "int", 10);
                return data_type;
        }
        else if(strcmp(sortColumn, "actor_2_name") == 0) {
                strncpy(data_type, "string", 10);
                return data_type;
        }
        else if(strcmp(sortColumn, "actor_1_facebook_likes") == 0) {
                strncpy(data_type, "int", 10);
                return data_type;
        }
        else if(strcmp(sortColumn, "gross") == 0) {
                strncpy(data_type, "int", 10);
                return data_type;
        }
        else if(strcmp(sortColumn, "genres") == 0) {
                strncpy(data_type, "string", 10);
                return data_type;
        }
        else if(strcmp(sortColumn, "actor_1_name") == 0) {
                strncpy(data_type, "string", 10);
                return data_type;
        }
        else if(strcmp(sortColumn, "movie_title") == 0) {
                strncpy(data_type, "string", 10);
                return data_type;
        }
        else if(strcmp(sortColumn, "num_voted_users") == 0) {
                strncpy(data_type, "int", 10);
                return data_type;
        }
        else if(strcmp(sortColumn, "cast_total_facebook_likes") == 0) {
                strncpy(data_type, "int", 10);
                return data_type;
        }
        else if(strcmp(sortColumn, "actor_3_name") == 0) {
                strncpy(data_type, "string", 10);
                return data_type;
        }
        else if(strcmp(sortColumn, "facenumber_in_poster") == 0) {
                strncpy(data_type, "int", 10);
                return data_type;
        }
        else if(strcmp(sortColumn, "plot_keywords") == 0) {
                strncpy(data_type, "string", 10);
                return data_type;
        }
        else if(strcmp(sortColumn, "movie_imdb_link") == 0) {
                strncpy(data_type, "string", 10);
                return data_type;
        }
        else if(strcmp(sortColumn, "num_user_for_reviews") == 0) {
                strncpy(data_type, "int", 10);
                return data_type;
        }
        else if(strcmp(sortColumn, "language") == 0) {
                strncpy(data_type, "string", 10);
                return data_type;
        }
        else if(strcmp(sortColumn, "country") == 0) {
                strncpy(data_type, "string", 10);
                return data_type;
        }
        else if(strcmp(sortColumn, "content_rating") == 0) {
                strncpy(data_type, "int", 10);
                return data_type;
        }
        else if(strcmp(sortColumn, "budget") == 0) {
                strncpy(data_type, "int", 10);
                return data_type;
        }
        else if(strcmp(sortColumn, "title_year") == 0) {
                strncpy(data_type, "int", 10);
                return data_type;
        }
        else if(strcmp(sortColumn, "actor_2_facebook_likes") == 0) {
                strncpy(data_type, "int", 10);
                return data_type;
        }
        else if(strcmp(sortColumn, "imdb_score") == 0) {
                strncpy(data_type, "int", 10);
                return data_type;
        }
        else if(strcmp(sortColumn, "aspect_ratio") == 0) {
                strncpy(data_type, "int", 10);
                return data_type;
        }
        else if(strcmp(sortColumn, "movie_facebook_likes") == 0) {
                strncpy(data_type, "int", 10);
                return data_type;
        }
        else{
                printf("WRONG INPUT_ABORT\n");
                strncpy(data_type, "invalid", 10);
                exit(1);
        }

}

int main(int argc, char const *argv[]) {
        printf("Callin  g\n");
        Records* input= (Records*)malloc(sizeof(Records)*8000);

        if(argc != 3)

        {
                printf("You have input the wrong amount of arguments!");
                exit(1);
        }

        if(isValidColumn(argv[2]) == 'f') {
                printf("invalid sorting column\n");
                exit(1);
        }

        int count=450;//counts the lines we reach;
        int amountofLines=0;
        int y;
        int i=0;//interate current line
        int j=0;//used to add to token
        int s=0;//iterate through input
        int commas=0;
        char token[300];
        char *line=(char*)malloc(sizeof(char)*500);//this will hold the current line till its parsed
        fgets(line,500,stdin);
        char *data_type =(char*)malloc(sizeof(char)*10);

        char* first_line = (char*)malloc(sizeof(char)*500);
        strcpy(first_line, line);
        printf("Calling\n");
        while(fgets(line, 500, stdin))

        {

                amountofLines++;
                i=0;
                j=0;
                commas=0;
                while(i < strlen(line))

                {





                        if(line[i]==',')

                        {

                                commas++;

                                switch (commas)

                                {



                                case 1:



                                        //printf("this is color token %s\n",token);

                                        strncpy(input[s].color, token, 50);

                                        memset(token, 0, 300);//empties token array

                                        //  printf("this is color %s\n",input[s].color);

                                        break;



                                case 2:

                                        // printf("this is director token %s\n",token);

                                        strncpy(input[s].director_name, token, 50);

                                        memset(token, 0, 300);//empties token array

                                        //printf("this is director name %s\n",input[s].director_name);

                                        break;



                                case 3:

                                        input[s].num_critic_for_reviews=atoi(token);

                                        memset(token, 0, 300);//empties token array

                                        //printf("this is num critics %i\n",input[s].num_critic_for_reviews);

                                        break;



                                case 4:

                                        input[s].duration=atoi(token);

                                        memset(token, 0, 300);//empties token array

                                        //printf("this is duration %i\n",input[s].duration);

                                        break;



                                case 5:

                                        input[s].director_facebook_likes=atoi(token);

                                        memset(token, 0, 300);//empties token array

                                        //printf("this is director facebook likes %i\n",input[s].director_facebook_likes);

                                        break;



                                case 6:

                                        input[s].actor_3_facebook_likes=atoi(token);

                                        memset(token, 0, 300);//empties token array

                                        //printf("this is actor 3 fb likes %i\n",input[s].actor_3_facebook_likes);

                                        break;



                                case 7:

                                        strncpy(input[s].actor_2_name, token, 50);

                                        memset(token, 0, 300);//empties token array

                                        //printf("this is actor 2 name %s\n",input[s].actor_2_name);

                                        break;



                                case 8:

                                        input[s].actor_1_facebook_likes=atoi(token);

                                        memset(token, 0, 300);//empties token array

                                        //printf("this is actor 1 fb likes %i\n",input[s].actor_1_facebook_likes);

                                        break;



                                case 9:

                                        input[s].gross=atoi(token);

                                        memset(token, 0, 300);//empties token array

                                        //printf("this is gross %i\n",input[s].gross);

                                        break;



                                case 10:

                                        strncpy(input[s].genres, token, 50);

                                        memset(token, 0, 300);//empties token array

                                        //printf("this is genre %s\n",input[s].genres);

                                        break;



                                case 11:

                                        strncpy(input[s].actor_1_name, token, 50);

                                        memset(token, 0, 300);//empties token array

                                        //printf("this is actor 1 name %s\n",input[s].actor_1_name);

                                        break;



                                case 12:

                                        while(!isdigit(line[i+1])) {







                                                if(line[i]== ',') {

                                                        printf("i should make it in here after second I \n");

                                                        token[j]=' ';

                                                }else if(line[i]== '"') {

                                                        token[j]=' ';



                                                }



                                                else{

                                                        token[j]=line[i];

                                                }





                                                j++;

                                                i++;









                                        }





                                        strncpy(input[s].movie_title, token, 50);

                                        memset(token, 0, 300);//empties token array

                                        //printf("this is movie title %s\n",input[s].movie_title);

                                        break;



                                case 13:

                                        input[s].num_voted_users=atoi(token);

                                        memset(token, 0, 300);//empties token array

                                        //printf("this is num voted users %i\n",input[s].num_voted_users);

                                        break;



                                case 14:

                                        input[s].cast_total_facebook_likes=atoi(token);

                                        memset(token, 0, 300);//empties token array

                                        //printf("this is cast total facebook likes %i\n",input[s].cast_total_facebook_likes);

                                        break;



                                case 15:

                                        strncpy(input[s].actor_3_name, token, 50);

                                        memset(token, 0, 300);//empties token array

                                        //printf("this is actor 3 name %s\n",input[s].actor_3_name);

                                        break;



                                case 16:

                                        input[s].facenumber_in_poster=atoi(token);

                                        memset(token, 0, 300);//empties token array

                                        //printf("this is face num in poster %i\n",input[s].facenumber_in_poster);

                                        break;



                                case 17:

                                        strncpy(input[s].plot_keywords, token, 50);

                                        memset(token, 0, 300);//empties token array

                                        //printf("this is plot keywords %s\n",input[s].plot_keywords);

                                        break;



                                case 18:

                                        strncpy(input[s].movie_imdb_link, token, 50);

                                        memset(token, 0, 300);//empties token array

                                        //printf("this is imbd link %s\n",input[s].movie_imdb_link);

                                        break;



                                case 19:

                                        input[s].num_user_for_reviews=atoi(token);

                                        memset(token, 0, 300);//empties token array

                                        //printf("this is num user for review %i\n",input[s].num_user_for_reviews);

                                        break;



                                case 20:

                                        strncpy(input[s].language, token, 50);

                                        memset(token, 0, 300);//empties token array

                                        //printf("this is language %s\n",input[s].language);

                                        break;



                                case 21:

                                        strncpy(input[s].country, token, 50);

                                        memset(token, 0, 300);//empties token array

                                        //printf("this is language %s\n",input[s].country);

                                        break;



                                case 22:

                                        strncpy(input[s].content_rating, token, 50);

                                        memset(token, 0, 300);//empties token array

                                        //printf("this is content rating %s\n",input[s].content_rating);

                                        break;



                                case 23:

                                        input[s].budget=atoi(token);

                                        memset(token, 0, 300);//empties token array

                                        //printf("this is budget %i\n",input[s].budget);

                                        break;



                                case 24:

                                        input[s].title_year=atoi(token);

                                        memset(token, 0, 300);//empties token array

                                        //printf("this is title year %i\n",input[s].title_year);

                                        break;



                                case 25:

                                        input[s].actor_2_facebook_likes=atoi(token);

                                        memset(token, 0, 300);//empties token array

                                        //printf("this is actor 2 facebook likes %i\n",input[s].actor_2_facebook_likes);

                                        break;



                                case 26:

                                        input[s].imdb_score=atoi(token);

                                        memset(token, 0, 300);//empties token array

                                        //printf("this is imdb %i\n",input[s].imdb_score);

                                        break;



                                case 27:

                                        input[s].aspect_ratio=atoi(token);

                                        memset(token, 0, 300);//empties token array

                                        //printf("this is aspect ratio %i\n",input[s].aspect_ratio);

                                        break;





                                }

                                //printf("we got a comma %s\n",token);

                                j=0;

                                i++;

                        }

                        else

                        {

                                if(line[i]=='a'||line[i]=='A'||line[i]=='b'||line[i]=='B' || line[i]=='c'||line[i]=='C'||line[i]=='d'||line[i]=='D'||line[i]=='e'||line[i]=='E'||

                                   line[i]=='f'||line[i]=='F'||line[i]=='g'||line[i]=='G' || line[i]=='h'||line[i]=='H'||line[i]=='i'||line[i]=='I'||line[i]=='j'||line[i]=='J'||

                                   line[i]=='k'||line[i]=='K'||line[i]=='l'||line[i]=='L' || line[i]=='m'||line[i]=='M'||line[i]=='n'||line[i]=='N'||line[i]=='o'||line[i]=='O'||

                                   line[i]=='p'||line[i]=='P'||line[i]=='q'||line[i]=='Q' || line[i]=='r'||line[i]=='R'||line[i]=='s'||line[i]=='S'||line[i]=='t'||line[i]=='T'||

                                   line[i]=='u'||line[i]=='U'||line[i]=='v'||line[i]=='V' || line[i]=='w'||line[i]=='W'||line[i]=='x'||line[i]=='X'||line[i]=='y'||line[i]=='Y'||

                                   line[i]=='z'||line[i]=='Z'||line[i]==' '||line[i]=='?'||line[i]=='_'||line[i]=='-'||line[i]=='.'||line[i]=='/'||line[i]=='|'||line[i]=='?'||

                                   line[i]=='1'||line[i]=='2'||line[i]=='3'||line[i]=='4'||line[i]=='5'||line[i]=='6'||line[i]=='7'||line[i]=='8'||line[i]=='9'||line[i]=='0'

                                   ) {



                                        token[j]=line[i];

                                        j++;

                                }







                                //token[j]=line[i];

                                // printf("we got a character %c\n",line[i]);

                                i++;



                        }





                }

                input[s].movie_facebook_likes=atoi(token);
                memset(token, 0, 300);//empties token array
                //printf("this is movie facebook likes %i\n",input[s].movie_facebook_likes);
                s++;
        }

        data_type = findColumnDataType(argv[2]);
        free(first_line);
        int arraySize = s;

        printf("Calling mergesort\n");
        mergeSort(&input, 0, arraySize, data_type, argv[2]);
        printf("Done Mergesort\n");


        return 0;
}
