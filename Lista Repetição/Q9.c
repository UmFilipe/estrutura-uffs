#include <stdio.h>

void main(){
    int timeA = 0, timeB = 0, timeC = 0, timeD = 0, golsTime1 = 0, golsTime2 = 0;
    char time1 = 'a', time2;

    while (time1 == 'a' || time1 == 'b' || time1 == 'c' || time1 == 'd'){
        printf("Escolha o primeiro time: \n");
        scanf(" %c", &time1);

        if (time1 != 'a' && time1 != 'b' && time1 != 'c' && time1 != 'd'){
            break;
        }
        printf("Escolha o segundo time: \n");
        scanf(" %c", &time2);

        printf("Insira os gols do primeiro time:\n");
        scanf("%d", &golsTime1);

        printf("Insira os gols do segundo time:\n");
        scanf("%d", &golsTime2);

        if (time1 == 'a' && time2 == 'b'){
            if (golsTime1 > golsTime2){
                timeA += 3;
            } else if(golsTime2 > golsTime1){
                timeB += 3;
            } else if(golsTime1 == golsTime2){
                timeA += 1;
                timeB += 1;
            }
        }

        if (time1 == 'b' && time2 == 'a'){
            if (golsTime1 > golsTime2){
                timeB += 3;
            } else if(golsTime2 > golsTime1){
                timeA += 3;
            } else if(golsTime1 == golsTime2){
                timeA += 1;
                timeB += 1;
            }
        }

        if (time1 == 'a' && time2 == 'c'){
            if (golsTime1 > golsTime2){
                timeA += 3;
            } else if(golsTime2 > golsTime1){
                timeC += 3;
            } else if(golsTime1 == golsTime2){
                timeA += 1;
                timeC += 1;
            }
        }

        if (time1 == 'c' && time2 == 'a'){
            if (golsTime1 > golsTime2){
                timeC += 3;
            } else if(golsTime2 > golsTime1){
                timeA += 3;
            } else if(golsTime1 == golsTime2){
                timeA += 1;
                timeC += 1;
            }
        }

        if (time1 == 'a' && time2 == 'd'){
            if (golsTime1 > golsTime2){
                timeA += 3;
            } else if(golsTime2 > golsTime1){
                timeD += 3;
            } else if(golsTime1 == golsTime2){
                timeA += 1;
                timeD += 1;
            }
        }

        if (time1 == 'd' && time2 == 'a'){
            if (golsTime1 > golsTime2){
                timeD += 3;
            } else if(golsTime2 > golsTime1){
                timeA += 3;
            } else if(golsTime1 == golsTime2){
                timeA += 1;
                timeD += 1;
            }
        }

        if (time1 == 'b' && time2 == 'c'){
            if (golsTime1 > golsTime2){
                timeB += 3;
            } else if(golsTime2 > golsTime1){
                timeC += 3;
            } else if(golsTime1 == golsTime2){
                timeB += 1;
                timeC += 1;
            }
        }

        if (time1 == 'c' && time2 == 'b'){
            if (golsTime1 > golsTime2){
                timeC += 3;
            } else if(golsTime2 > golsTime1){
                timeB += 3;
            } else if(golsTime1 == golsTime2){
                timeB += 1;
                timeC += 1;
            }
        }

        if (time1 == 'b' && time2 == 'd'){
            if (golsTime1 > golsTime2){
                timeB += 3;
            } else if(golsTime2 > golsTime1){
                timeD += 3;
            } else if(golsTime1 == golsTime2){
                timeB += 1;
                timeD += 1;
            }
        }

        if (time1 == 'd' && time2 == 'b'){
            if (golsTime1 > golsTime2){
                timeD += 3;
            } else if(golsTime2 > golsTime1){
                timeB += 3;
            } else if(golsTime1 == golsTime2){
                timeB += 1;
                timeD += 1;
            }
        }

        if (time1 == 'c' && time2 == 'd'){
            if (golsTime1 > golsTime2){
                timeC += 3;
            } else if(golsTime2 > golsTime1){
                timeD += 3;
            } else if(golsTime1 == golsTime2){
                timeC += 1;
                timeD += 1;
            }
        }

        if (time1 == 'd' && time2 == 'c'){
            if (golsTime1 > golsTime2){
                timeD += 3;
            } else if(golsTime2 > golsTime1){
                timeC += 3;
            } else if(golsTime1 == golsTime2){
                timeD += 1;
                timeC += 1;
            }
        }

    }

    if (timeA > timeB && timeA > timeC && timeA > timeD){
        printf("Campeao: A\n");
    } else if(timeB > timeA && timeB > timeC && timeB > timeD){
        printf("Campeao: B\n");
    } else if(timeC > timeA && timeC > timeB && timeC > timeD){
        printf("Campeao: C\n");
    } else if(timeD > timeA && timeD > timeB && timeD > timeC){
        printf("Campeao: D\n");
    } else {
        printf("Campeao: Houve empate\n");
    }

    printf("Time A: %d\n", timeA);
    printf("Time B: %d\n", timeB);
    printf("Time C: %d\n", timeC);
    printf("Time D: %d\n", timeD); 

}