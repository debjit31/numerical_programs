#include<stdio.h> 
int main()
{
    int dn,kn,i,j,m; 
    printf("enter the no of bits in message"); 
    scanf("%d",&dn);
    char data[dn+1]; 
    printf("enter the data");
    scanf("%s",&data); 
    printf("enter no of bits in key");
    scanf("%d",&kn);
    printf("enter the key");
    char key[kn+1];
    scanf("%s",&key);
    char data1[dn+kn-1];
    for(i=0;i<dn;i++)
    	data1[i]=data[i];
    for(j=1;j<kn;j++)
    {
        data1[i]='0';
        i++;
    }
   
    for(i=0;i<dn;i++)
    {
    	
        if(data1[i]=='0')
        continue; 
        else
        {
            for(j=1;j<kn;j++)
            {
                if(data1[i+j]!=key[j])
                data1[i+j]='1';
            else
            data1[i+j]='0';
            }
        }
    }
    printf("crc is \n");
    /*for(i=0;i<dn;i++)
    	printf("%c",data[i]);*/
    for(i=dn;i<dn+kn-1;i++)
    	printf("%c",data1[i]);
    return 0; 
}

