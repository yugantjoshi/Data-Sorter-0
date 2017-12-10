#include "sorter.h"
#include "mergesort.c"

void print_csv_file(Records** finalInput, int arraySize){
        char fileName[] = "sortedMovies.csv";
        FILE *file = fopen(fileName, "w");
        int i=0;

        while(i!=arraySize) {
                fprintf(file, "%s,", (*finalInput)[i].color);
                fprintf(file, "%s,", (*finalInput)[i].director_name);
                fprintf(file, "%d,", (*finalInput)[i].num_critic_for_reviews);
                fprintf(file, "%d,", (*finalInput)[i].duration);
                fprintf(file, "%d,", (*finalInput)[i].director_facebook_likes);
                fprintf(file, "%d,", (*finalInput)[i].actor_3_facebook_likes);
                fprintf(file, "%s,", (*finalInput)[i].actor_2_name);
                fprintf(file, "%d,", (*finalInput)[i].actor_1_facebook_likes);
                fprintf(file, "%d,", (*finalInput)[i].gross);
                fprintf(file, "%s,", (*finalInput)[i].genres);
                fprintf(file, "%s,", (*finalInput)[i].actor_1_name);
                fprintf(file, "%s,", (*finalInput)[i].movie_title);
                fprintf(file, "%d,", (*finalInput)[i].num_voted_users);
                fprintf(file, "%d,", (*finalInput)[i].cast_total_facebook_likes);
                fprintf(file, "%s,", (*finalInput)[i].actor_3_name);
                fprintf(file, "%d,", (*finalInput)[i].facenumber_in_poster);
                fprintf(file, "%s,", (*finalInput)[i].plot_keywords);
                fprintf(file, "%s,", (*finalInput)[i].movie_imdb_link);
                fprintf(file, "%d,", (*finalInput)[i].num_user_for_reviews);
                fprintf(file, "%s,", (*finalInput)[i].language);
                fprintf(file, "%s,", (*finalInput)[i].country);
                fprintf(file, "%s,", (*finalInput)[i].content_rating);
                fprintf(file, "%d,", (*finalInput)[i].budget);
                fprintf(file, "%d,", (*finalInput)[i].title_year);
                fprintf(file, "%d,", (*finalInput)[i].actor_2_facebook_likes);
                fprintf(file, "%d,", (*finalInput)[i].imdb_score);
                fprintf(file, "%d,", (*finalInput)[i].aspect_ratio);
                fprintf(file, "%d\n", (*finalInput)[i].movie_facebook_likes);
                i++;
        }
        fclose(file);
}

