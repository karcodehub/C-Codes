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

_________________________________________________________________________________________________________________________Initialised array_______________

}****************************************************************************************************************************
#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
    //cor arry store corelation betw orginal signal arry and shift_signal arry when shift is applied 
    int signal[3][2]={{0,2},{1,-1},{2,1}}, shift_signal[3][2]={{0,-1},{1,1},{2,2}},
    temp_shift[3][2], shift[1]={-2}, cor[1]={0};

    //define signal and shit_signal
    int loop1=0,loop2=0,no_row=3,no_shift=1,shift_val=0,k=0,temp_shift_row_val=0, rows=0,cols=0;
    getch();
    printf("the signal is :");
    for(rows=0;rows<no_row;rows++) {
        for(cols=0;cols<2;cols++) {
         printf(" [%d]",signal[rows][cols]);
        }    
    }
    printf("the shift signal is :");
    for(rows=0;rows<no_row;rows++) {
        for(cols=0;cols<2;cols++) {
            temp_shift[rows][cols]=shift_signal[rows][cols];
            printf("[%d]",shift_signal[rows][cols]);
        }    
    }
    //Selecting the time shift for shift_signal
    printf("the shift is :");
    for(rows=0;rows<no_shift;rows++) {
        printf("%d,",shift[rows]);
    }
    for (loop1=0;loop1<no_shift;loop1++) {   
        shift_val=shift[loop1];//Selecting the time shift for shift_signal
        //to access for shift_signal arry
        for(rows=0;rows<no_row;rows++) {
       temp_shift[rows][0]=(shift_signal[rows][0]+shift_val); // h[m − n] accessing only x axis value where as y axis is constant
       }
    }
    printf("shift_val %d\n",shift_val);
    printf("\n\n***********************\n\n");
    printf("\nthe temp_shift signal is :\n");
    for(rows=0;rows<no_row;rows++) {
        for(cols=0;cols<2;cols++) {
            printf("[%d]",temp_shift[rows][cols]);
        }    
    }
    printf("\n\n***********************\n\n");
    printf("\n\n******************* no_row : [%d] :\n\n", no_row);
    for (loop1=0;loop1<no_row;loop1++) {
        temp_shift_row_val=temp_shift[loop1][0];
        for(rows=0;rows<no_row;rows++) {
	        if (temp_shift_row_val==signal[rows][0]) {
                if(loop1 < 2) {
                    cor[0]= (temp_shift[loop1][loop1]*signal[rows][1]); //s[m] · h[m − n] accessing only y axis value to multiply
                }
                else {
                    cor[0]= (temp_shift[loop1][loop1-1]*signal[rows][1]); 
                }
            }
	    }
    }

    for(int i = 0 ; i < 1 ; i++) { 
        printf("\nCor[%d] is [%d]\n", i, cor[i]);
    }
}

___________________________________________________good for Negative____________________________________________________

