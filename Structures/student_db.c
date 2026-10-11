#include<stdio.h>
#include<string.h>
struct student_database{
    int id;
    char name[45];
    char address[60];
    char mobile_no[15];
};
// 1.Add_details
void Add_details(struct student_database db[],int *contact_count);
// 2.search_details
void search_details(struct student_database db[],int *contact_count);
// 3.list_details
void List_details(struct student_database db[],int *contact_count);
// 4.Validation of mobile number
int mobile_validate(struct student_database db[],int *contact_count);

int  main()
{
    struct student_database db[3];
    
    printf("----- Hey hii You are in our Student Database ------\n");
    char to_con;    // to continue furrther process...
    
    int contact_count = 0; // to count the number of contacts added in the database
    do{
        printf(" 1.Add Details\n 2.Search Details\n 3.list  Details\n 4.Exit\n");

        int choice;          // for choicing which function to execute..
        
        printf("What are you going to do : ");
        scanf("%d",&choice);

        switch(choice){
            case 1:
                Add_details(db,&contact_count);
                break;

            case 2:
                search_details(db,&contact_count);
                break;

            case 3:
                List_details(db,&contact_count);
                break;

            case 4:
                 printf("------I hope you checked and Updated.... Thankyou!!! -----\n");
                 return 0;
        }

        printf("Do you want to continue!? (y/n) : ");
        scanf(" %c",&to_con);
    } while(to_con != 'n');

    printf("------I hope you checked and Updated.... Thankyou!!! -----\n");
}


void Add_details(struct student_database db[],int *contact_count){
    printf("Enter student id: ");
    scanf("%d",&db[*contact_count].id);
    
    printf("Enter the name : ");
    
    scanf(" %[^\n]",db[*contact_count].name);

    printf("Enter address: ");
    getchar();
    scanf("%[^\n]",db[*contact_count].address);

    int result = 0;
    
    do{
    printf("Enter mobile number: ");
    getchar();
    scanf("%[^\n]",db[*contact_count].mobile_no);

    result = mobile_validate(db,contact_count);

    if(result == 0)
    printf("Invalid Mobile number !!! Enter valid mobile number\n");
    }while(result ==0);

    (*contact_count) ++;
    
}

int mobile_validate(struct student_database db[],int *contact_count){
    int length = strlen(db[*contact_count].mobile_no);

    int check = 1;
    for(int i=0;i<length;i++){
        if(db[*contact_count].mobile_no[i] < '0' ||db[*contact_count].mobile_no[i] >'9'){
            check = 0;
            break;
        }
    }
    if(length == 10 && check == 1)
    return 1;

    else 
    return 0;
}

void search_details(struct student_database db[],int *contact_count){
    int search_id;
    printf("Enter the id that you want to search: ");
    scanf("%d",&search_id);
    int found = 0;
    for(int i=0;i<*contact_count;i++){
        
        if (db[i].id == search_id){
            found = 1;
            printf("Id : %d\n name: %s\n address:%s\n mobile_no: %s\n",db[i].id,
               db[i].name,db[i].address,
               db[i].mobile_no);
            break;
        }
    }
    if(found == 0)
    printf("Student not found\n");
}

void List_details(struct student_database db[],int *contact_count){
    for(int i=0;i<*contact_count;i++){
        printf(" id : %d\n name:%s\n address: %s\n mobile_no: %s\n",db[i].id,
               db[i].name,db[i].address,
               db[i].mobile_no);
        printf("------------------------------\n");
    }
}
