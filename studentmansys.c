#include<stdio.h>
#include<stdbool.h>
bool loop = true , checker = true;
int input_id , i = 0 , j = 0 , input_pass , count = 1 , stuexit , admininid, admininpass , adminid = 501 , adminpass = 500 , mathsin , sciencein , javain;
int id[7] = {601 , 602 , 603 , 604 , 605 , 606 ,607 } , pass[7] = {101 ,202, 303 , 404 , 505 , 606 , 707 } ;
int maths[7] = {12 , 41 , 72 , 89 , 98 , 22 , 67} , science[7]= {100 , 44 , 78 , 54 , 78 , 45 , 65 } , java[7]= {50 , 50 , 50 , 60 , 62 , 60  , 70};

void result(){
    int subjects [3] = {maths[i] , science[i] ,java[i]};
    char* subjectname[3] ={" maths" , "science" , "java"};

    	for(int j = 0 ; j < 3 ; j++){
	        if(subjects[j]<=40){
	       printf(" %s = %d = fail \n" , subjectname[j],subjects[j]);
	       }else{
	            printf(" %s = %d = pass \n" , subjectname[j],subjects[j]);
	       }
	       }
   
    int total = maths[i] + science[i] + java[i];
    printf("total marks of the student = %d/300\n" , total);

    double percentage =(double)total/300*100;

    printf("percentage = %2f\n",percentage);


    if(maths[i]<= 40||science[i]<= 40||java[i] <= 40){
        printf(" overall result is fail\n");
    }else{
        printf("overall result is pass\n");
    }
}

markschecker(){
    for(i = 0 ; i < 7 ; i++){

            if(input_id == id[i] && input_pass == pass[i] ){
            checker = false;
            result();

            printf("press 1 to exit\n");
            scanf("%d",&stuexit);
            if(stuexit==1){
                loop =false;
            }
            }

        }
}

   


void stuportal(){
        studentportalpoint:
        printf("enter student id\n");
        scanf("%d",&input_id);
        printf("enter password\n");
        scanf("%d",&input_pass);

        for(i = 0 ; i < 7 ; i++){

         markschecker();
        }     if(checker == true){
           
                 if(count == 3){
          printf("login locked , contact the admin\n");
            loop = false;
            
             }
                else{count++;
                goto studentportalpoint;
                }
            
        }
            
        } 
        
        
        



void mathfun(){
    printf("enter value for maths in 601 , 602 , 603... order\n");
        for(int i = 0 ; i<7 ; i++ ){
                scanf("%d", &maths[i]);
         }
        for(int j = 0 ; i<7 ; i++){
                 printf("\nid no %d = %d \n", id[i] ,maths[i] );
             }
        } 

    
void sciencefun(){
     printf("enter value for maths in 601 , 602 , 603... order\n");
            for(int i = 0 ; i<7 ; i++ ){
                scanf("%d", &science[i]);
            }
            for(int i = 0 ; i<7 ; i++){
                 printf("\nid no %d = %d \n", id[i] ,science[i] );
             }
}

void javafun(){
    printf("enter value for maths in 601 , 602 , 603... order\n");
            for(int i = 0 ; i<7 ; i++ ){
                scanf("%d", &java[i]);
            }
            for(int i = 0 ; i<7 ; i++){
                 printf("\nid no %d = %d \n", id[i] ,java[i] );
             }
}

void adminportal(){
    adminportalpoint:
    printf("enter admin id \n");
    scanf("%d" , &admininid);
    printf("enter admin pass \n");
    scanf("%d" , &admininpass);

    if(adminid == admininid && admininpass == adminpass){ 
        int ad_main_choice ,adchoice;   
        printf("Type 1 to enter marks in maths \n Type 2 to enter marks in science \n Type 3 to enter marks in java\n");
        scanf("%d",&adchoice);

        switch(adchoice){
            case 1:
                mathfun();
                break;

            case 2:
                sciencefun();
                break;

            case 3:
            javafun();
            break;

     }}else{
           if(checker == true){
           
                 if(count == 3){
          printf("login locked , contact the admin\n");
            loop = false;
            
             }
                else{count++;
                goto adminportalpoint;
                }
        }
         }}
        

int main(){

    int choice;

    while(loop){
      printf("type 1 if you are a admin and any other number if you are a student\n");
      scanf("%d",&choice);

        if(choice == 1){
        adminportal();}
        else {stuportal();}

    }

    return 0;
    }
