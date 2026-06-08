#include <stdio.h>
#include <stdlib.h>



int main()
{

    //AS20250443


    int mathematicsMarks,scienceMarks,englishMarks,totalMarks;
    float averageMarks;
    char grade;

    printf("Input Mathematics marks : ");
    scanf("%d",&mathematicsMarks);
    printf("Input Science marks : ");
    scanf("%d",&scienceMarks);
    printf("Input English  marks : ");
    scanf("%d",&englishMarks);

    totalMarks = mathematicsMarks+scienceMarks+englishMarks;
    averageMarks = totalMarks/3.0;

    if(averageMarks>=80.0){
        grade = 'A';
    }else if(averageMarks>=70.0){
        grade = 'B';
    }else if(averageMarks>=60.0){
        grade = 'C';
    }else if(averageMarks>=50.0){
        grade = 'D';
    }else{
        grade = 'F';
    }

    printf("Total : %d\n",totalMarks);
    printf("Average : %.2f\n",averageMarks);
    printf("Grade : %c\n",grade);
    printf("Result : ");

    if(mathematicsMarks>=40&&scienceMarks>=40&&englishMarks>=40){
        printf("PASS\n\n");
    }else{
        printf("FAIL\n\n");
    }


    return 0;
}