char* findColumnType(const char* value){
        char *data_type = (char*)malloc(sizeof(char*)*30);
        //printf("value %s\n", value);
        //printf("findColumnType value %s\n", value);

        if(strcmp(value, "color") == 0) {
                strncpy(data_type, "string", 10);
                //data_type = 'int';
                return data_type;
        }
        else if(strcmp(value, "director_name")==0) {
                strncpy(data_type, "string", 10);
                //printf("value after director_name %s\n", value);
                return data_type;
        }
        else if(strcmp(value, "num_critic_for_reviews") == 0) {
                strncpy(data_type, "int", 10);
                return data_type;
        }
        else if(strcmp(value, "duration") == 0) {
                strncpy(data_type, "int", 10);
                return data_type;
        }
        else if(strcmp(value, "director_facebook_likes") == 0) {
                strncpy(data_type, "int", 10);
                return data_type;
        }
        else if(strcmp(value, "actor_3_facebook_likes") == 0) {
                strncpy(data_type, "int", 10);
                return data_type;
        }
        else if(strcmp(value, "actor_2_name") == 0) {
                strncpy(data_type, "string", 10);
                return data_type;
        }
        else if(strcmp(value, "actor_1_facebook_likes") == 0) {
                strncpy(data_type, "int", 10);
                return data_type;
        }
        else if(strcmp(value, "gross") == 0) {
                strncpy(data_type, "int", 10);
                return data_type;
        }
        else if(strcmp(value, "genres") == 0) {
                strncpy(data_type, "string", 10);
                return data_type;
        }
        else if(strcmp(value, "actor_1_name") == 0) {
                strncpy(data_type, "string", 10);
                return data_type;
        }
        else if(strcmp(value, "movie_title") == 0) {
                strncpy(data_type, "string", 10);
                return data_type;
        }
        else if(strcmp(value, "num_voted_users") == 0) {
                strncpy(data_type, "int", 10);
                return data_type;
        }
        else if(strcmp(value, "cast_total_facebook_likes") == 0) {
                strncpy(data_type, "int", 10);
                return data_type;
        }
        else if(strcmp(value, "actor_3_name") == 0) {
                strncpy(data_type, "string", 10);
                return data_type;
        }
        else if(strcmp(value, "facenumber_in_poster") == 0) {
                strncpy(data_type, "int", 10);
                return data_type;
        }
        else if(strcmp(value, "plot_keywords") == 0) {
                strncpy(data_type, "string", 10);
                return data_type;
        }
        else if(strcmp(value, "movie_imdb_link") == 0) {
                strncpy(data_type, "string", 10);
                return data_type;
        }
        else if(strcmp(value, "num_user_for_reviews") == 0) {
                strncpy(data_type, "int", 10);
                return data_type;
        }
        else if(strcmp(value, "language") == 0) {
                strncpy(data_type, "string", 10);
                return data_type;
        }
        else if(strcmp(value, "content_rating") == 0) {
                strncpy(data_type, "int", 10);
                return data_type;
        }
        else if(strcmp(value, "budget") == 0) {
                strncpy(data_type, "int", 10);
                return data_type;
        }
        else if(strcmp(value, "title_year") == 0) {
                strncpy(data_type, "int", 10);
                return data_type;
        }
        else if(strcmp(value, "actor_2_facebook_likes") == 0) {
                strncpy(data_type, "int", 10);
                return data_type;
        }
        else if(strcmp(value, "imdb_score") == 0) {
                strncpy(data_type, "int", 10);
                return data_type;
        }
        else if(strcmp(value, "aspect_ratio") == 0) {
                strncpy(data_type, "int", 10);
                return data_type;
        }
        else if(strcmp(value, "movie_facebook_likes") == 0) {
                strncpy(data_type, "int", 10);
                return data_type;
        }
        else{
                printf("WRONG INPUT_ABORT\n");
                strncpy(data_type, "invalid", 10);
                //return -1;
        }
}

void printRecord(Records* input, int s){

        int arraySize = s;
        int t=0;
        for(t=0; t<arraySize; t++) {
                printf("%d) %s \n", t+1, input[t].color);
        }
}
int findColumnIndex(const char* value){

        if(strcmp(value, "color") == 0) {
                return 0;
        }
        else if(strcmp(value, "director_name") == 0) {

                return 1;
        }
        else if(strcmp(value, "num_critic_for_reviews") == 0) {
                return 2;
        }
        else if(strcmp(value, "duration") == 0) {
                return 3;
        }
        else if(strcmp(value, "director_facebook_likes") == 0) {
                return 4;
        }
        else if(strcmp(value, "actor_3_facebook_likes") == 0) {
                return 5;
        }
        else if(strcmp(value, "actor_2_name") == 0) {

                return 6;
        }
        else if(strcmp(value, "actor_1_facebook_likes") == 0) {
                return 7;
        }
        else if(strcmp(value, "gross") == 0) {
                return 8;
        }
        else if(strcmp(value, "genres") == 0) {

                return 9;
        }
        else if(strcmp(value, "actor_1_name") == 0) {

                return 10;
        }
        else if(strcmp(value, "movie_title") == 0) {

                return 11;
        }
        else if(strcmp(value, "num_voted_users") == 0) {
                return 12;
        }
        else if(strcmp(value, "cast_total_facebook_likes") == 0) {
                return 13;
        }
        else if(strcmp(value, "actor_3_name") == 0) {

                return 14;
        }
        else if(strcmp(value, "facenumber_in_poster") == 0) {
                return 15;
        }
        else if(strcmp(value, "plot_keywords") == 0) {

                return 16;
        }
        else if(strcmp(value, "movie_imdb_link") == 0) {

                return 17;
        }
        else if(strcmp(value, "num_user_for_reviews") == 0) {
                return 18;
        }
        else if(strcmp(value, "language") == 0) {

                return 19;
        }
        else if(strcmp(value, "content_rating") == 0) {

                return 20;
        }
        else if(strcmp(value, "budget") == 0) {
                return 21;
        }
        else if(strcmp(value, "title_year") == 0) {
                return 22;
        }
        else if(strcmp(value, "actor_2_facebook_likes") == 0) {
                return 23;
        }
        else if(strcmp(value, "imdb_score") == 0) {

                return 24;
        }
        else if(strcmp(value, "aspect_ratio") == 0) {

                return 25;
        }
        else if(strcmp(value, "movie_facebook_likes") == 0) {
                return 26;
        }
        else{
                printf("WRONG INPUT_ABORT\n");
                // data_type = "invalid";
                return -1;
        }
}

