

#include "bit.h"

char test_bit(char valeur,char taille,char position)
{
   
   

    char mask=1;
    char i;
   
    

    if(taille<0||taille>sizeof(char)*8-position)
        exit(EXIT_FAILURE);
    
    if(position>sizeof(char)*8)
        exit(EXIT_FAILURE);

    for(i=1;i<taille;i++){
        mask=mask<<1;
        mask+=1;   
    }

    
    mask=mask<<position;
  
    return (valeur&mask)>>position ;

}


int set_bit(char* valeur,char set,char taille,char position)
{
    char i,j;
    char mask=1;

    if (taille<0||taille>sizeof(char)*8-position)
        exit(EXIT_FAILURE);

    if(position>sizeof(char)*8)
        exit(EXIT_FAILURE);

    for(i=0;i<taille;i++){
        
           
       if( test_bit(set,1,i)){
         *valeur |= ( mask << position+i);


       }
       else
          *valeur &= (mask<<position+i);
                   

    }
    return 1;
                
}