#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
    //cor arry store corelation betw orginal signal arry and shift_signal arry when shift is applied 
    int signal[3][2]={{0,2},{1,-1},{2,1}}, shift_signal[3][2]={{0,-1},{1,1},{2,2}},
    temp_shift[3][2], shift[1]={-2}, cor=0;

    //define signal and shit_signal
    int loop1=0,corelation=0,no_row=3,no_shift=1,shift_val=0,match=0,temp_shift_row_val=0, rows=0,cols=0;
    getch();
    printf("the signal is :\n");
    for(rows=0;rows<no_row;rows++) {
        for(cols=0;cols<2;cols++) {
         printf(" [%d]",signal[rows][cols]);
        }    
    }
    printf("\nthe shift signal is :\n");
    for(rows=0;rows<no_row;rows++) {
        for(cols=0;cols<2;cols++) {
            temp_shift[rows][cols]=shift_signal[rows][cols];
            printf("[%d]",shift_signal[rows][cols]);
        }    
    }
    printf("\nthe shift signal is temp_shift[2][2-1]:%d\n",temp_shift[2][(2-1)]);
    //Selecting the time shift for shift_signal
    printf("the shift is :\n");
    for(rows=0;rows<no_shift;rows++) {
        printf("%d,",shift[rows]);
    }
    for (loop1=0;loop1<no_shift;loop1++) {   
        shift_val=shift[loop1];//Selecting the time shift for shift_signal
        //to access for shift_signal arry
        for(rows=0;rows<no_row;rows++) {
       temp_shift[rows][0]=(shift_signal[rows][0]+shift_val); // h[m − n] accessing only x axis value where as y axis is constant
       }
    }
    printf("shift_val %d\n",shift_val);
    printf("\n\n***********************\n\n");
    printf("\nthe temp_shift signal is :\n");
    for(rows=0;rows<no_row;rows++) {
        for(cols=0;cols<2;cols++) {
            printf("[%d]",temp_shift[rows][cols]);
        }    
    }
    printf("\n\n***********************\n\n");
    printf("\n\n******************* no_row : [%d] :\n\n", no_row);
    for (loop1=0;loop1<no_row;loop1++) {
        temp_shift_row_val=temp_shift[loop1][0];
        for(rows=0;rows<no_row;rows++) {
            printf("\nIn row=%d, %d is comparing %d\n",loop1,temp_shift_row_val,signal[rows][0] );
	        if (temp_shift_row_val==signal[rows][0]) {
                if(temp_shift_row_val<0)
                {
                if(loop1 < 2) {
                    printf("val of cor before multiplication is %d",cor);
                    cor+= (temp_shift[loop1][loop1]*signal[rows][1]); //s[m] · h[m − n] accessing only y axis value to multiply
                    printf("\nloop1=%d, temp_shift[loop1][loop1]=%d and signal[rows][1]=%d#  cor=%d",loop1,temp_shift[loop1][loop1],signal[rows][1],cor);
                }
                    else {//sub1 if
                    printf("\ntemp_shift[loop1-1=%d][loop=%d]=%d and signal[rows][1]=%d ==%d (cor=%d)",loop1,(loop1-1),temp_shift[(loop1)][loop1-1],signal[rows][1],(temp_shift[loop1][(loop1-1)]*signal[rows][1]),cor);
                    cor= cor +  (temp_shift[loop1][(loop1-1)]*signal[rows][1]);
                    printf("val of cor after multiplication is %d",cor);  
                    }
                    
                }
                else //main if
                    {
                        if(loop1 < 2) {
                    printf("\n Shift is Positive no. \n val of cor before multiplication is %d",cor);
                    cor+= (temp_shift[loop1][loop1+1]*signal[rows][1]); //s[m] · h[m − n] accessing only y axis value to multiply
                    printf("\nloop1=%d, temp_shift[loop1][loop1+1]=%d and signal[rows][1]=%d#  cor=%d",loop1,temp_shift[loop1][loop1+1],signal[rows][1],cor);
                }
                    else {//sub2 if
                    printf("\ntemp_shift[loop1-1=%d][loop=%d]=%d and signal[rows][1]=%d ==%d (cor=%d)",loop1,(loop1-1),temp_shift[(loop1)][loop1-1],signal[rows][1],(temp_shift[loop1][(loop1-1)]*signal[rows][1]),cor);
                    cor= cor +  (temp_shift[loop1][(loop1-1)]*signal[rows][1]);
                    printf("val of cor after multiplication is %d",cor);  
                    }
                    
                }
            }
	    }
    }

    for(int i = 0 ; i < no_shift ; i++) { 
         //corelation += cor[i];
       printf("\nCor[%d] is [%d]\n",shift[0], cor);
    }
}

