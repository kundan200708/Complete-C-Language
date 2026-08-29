/* WAP for develop a marksheet for 25 student BCA 2nd year by using the struct */

#include <stdio.h>
#include <string.h>

struct Student {
    int rollNo;
    char name[50];
    int marks[6]; // C, DSA, NetWorking, English, Hindi, Math
    float totalMarks;
    float perc;
    char grade;
};

void main(){
    struct Student StudentArray[25];

    int marks[25][6] = {
        {78, 65, 89, 54, 92, 71},
        {84, 73, 68, 90, 77, 59},
        {56, 88, 74, 69, 81, 63},
        {91, 52, 85, 77, 60, 88},
        {67, 79, 58, 84, 72, 95},
        {73, 91, 64, 70, 86, 55},
        {88, 62, 90, 81, 69, 74},
        {59, 75, 82, 66, 94, 68},
        {77, 83, 71, 93, 58, 80},
        {92, 57, 76, 85, 73, 61},
        {64, 89, 53, 78, 87, 72},
        {81, 70, 92, 60, 75, 84},
        {69, 94, 66, 72, 83, 57},
        {85, 61, 79, 88, 54, 90},
        {74, 82, 67, 59, 91, 76},
        {58, 87, 93, 71, 64, 85},
        {90, 68, 55, 82, 79, 73},
        {72, 95, 84, 63, 70, 66},
        {83, 74, 61, 89, 92, 58},
        {65, 80, 77, 56, 85, 94},
        {94, 59, 88, 75, 67, 81},
        {60, 86, 72, 91, 78, 69},
        {79, 67, 83, 64, 90, 74},
        {71, 93, 59, 87, 62, 82},
        {87, 76, 91, 73, 68, 60}
    };

    char name[25][40] = {
        "Aarav Sharma",
        "Vivaan Patel",
        "Aditya Singh",
        "Vihaan Gupta",
        "Arjun Mehta",
        "Sai Reddy",
        "Reyansh Verma",
        "Krishna Nair",
        "Ishaan Malhotra",
        "Rohan Das",
        "Kabir Joshi",
        "Aryan Kapoor",
        "Yash Thakur",
        "Dhruv Bansal",
        "Siddharth Rao",
        "Ananya Iyer",
        "Priya Menon",
        "Sneha Kulkarni",
        "Riya Choudhary",
        "Meera Pillai",
        "Aditi Mishra",
        "Pooja Saxena",
        "Kavya Shetty",
        "Neha Agrawal",
        "Tanvi Desai"
    };

    for(int i = 0; i < 25; i++){
        
        //roll no
        StudentArray[i].rollNo = i + 1;

        //name
        for(int j = 0; j <= 1; j++){
            strcpy(StudentArray[i].name,name[i]);
        }

        //marks
        float t = 0;
        for(int k = 0; k < 6; k++){
            t += marks[i][i];
        }
        StudentArray[i].totalMarks = t;
        
        //total
        StudentArray[i].perc = (StudentArray[i].totalMarks/600)*100;

        //grade
        if(StudentArray[i].perc >= 80){
            StudentArray[i].grade = 'A';
        } else if(StudentArray[i].perc < 80 && StudentArray[i].perc >= 70){
            StudentArray[i].grade = 'B';
        } else if(StudentArray[i].perc < 70 && StudentArray[i].perc >= 60){
            StudentArray[i].grade = 'C';
        } else if(StudentArray[i].perc < 60 && StudentArray[i].perc >= 50){
            StudentArray[i].grade = 'D';
        } else {
            StudentArray[i].grade = 'F';
        }
    }

    printf("\n index|  name |  marks |   grade\n");
    //print
    for(int i = 0; i <= 25; i++){
        printf("%d\t",StudentArray[i].rollNo);

        printf("%s \t", StudentArray[i].name);

        printf("%.2f \t", StudentArray[i].totalMarks);

        printf("%c \t", StudentArray[i].grade);
        printf("\n");

    }
    
    
}