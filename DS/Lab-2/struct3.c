#include <stdio.h>
int main()
{
    struct student{
    char Name[10];
    int USN;
    float marks;
    };
    struct student s[5];
    for (i=0;i<5;i++){
        printf("Enter Name,USN and Marks:");
        scanf("%s %d %f",s[i].Name,&s[i].USN,&s[i].Marks);
    }
    printf("\nStudent Details\n");
    for(i=0;i<5;i++){
        printf("\nStudent %d:\n",i+1);
        printf("Name:%s\n",s[i].Name);
        printf("USN:%d\n",s[i].USN);
        printf("Marks:%.2f\n",s[i].marks);
    }



    return 0;
}

