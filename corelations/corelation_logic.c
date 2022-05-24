#include <stdio.h>
#include <conio.h>
#include <math.h>
main()
{
    //cor arry store corelation betw orginal signal arry and shift_signal arry when shift is applied 
    int signal[3][2]={{0,2},{1,-1},{2,1}}, shift_signal[3][2]={{0,-1},{1,1},{2,2}},
    temp_shift[3][2], shift[1]={-2}, cor[3];

    //define signal and shit_signal
    int loop1=0,loop2=0,no_row=3,no_shift=1,shift_val=0,k=0,temp=0, rows=0,cols=0;
    getch();
    printf("the signal is :");
        for(rows=0;rows<no_row;rows++)
    {   for(cols=0;cols<2;cols++)
            {
     
         printf(" [%d]",signal[rows][cols]);
         //printf("[%d]",shift_signal[i][j]);
     }    
     }
    printf("the shift signal is :");
    for(rows=0;rows<no_row;rows++)
    {   for(cols=0;cols<2;cols++)
            {
            temp_shift[rows][cols]=shift_signal[rows][cols];
         //printf(" [%d]",signal[i][j]);
         printf("[%d]",shift_signal[rows][cols]);
     }    
     }
    //Selecting the time shift for shift_signal
    printf("the shift is :");
    for(rows=0;rows<no_shift;rows++)
    {
        printf("%d,",shift[rows]);
    }
    
    for (loop1=0;loop1<no_shift;loop1++)
{   
    shift_val=shift[loop1];//Selecting the time shift for shift_signal
    for(rows=0;rows<no_row;rows++) //to access for shift_signal arry
    {
       temp_shift[rows][0]=(shift_signal[rows][0]+shift_val); // h[m − n] accessing only x axis value where as y axis is constant
       
     }
}
printf("shift_val %d",shift_val);
printf("the temp_shift signal is :");
    for(rows=0;rows<no_row;rows++)
    {   for(cols=0;cols<2;cols++)
            {
     
         //printf(" [%d]",signal[i][j]);
         printf("[%d]",temp_shift[rows][cols]);
     }    
     }
}

