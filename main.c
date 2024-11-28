#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(0));
    int user, cpu, userScore, cpuScore;
    while(1){
        printf("az adad 1 ta 3 entekhab kon: 1=sang, 2=kaghaz, 3=gheychi\n");
        scanf("%d", &user);
        cpu = (rand()%3) + 1;
        switch(cpu){
            case 1:
                printf("cpu : sang\n");
                break;
            case 2:
                printf("cpu : kaghaz\n");
                break;
            case 3:
                printf("cpu : gheychi\n");
                break;
        }
        
        if (user == cpu){
            printf("tasavi\n");
            userScore++;
            cpuScore++;
        }
        
        if(user == cpu + 1 || user == cpu - 2){
            printf("shoma barande shodid!\n");
            userScore++;
        }
        
        if(cpu == user + 1 || cpu == user - 2){
            printf("cpu barande shod!\n");
            cpuScore++;
        }
        
        printf("emtiaz shoma : %d\n", userScore);
        printf("emtiaz cpu : %d\n\n", cpuScore);
        
        if(userScore >= 5 && userScore - cpuScore >= 2){
            printf("user barande shod\n");
            break;
        }
        
        if(cpuScore >= 5 && cpuScore - userScore >= 2){
            printf("cpu barande shod\n");
            break;
        }
    }
}
