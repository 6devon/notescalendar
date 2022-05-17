#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct date{
    int day;
    int month;
    int year;
    char note[256];
};

void show(struct date x[]){
    for(int i = 0 ; i < 365 ; i++){
        printf("%i.%i.%i\n", x[i].day, x[i].month, x[i].year);
    }
}

void note(char * note1, struct date notepp){
    strcpy(notepp.note,note1);
}

int main(){
    
char miesiac[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
struct date year[365];
int i = 0;  

for(int b = 1; b <= 12; b++){
    for(int a = 1; a<= miesiac[b -1]; a++){
        
        year[i].day = a;
        year[i].month = b;
        year[i].year = 2022;
       i++;
    }
}
    
   
struct date existing_date;
struct date existing_date2;
char notka[256];

int option;

printf("Press: \n'1' to enter a note\n'2' to find a note\n'3' to exit\n");
scanf("%i", &option);
while(1){
    if(option == 1){
        printf("Enter date (dd.mm.yyyy):\n");
        scanf("%i.%i.%i", &existing_date.day, &existing_date.month, &existing_date.year);
                
        printf("Enter a note:\n");    
        scanf("%s", notka);
        strcpy(existing_date.note,notka);

        for(int h = 0; h < 366; h++){
            if(year[h].day == existing_date.day && year[h].month == existing_date.month && year[h].year == existing_date.year){
                note(existing_date.note, year[h]);
            }
        } 
    } else if(option == 2){
        printf("Enter date (dd.mm.yyyy):\n");
        scanf("%i.%i.%i", &existing_date2.day, &existing_date2.month, &existing_date2.year);
        for(int h = 0; h < 366; h++){
            if(year[h].day == existing_date2.day && year[h].month == existing_date2.month && year[h].year == existing_date2.year){
                printf("%s", year[h].note);
            }
        }
        printf("%s", existing_date.note);
        printf("\n\n");
    } else if(option ==3){
        break;
    } else {
        printf("Invalid argument.\n\n");
    }
    printf("Press: \n'1' to enter a note\n'2' to find a note\n'3' to exit\n");
    scanf("%i", &option);
    }

    
    return 0;
}