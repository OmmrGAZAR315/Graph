#include <stdio.h>
int main(){
 while(1){
   int row,Y=0,space=0,X=0,column,c;
  printf("please enter the coordinates ( x, y )\n");
      scanf("%d",&X);
    scanf("%d",&Y);
    for( row = Y+5; row>0; row--){
    if(!(X==0 && Y+1==row))
    // printf("|"); //replaceable for line 11
    printf("%d - |",row-1); //removable line
    else printf("    "); //removable line
      if(Y+1==row){
        while(space<X-1 && X!=0){
            printf(" ");
            space++;
        }
        printf("X");
      }  if(row!=1){ printf("\n");}
    }
     for( c =0; c<X+14;c++){
        printf("-");
    }
    printf("\n    ");
    for(int c =0; c<2;c++){ //removable line 25 - 29
        for( column =0; column<10;column++){
        printf("%d",column);
    }}
    printf("\n\n\n\n\n");
     
 }
}