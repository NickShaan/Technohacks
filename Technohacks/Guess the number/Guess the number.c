#include<stdio.h>
#include<stdlib.h>
void main()
{
    int n,c,r,v,u,i;
    char t,name[100];
    printf("Guess the Number\n");
    printf("Press Enter to Start\n");
    scanf("%c",&t);

    printf("Press 1 for Rules\nPress 2 for starting the game\n");
    scanf("%d",&c);

    if(c==1){
        goto rules;
    }
    else if(c==2)
    {
        goto game;

    }else{
        printf("\nEnter correct value");
    }
    rules:
        printf("\n1.You have to Guess the Number from 1 to 100\n2.You have only 10 chance\n");
        printf("3.If you want help then press 0 you will get a hint\n4.Value is integer\n");
        printf("\nPress 1 to exit the game\nPress 2 to start the game\n");
        scanf("%d",&n);
        if(n==1){
            goto exit;
        }
        else if(n==2){
            goto game;

        }else{
            printf("\nEnter correct value");
        }

    game:
        r=10,v=69;
        printf("\nEnter Your name\n");
        scanf("%99s",name);

        for(i=0;i<r;i++){

            printf("\nEnter the number:");
            scanf("%d",&u);
            if(u==v){
                printf("\nCongratulation %s you won the game in %d chances",name,i+1);
                exit(0);
            }
            if(u==0){
                printf("Hint:Number is between 60-70\n");
                i=i-1;
            }

            else if(u>v){
                printf("Number is little low");
                printf("\nNow you have only %d round left\n",r-(i+1));
            }
            else if(u<v){
                printf("Number is little high");
                printf("\nNow you have only %d round left\n",r-(i+1));
            }
            else{
                printf("\nEnter correct value");
            }
            if(i==9){
                printf("\nGAME OVER\n");
            }


        }


    exit:
        printf("Thank You for your time\n");
        exit(0);


}
