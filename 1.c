/*
*  Description:
*  Give you an array which has n integers,it has both positive and negative integers.Now you need sort this array in a special way.After that,the negative integers should in the front,and the positive integers should in the back.Also the relative position should not be changed. 
*  eg. -1 1 3 -2 2 
*  ans: -1 -2 1 3 2
*  http://www.careercup.com/question?id=5201559730257920
*/

#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[])
{
   int input[]={-1,1,3,-2,2};
   int len=sizeof(input)/sizeof(int);
   int i, j, k;
   int pos;
   int temp;
   for(i=0;i<len;i++){
   	printf("%d ",input[i]);
   }
   printf("\n");
   pos=-1;
   int n=0;
   for(i=0;i<len;i++){
   	n++;
   	if(input[i]<0){
   		if(pos==-1) continue;
   		else{
   			temp=input[i];
   			for(k=i;k>pos;k--){
   				n++;
   				input[k]=input[k-1];
   			}
   			input[pos]=temp;
   			pos=-1;
   		}
   	}
   	else if(input[i]>=0){
   		if(pos==-1) pos=i;
   		else continue;
   	}
   }
   for(i=0;i<len;i++){
   	printf("%d ",input[i]);
   }
   printf("\n");
   return 0;
}
