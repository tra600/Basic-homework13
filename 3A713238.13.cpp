#include<stdio.h>  

#include<iostream> 


int main()

{

    int sex,age; 

    printf("�p�G�k�ʽп�J1,�k�ʽп�J2�C\n"); 

    printf("�п�J�ʧO�M�~�֡G");

 	scanf("%d%d",&sex,&age); 

    if( sex==1 && age>=18 )  

    {

    printf("�A�i�H���B\n");

    }

    if( sex==1 && age<18 )

    {

    printf("�A���i�H���B\n");

    }

    if( sex==2 && age>=16 )

    {

    printf("�p�i�H���B\n");

    }

    if( sex==2 && age<16 )

    {

    printf("�p���i�H���B\n");

    }

    return 0; 

}