______________________________________________________For all individual values______________________________________________________
#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
    //cor arry store corelation betw orginal signal arry and shift_signal arry when shift is applied 
    int signal[3][2]={{0,2},{1,-1},{2,1}}, shift_signal[3][2]={{0,-1},{1,1},{2,2}},
    temp_shift[3][2], shift[1]={0}, cor=0;

    //define signal and shit_signal
    int loop1=0,corelation=0,no_row=3,no_shift=1,shift_val=0,match=0,temp_shift_row_val=0, rows=0,cols=0;
    getch(); /*If possible remove getch()*/
    printf("the signal is :\n");
    for(rows=0;rows<no_row;rows++) {
        for(cols=0;cols<2;cols++) {
         printf(" [%d]",signal[rows][cols]);
        }    
    }
    printf("\nthe shift signal is :\n");
    for(rows=0;rows<no_row;rows++) {
        for(cols=0;cols<2;cols++) {
            temp_shift[rows][cols]=shift_signal[rows][cols];
            printf("[%d]",shift_signal[rows][cols]);
        }    
    }
    printf("\nthe shift signal is temp_shift[2][2-1]:%d\n",temp_shift[2][(2-1)]);
    //Selecting the time shift for shift_signal
    printf("the shift is :\n");
    for(rows=0;rows<no_shift;rows++) {
        printf("%d,",shift[rows]);
    }
    for (loop1=0;loop1<no_shift;loop1++) {   
        shift_val=shift[loop1];//Selecting the time shift for shift_signal
        //to access for shift_signal arry
        for(rows=0;rows<no_row;rows++) {
        	temp_shift[rows][0]=(shift_signal[rows][0]+shift_val); // h[m − n] accessing only x axis value where as y axis is constant
       }
    }
    printf("shift_val %d\n",shift_val);
    printf("\n\n***********************\n\n");
    printf("\nthe temp_shift signal is :\n");
    for(rows=0;rows<no_row;rows++) {
        for(cols=0;cols<2;cols++) {
            printf("[%d]",temp_shift[rows][cols]);
        }    
    }
    printf("\n\n***********************\n\n");
    printf("\n\n******************* no_row : [%d] :\n\n", no_row);
    for (loop1=0;loop1<no_row;loop1++) {
        temp_shift_row_val=temp_shift[loop1][0];
        for(rows=0;rows<no_row;rows++) {
            printf("\nIn row=%d, %d is comparing %d\n",loop1,temp_shift_row_val,signal[rows][0] );
	        if (temp_shift_row_val==signal[rows][0]) {
                if(loop1<1)
                {
                    printf("\n val of cor before multiplication is %d",cor);
                    cor+= (temp_shift[loop1][loop1+1]*signal[rows][1]); //s[m] · h[m − n] accessing only y axis value to multiply
                    printf("\nloop1=%d, temp_shift[loop1][loop1+1]=%d and signal[rows][1]=%d#  cor=%d",loop1,temp_shift[loop1][loop1+1],signal[rows][1],cor);
                }
                else if(loop1>1)
                {
                    printf("\ntemp_shift[loop1-1=%d][loop=%d]=%d and signal[rows][1]=%d ==%d (cor=%d)",loop1,(loop1-1),temp_shift[(loop1)][loop1-1],signal[rows][1],(temp_shift[loop1][(loop1-1)]*signal[rows][1]),cor);
                    cor= cor +  (temp_shift[loop1][(loop1-1)]*signal[rows][1]);
                    printf("val of cor after multiplication is %d",cor);  
                }
                else
                {
                    printf("val of cor before multiplication is %d",cor);
                    cor+= (temp_shift[loop1][loop1]*signal[rows][1]); //s[m] · h[m − n] accessing only y axis value to multiply
                    printf("\nloop1=%d, temp_shift[loop1][loop1]=%d and signal[rows][1]=%d#  cor=%d",loop1,temp_shift[loop1][loop1],signal[rows][1],cor);
                }
            }
	    }
    }

    for(int i = 0 ; i < no_shift ; i++) { 
         //corelation += cor[i];
       printf("\nCor[%d] is [%d]\n",shift[0], cor);
    }
}
____________________________________________________________________________          
	
	
	
