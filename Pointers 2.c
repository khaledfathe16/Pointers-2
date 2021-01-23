
/* This project to initialize the variables in array by the refrence of array it called fixed pointer   */
#include <Stdio.h>

int func(int *p);

 void main(void){

int arr[5];
func(arr);

for(int i=0;i<5;i++){

    printf("ARRAY = %d\n",arr[i]);
}

}

int func(int *p){

for(int i=0;i<5;i++){

    scanf("%d",(p+i));

}

}
