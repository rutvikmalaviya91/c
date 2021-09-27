#include<stdio.h>

struct emp{
    
    char name[20];
    int emp_id;
    char department[20];
    
    struct date{
        
        int dd;
        int mm;
        int yy;
    }doj;
};

int main()
{
    struct emp emp[2], *e;
    e = emp;
    
    for(int i=1;i<3;i++)
    {
        printf("Enter emp[%d] name: ",i);
        scanf("%s",e[i].name);
        
        printf("Enter emp[%d] emp_id: ",i);
        scanf("%d",&e[i].emp_id);
        
        printf("Enter emp[%d] department: ",i);
        scanf("%s",e[i].department);
        
        printf("Enter emp[%d] joining date: ",i);
        scanf("%d",&e[i].doj.dd);
        
        printf("Enter emp[%d] joining month: ",i);
        scanf("%d",&e[i].doj.mm);
        
        printf("Enter emp[%d] joining year: ",i);
        scanf("%d",&e[i].doj.yy);
    }
    e++;
    for(int i=1;i<3;i++)
    {
        printf("\n\n");
        printf("Name of emp[%d]: %s \n",i,e->name);
        printf("Employee[%d] ID: %d \n",i,e->emp_id);
        printf("Department of emp[%d]: %s \n",i,e->department);
        printf("Employee[%d] joining date: %d/%d/%d\n",i,e->doj.dd,e->doj.mm,e->doj.yy);
        e++;
    }
}