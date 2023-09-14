#include<stdio.h>
#include<string.h>
int simulateNFA(char*input){
	int state=0;
	int len=strlen(input);
	for(int i=0;i<len;i++)
	{
		char c=input[i];
		if(state==0)
		{
			if(c=='0')
			{
				state=1;
			}
			else
			{
				return 1;
			}
			else
			{
				if(c=='1'&& i==len-1)
				{
					return1;
				}
			}
		}
	}
}