/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file <Add File Name> 
 * @brief <Add Brief Description Here >
 *
 * <Add Extended Description Here>
 *
 * @author <Add FirsName LastName>
 * @date <Add date >
 *
 */



#include <stdio.h>
#include "stats.h"
#include<math.h>

/* Size of the Data Set */
#define SIZE (40)

/*****************************************************************************
Following funcion is to print array on scarren

/*****************************************************************************/
void print_array(unsigned char test[],unsigned int SIZE1){
int i=0;
printf("\nGiven array----------------------- :");
for (i=0;i<SIZE1;i++)
{printf("\n  %d->%d",i,test[i]);}
} 

/*****************************************************************************
Following function is to sort array in descending order
/*****************************************************************************/

void sort_array(unsigned char test[],unsigned int SIZE1)
{int i=0;
int j=0;
unsigned char temp = 0;

 for(i=0;i<SIZE1;i++)
 { 
   for(j=0;j<(SIZE1-1);j++)
   {
    if (test[j]>test[j+1])
      {
         temp = test[j];
         test[j] = test[j+1];
         test[j+1] = temp;
      }        
   }
 
 }

}

/*****************************************************************************
Following function is to find median value of dataset
/*****************************************************************************/

unsigned char find_median(unsigned char test[],unsigned int SIZE1)
{
unsigned char median = 0;

if(SIZE1%2 ==0)
{ median = (test[SIZE1/2]+test[(SIZE1/2)-1])/2;}
else   
  { median = test[(SIZE1/2)+1];}
return median;
}

/*****************************************************************************
Following function is to find mean value of dataset
/*****************************************************************************/

unsigned char find_mean(unsigned char test[],unsigned int SIZE1)
{unsigned char mean =0;
int sum = 0;
int i =0;
 for(i=0;i<SIZE1;i++)
  { sum = sum+test[i];}
 mean = sum/SIZE1;
return mean;
}

/*****************************************************************************
Following function is to find max value of dataset
/*****************************************************************************/
unsigned char find_maximum(unsigned char test[])
{ unsigned char max =0;
 max = test[0];
return max;
}


/*****************************************************************************
Following function is to find min value of dataset
/*****************************************************************************/

unsigned char find_minimum(unsigned char test[],unsigned int SIZE1)
{unsigned  char min =0;
 min = test[SIZE1-1];
return min;
}





/*****************************************************************************
Following function main fucntion
/*****************************************************************************/


void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
void print_statistics(){

printf("\nMedian value of dataset :%d",find_median(test, SIZE));
printf("\nMean value of dataset :%d",find_mean(test, SIZE));
printf("\nMax value of dataset :%d",find_maximum(test));
printf("\nMin value of dataset :%d\n",find_minimum(test, SIZE));
}
  /* Statistics and Printing Functions Go Here */
print_array(test,SIZE);
sort_array(test,SIZE);
/*print_array(test,SIZE);*/
print_statistics();

}




