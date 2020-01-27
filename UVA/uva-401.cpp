#include <cstdio>
#include <cstring>
#include <iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

int main()
{
    int i,j,length,c,rp,mp;
    char input[25],revInput[25],rev2[25];
    memset(input,'\0',sizeof(input));
    memset(revInput,'\0',sizeof(revInput));
    memset(rev2,'\0',sizeof(rev2));
    while(scanf("%s",input)==1)
    {
        c=0;
        rp=0;
        mp=0;
        length=strlen(input);
        for(i=length-1;i>=0;i--)
        {
            revInput[c]=input[i];
            if(input[i]=='E'){
                rev2[c]='3';
            }
            else if(input[i]=='3'){
                rev2[c]='E';
            }
            else if(input[i]=='L'){
                rev2[c]='J';
            }
            else if(input[i]=='J'){
                rev2[c]='L';
            }
            else if(input[i]=='S'){
                rev2[c]='2';
            }
            else if(input[i]=='2'){
                rev2[c]='S';
            }
            else if(input[i]=='Z'){
                rev2[c]='5';
            }
            else if(input[i]=='5'){
                rev2[c]='Z';
            }
            else{
                rev2[c]=input[i];
            }
            c+=1;
        }
        for(i=0;i<length;i++)
        {
            if(input[i]==revInput[i])
            {
                rp=1;
                continue;
            }
            else if((input[i]=='0' && revInput[i]=='O')||(input[i]=='O'&&revInput[i]=='0'))
            {
                rp=1;
                continue;
            }
            else
            {
                rp=0;
                break;
            }
        }

        for(i=0;i<length;i++)
        {
            if(input[i]==rev2[i])
            {
                if(input[i]=='0'||input[i]=='B'||input[i]=='C'||input[i]=='D'||input[i]=='F'||input[i]=='G'||input[i]=='K'||input[i]=='N'||input[i]=='P'||input[i]=='Q'||input[i]=='R'||input[i]=='4'||input[i]=='6'||input[i]=='7'||input[i]=='9')
                {
                    mp=0;
                    break;
                }
                mp=1;
                continue;
            }
            else if((input[i]=='0' && rev2[i]=='O')||(input[i]=='O' && rev2[i]=='0'))
            {
                mp=1;
                continue;
            }
            else
            {
                mp=0;
                break;
            }
        }


        if(rp==0 && mp==0)
            printf("%s -- is not a palindrome.\n\n",input);
        else if(rp==1 && mp==0)
            printf("%s -- is a regular palindrome.\n\n",input);
        else if(rp==0 && mp==1)
            printf("%s -- is a mirrored string.\n\n",input);
        else if(rp==1 && mp==1)
            printf("%s -- is a mirrored palindrome.\n\n",input);

        memset(input,'\0',sizeof(input));
        memset(revInput,'\0',sizeof(revInput));
        memset(rev2,'\0',sizeof(rev2));

    }
    return 0;
}
