#include<stdio.h>
#include<stdlib.h>
int numberArray,Array[100];
  void Creation(){
      printf("Enter total Elements number in Array");
      scanf("%d",&numberArray);
      printf("\n Enter the value of Elements\n");
for(int i=0;i<numberArray;i++)
{
    scanf("%d",&Array[i]);
}
}
void Display(){
for(int i=0;i<numberArray;i++){

    printf("%d",Array[i]);
}
}

int main(){
  int ch;
  printf("Enter your choice list \n 1. Create an Array \n 2. Insert an Element  \n 3. Delete Item  \n 4. Exit\n");
    scanf("%d",ch);
switch(ch){
case 1:
    Creation();
    break;
case 2:Display();
        break;
case 4:
    exit(0);
default:
    printf("Wrong Input. Try Again");
    }
return 0;
}
