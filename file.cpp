#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    std::ios_base::sync_with_stdio;std::cin.tie(NULL);std::cout.tie(NULL);



    FILE *fp=fopen("data.txt","r");
    FILE *fpO=fopen("Odd.txt","w");
    FILE *fpE=fopen("Even.txt","w");
    if(fp==NULL)cout<< "File does not exist" <<'\n';
    else{
        while(true){
            int n,x;
            x=fscanf(fp,"%d",&n);
            if(x==EOF)break;
            if(n%2==0){
                fprintf(fpE,"%d ",n);
            }
            else fprintf(fpO,"%d ",n);
        }
    }
    return 0;
}