int main(int argc, char **argv) {

        Records* input= (Records*)malloc(sizeof(Records)*8000);//will hold the data from each line

        if(argc != 3)
        {
                printf("You have input the wrong amount of arguments!");
                exit(1);
        }

        if(
                strcmp(argv[2], "color")!= 0
                && strcmp(argv[2], "director_name")!= 0
                && strcmp(argv[2], "num_critic_for_reviews")!= 0
                && strcmp(argv[2], "duration")!= 0
                && strcmp(argv[2], "director_facebook_likes")!= 0
                && strcmp(argv[2], "actor_3_facebook_likes")!= 0
                && strcmp(argv[2], "actor_2_name")!= 0
                && strcmp(argv[2], "actor_1_facebook_likes")!= 0
                && strcmp(argv[2], "gross")!= 0
                && strcmp(argv[2], "genres")!= 0
                && strcmp(argv[2], "actor_1_name")!= 0
                && strcmp(argv[2], "movie_title")!= 0
                && strcmp(argv[2], "num_voted_users")!= 0
                && strcmp(argv[2], "cast_total_facebook_likes")!= 0
                && strcmp(argv[2], "actor_3_name")!= 0
                && strcmp(argv[2], "facenumber_in_poster")!= 0
                && strcmp(argv[2], "plot_keywords")!= 0
                && strcmp(argv[2], "movie_imdb_link")!= 0
                && strcmp(argv[2], "num_user_for_reviews")!= 0
                && strcmp(argv[2], "language")!= 0
                && strcmp(argv[2], "country")!= 0
                && strcmp(argv[2], "content_rating")!= 0
                && strcmp(argv[2], "budget")!= 0
                && strcmp(argv[2], "title_year")!= 0
                && strcmp(argv[2], "actor_2_facebook_likes")!= 0
                && strcmp(argv[2], "imdb_score")!= 0
                && strcmp(argv[2], "aspect_ratio")!= 0
                && strcmp(argv[2], "movie_facebook_likes")!= 0) {
                printf("invalid parameter\n");
                exit(1);
        }

        char *line=(char*)malloc(sizeof(char)*3000);//this will hold the current line till its parsed
        char *second_line=(char*)malloc(sizeof(char)*3000);


        fgets(line,3000,stdin);//this is holding the header
        fgets(line,3000,stdin);
        strcpy(second_line,line);
        //printf("line to compare is %s\n",second_line);
        int i;
        int commas;
        int j=0;
        int s=0;
        char token[300];

        int k=0;


        char *data_type =(char*)malloc(sizeof(char)*10);
        int y;
        for(y =0; y<10; y++) {
                data_type[i] = '-';
        }

        char *boolean= (char*)malloc(sizeof(char)*10);
        strcpy(boolean,"f");
        //printf("boolean ineginnin %s\n",boolean);

        while(strlen(line)>1&& strcmp(boolean,"f")==0) {
                //  printf("i got into the first while loop \n");
                //  printf("line is %s\n",line);
                i=0;
                commas=0;

                while(i<strlen(line)) {

                        if(line[i]==',') {
                                commas++;
                                if(commas ==1)
                                {
                                        if(line[0]== 'C') {
                                                strcpy(input[s].color, "Color");
                                        }else if(line[1]== 'B' ) {
                                                strcpy(input[s].color, "Black and White");
                                        }else{
                                                strcpy(input[s].color, " ");
                                        }
                                }
                                switch (commas) {


                                case 2:
                                        // printf("this is director token %s\n",token);
                                        strncpy(input[s].director_name, token, 300);
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
                                        strncpy(input[s].actor_2_name, token, 300);
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
                                        strncpy(input[s].genres, token, 300);
                                        memset(token, 0, 300);//empties token array
                                        //printf("this is genre %s\n",input[s].genres);
                                        break;

                                case 11:
                                        strncpy(input[s].actor_1_name, token, 300);
                                        memset(token, 0, 300);//empties token array
                                        //printf("this is actor 1 name %s\n",input[s].actor_1_name);
                                        break;

                                case 12:
                                        while(!isdigit(line[i+1])) {



                                                if(line[i]== ',') {
                                                        //printf("i should make it in here after second I \n");
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


                                        strncpy(input[s].movie_title, token, 300);
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
                                        strncpy(input[s].actor_3_name, token, 300);
                                        memset(token, 0, 300);//empties token array
                                        //printf("this is actor 3 name %s\n",input[s].actor_3_name);
                                        break;

                                case 16:
                                        input[s].facenumber_in_poster=atoi(token);
                                        memset(token, 0, 300);//empties token array
                                        //printf("this is face num in poster %i\n",input[s].facenumber_in_poster);
                                        break;

                                case 17:
                                        strncpy(input[s].plot_keywords, token, 300);
                                        memset(token, 0, 300);//empties token array
                                        //printf("this is plot keywords %s\n",input[s].plot_keywords);
                                        break;

                                case 18:
                                        strncpy(input[s].movie_imdb_link, token, 300);
                                        memset(token, 0, 300);//empties token array
                                        //printf("this is imbd link %s\n",input[s].movie_imdb_link);
                                        break;

                                case 19:
                                        input[s].num_user_for_reviews=atoi(token);
                                        memset(token, 0, 300);//empties token array
                                        //printf("this is num user for review %i\n",input[s].num_user_for_reviews);
                                        break;

                                case 20:
                                        strncpy(input[s].language, token, 300);
                                        memset(token, 0, 300);//empties token array
                                        //printf("this is language %s\n",input[s].language);
                                        break;

                                case 21:
                                        strncpy(input[s].country, token, 300);
                                        memset(token, 0, 300);//empties token array
                                        //printf("this is language %s\n",input[s].country);
                                        break;

                                case 22:
                                        strncpy(input[s].content_rating, token, 300);
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
                                j=0;
                                i++;


                        }
                        else{

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
                                i++;

                        }

                }
                input[s].movie_facebook_likes=atoi(token);
                memset(token, 0, 300);//empties token array

                fgets(line,3000,stdin);

                //printf("line is %s\n",line);
                if(strcmp(line,second_line)==0) {
                        //  printf("i made it here\n");

                        strcpy(boolean,"t");
                        //printf("noolean is %s\n",boolean);
                }

                strcpy(second_line,line);


                s++;

        }

        //printf("i made it past storing\n");

        const char *param = argv[2];
        int indexToSortOn = findColumnIndex(param);

        data_type = findColumnType(param);

        free(line);
        int arraySize = s;
        /*printf("**UNSORTED**\n");
           printRecord(input, s);
           printf("**Printed**\n");*/
        mergeSort(&input,0,s-1,data_type,param);
        printf("\n\n**SORTED**\n");
        printRecord(input, s);
        printf("**Printed**\n");
        print_csv_file(&input, arraySize);


        return 0;
}