***************************************************************************************************************************************************
#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
    //cor arry store corelation betw orginal signal arry and shift_signal arry when shift is applied 
    int signal[3][2], shift_signal[3][2],
    temp_shift[3][2], shift[5], cor[5]={0};//={{0,2},{1,-1},{2,1}},{{0,-1},{1,1},{2,2}},={-2,-1,0,1,2}

    //define signal and shit_signal
    int loop1=0,corelation=0,no_row=3,no_shift,shift_val=0,temp_shift_loop=0,temp_shift_row_val=0, rows=0,cols=0;
    getch();
    printf("Enter no of shift\n");
    scanf("%d",&no_shift);
    printf(" Enter the value for no of shift\n");
    for(int i=0;i<no_shift;i++) {
        scanf("%d",&shift[i]);
    }
    
     printf("Enter value for signal in x rows\n");
    scanf("%d",&no_row);
    printf("Enter signal value in means of x,y\n");
    for(rows=0;rows<no_row;rows++)
    {   
                scanf("%d,%d",&signal[rows][0],&signal[rows][1]);
             
    }

    printf("Enter value for shift_signal value in means of x,y \n");
    for(rows=0;rows<no_row;rows++)
    {   
        scanf("%d,%d",&shift_signal[rows][0],&shift_signal[rows][1]);
    }

    printf("the signal is :\n");
    for(rows=0;rows<no_row;rows++) {
        printf("(");
        for(cols=0;cols<2;cols++) { 
         printf("%d",signal[rows][cols]);
         if(cols==0)
         {
             printf(",");
         }
         else
         {printf(")\n");}
        }    
    }
    printf("\nthe shift signal is :\n");
    for(rows=0;rows<no_row;rows++) {
        printf("(");
        for(cols=0;cols<2;cols++) {
            temp_shift[rows][cols]=shift_signal[rows][cols];
            printf("%d",shift_signal[rows][cols]);
            if(cols==0)
         {
             printf(",");
         }
         else
         {printf(")\n");}
        }    
    }
    //printf("\nthe shift signal is temp_shift[2][2-1]:%d\n",temp_shift[2][(2-1)]);
    //Selecting the time shift for shift_signal
    printf("\nthe shift is :\n");
    for(rows=0;rows<no_shift;rows++) {
        printf("%d,",shift[rows]);
    }
    
    //printf("shift_val %d\n",shift_val);
    printf("\n\n***********************\n\n");
    printf("\nthe temp_shift signal is :\n");
    for(rows=0;rows<no_row;rows++) {
        printf("(");
        for(cols=0;cols<2;cols++) {
            printf("%d",temp_shift[rows][cols]);
            if(cols==0)
         {
             printf(",");
         }
         else
         {printf(")\n");}
        }    
    }
    printf("\n\n***********************\n\n");
    //printf("\n\n******************* no_row : [%d] :\n\n", no_row);
    
    for(int main_loop=0;main_loop<no_shift;main_loop++)
    {
          
        shift_val=shift[main_loop];//Selecting the time shift for shift_signal
        printf("\n\n\n\nthe shift=%d and temp shifted signal is :\n",shift_val);//to access for shift_signal arry
        for(rows=0;rows<no_row;rows++) {
            printf("(");
            temp_shift[rows][0]=(shift_signal[rows][0]+shift_val);
            for(cols=0;cols<2;cols++) {
            printf("%d",temp_shift[rows][cols]);
            if(cols==0)
         {
             printf(",");
         }
         else
         {printf(")\n");}
         }// h[m − n] accessing only x axis value where as y axis is constant
        }
           
    
    for (loop1=0;loop1<no_row;loop1++) {
        temp_shift_row_val=temp_shift[loop1][0];
        for(rows=0;rows<no_row;rows++) {
            //printf("\nIn row=%d X cordonate of Temp shift signal value %d is comparing %d coressponding Signal value\n",loop1,temp_shift_row_val,signal[rows][0] );
	        if (temp_shift_row_val==signal[rows][0]) {
	            //printf("\n ##################________Overlapping occurs________############ \n");
                if(loop1<1)
                {
                    //printf("\n val of cor[%d] before multiplication is %d\n",main_loop,cor[main_loop]);
                    //printf("\n the multiplication magnitude of signal is %d * %d  and storing corelation",temp_shift[loop1][loop1+1],signal[rows][1]);
                    cor[main_loop]+= (temp_shift[loop1][loop1+1]*signal[rows][1]); //s[m] · h[m − n] accessing only y axis value to multiply
                    //printf("\nloop1=%d, temp_shift[loop1][loop1+1]=%d and signal[rows][1]=%d#  cor=%d",loop1,temp_shift[loop1][loop1+1],signal[rows][1],cor);
                }
                else if(loop1>1)
                {
                     //printf("\n val of cor[%d] before multiplication is %d\n",main_loop,cor[main_loop]);
                     //printf("\n the multiplication magnitude of signal is %d * %d  and storing corelation\n",temp_shift[loop1][loop1-1],signal[rows][1]);
                    //printf("\ntemp_shift[loop1-1=%d][loop=%d]=%d and signal[rows][1]=%d ==%d (cor=%d)",loop1,(loop1-1),temp_shift[(loop1)][loop1-1],signal[rows][1],(temp_shift[loop1][(loop1-1)]*signal[rows][1]),cor);
                    cor[main_loop]+= (temp_shift[loop1][(loop1-1)]*signal[rows][1]);
                    //printf("\nval of cor[%d] after multiplication is %d\n",main_loop,cor[main_loop]);  
                }
                else
                {
                    //printf("\nval of cor[%d] before multiplication is %d\n",main_loop,cor[main_loop]);
                    //printf("\n the multiplication magnitude of signal is %d * %d  and storing corelation\n",temp_shift[loop1][loop1-1],signal[rows][1]);
                    cor[main_loop]+= (temp_shift[loop1][loop1]*signal[rows][1]); //s[m] · h[m − n] accessing only y axis value to multiply
                    //printf("\nval of cor[%d] after multiplication is %d\n",main_loop,cor[main_loop]); 
                    //printf("\nloop1=%d, temp_shift[loop1][loop1]=%d and signal[rows][1]=%d#  cor=%d",loop1,temp_shift[loop1][loop1],signal[rows][1],cor);
                }
            }
	    }
    }printf("\n\n\n\n**********____Correlational value for shift [%d] is [%d]___________*******\n",shift[main_loop], cor[main_loop]);
}

    for(int i = 0 ; i < no_shift ; i++) { 
         corelation += cor[i];
       printf("Correlational value for shift [%d] is [%d]\n",shift[i], cor[i]);
    }
    printf(" The summation of corelation=%d",corelation);
}
	
	
	
