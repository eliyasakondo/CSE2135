#include<stdio.h>
int main(){
int Arr[100];
int n;
printf("Enter the range of your list: \n Range = ");
scanf("%d",&n);
for(int i=0;i<n;i++){
    scanf("%d",&Arr[i]);
}
printf("Your inputed list is \n ");
for(int i=0;i<n;i++){
    printf("\t %d",Arr[i]);
}
//Deleting an item from the list.
printf("enter the item position to removing item from the list");
scanf("%d",&rmPosition);

if(rmPosition == Arr[rmPosition-1])
    Arr[rmPosition-1]=Arr[]
return 0;
}
