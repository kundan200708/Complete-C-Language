/*
One Dimensional Array:-
                      --> It is also known as vector tha stores data in row major form at adjacent memory location.

                      -->A one-dimensional (1D) array is a collection of elements of the same data type stored in a single row or sequence.

(*)Syntax for 1-D Array:-
                       data_type array_name[size];
                                              |
                                Dimensional/pocket/script

(*)Declaration of 1-D array be like that :- As below

                              int arr[10];
                              int arr[4];
                              float arr[10];
                              double arr[8];
                              long int arr[9];
                              long double arr[4];

(*) Initialization of 1-D array:-
                     
                       int arr1[10]={10,20,50,8,31,5,32,32,80,90};
                       int arr2[5]= {45,45,131,12,1,2,12}; // here it will be error and compile error creates : too many initialization
                       int arr3[10]={12,20,405,62};
                       int arr4[]= {100,200,30,400,500,600,770,880};

(*) Inputing value in 1-D array:-
                       int arr[10];            scanf("%d",&arr[10]);
                       int ar[0];              scanf("%d",&arr[0]);
                       int ar[1];              scanf("%d",&arr[1]);
                       int ar[2];              scanf("%d",&arr[2]);
                            |                           |
                            |                           |
                            |                           |
                       int ar[9];              scanf("%d",&arr[9]);

(*) Printing data from 1-D array:- 
                                                   for (int  i = 0; i <10; i++)
                                                   {
                                                    printf("%d",&arr[i]);
printf("%d",arr[10]);                                                   }
printf("%d",arr[0]);
printf("%d",arr[1]);
printf("%d",arr[2]);
|
|
|
printf("%d",arr[9]);


*/
