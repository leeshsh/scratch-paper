#include"stdio.h"
#include"string.h"
#include"stdlib.h"
#include <limits.h> 
#define a 10



int handle(int num,int data)
{
    unsigned int count=0;
    while(data){
        if(data%10==num)
            count++;
        data=data/10;
    
    }
   
    return count;
}
    
int get_length(int *data)
{
    

}
int main()
{
    char  data1[1000]={0};
    char data2[1000]={0};
    int count=0;
    while(gets(data1)!=NULL){
        gets(data2);
        
        int length1=strlen(data1);
        int length2=strlen(data2);
        printf("%d %d \n",length1,length2);
        for(int i=0;i<length1;i++)
            for(int j=0;j<length2;j++){
                if(data1[i]==data2[j]){
                    printf("%d %d %d %d\n",i, data1[i],j,data2[j]);
                    count++;
                    continue;
                }
            }
        printf("%d\n",count);
        count=0;
        memset(data1,0,sizeof(data1));
        memset(data2,0,sizeof(data2));
    }

  //  ret=handle(2,12203234);
   // printf("%d\n",count);
    
}
