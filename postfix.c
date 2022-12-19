#include<stdio.h>
char post[100];
int st[100],top=-1;
int isop(char ch)
{
	switch(ch)
	{
		case'+':return 1;
		case'-':return 1;
		case'*':return 2;
		case'/':return 2;
		default :return 0;
	}
}
int operation(int op2,char op,int op1)
{
	switch(op)
	{
		case'+':return op2+op1;
		case'-':return op2-op1;
		case'*':return op2*op1;
		case'/':return op2/op1;
	}
}

void post_eval(char*str)
{
	int i,op1,op2,k=0,val;
	char temp[100];
	for(i=0;str[i]!='\0';i++)
	{
		if(isop(str[i]))
		{
			op1=st[top--];
			op2=st[top--];
			st[++top]=operation(op2,str[i],op1);
		}
		else
		{
			if(str[i]!=' ')
			{
				temp[k++]=str[i];
			}
			else if(k!=0)
			{
				temp[k]='\0';
				val=atoi(temp);
				st[++top]=val;
				k=0;
			}
		}
	}
}
void main()
{
	scanf("%[^\n]s",&post);
	post_eval(post);
	printf("%d",st[0]);
}


