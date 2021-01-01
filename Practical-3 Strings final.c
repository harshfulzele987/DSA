
#include<stdio.h>
#include<string.h>
void SUBSTRING(char *str,int x,int y);
int INDEX(char *str,char *pattern);
void CONCATENATION(char *str,char *s2);
void INSERT(char *str,int l,char *sub);
int LENGTH(char *str);
char DELETE(char *str,int start,int len);
void DELETE_OCCUR(char *str,char *pat);
void REPLACE(char *str,char *s1,char *sr);
void remove_stopWords(char *str);
void remove_unWant(char *str);

int main()
{
	char str[100];       //DECLARING STRING
	printf("Enter string:");
	gets(str);
	printf("String :");  //STRING ENTERED BY USER
	puts(str);
	printf("\n");
	int ch;
   //GETTING CHOICE FROM USER


	switch(ch)
	{
		case 1:           //SUBSTRING OPERATION ...
		int start, length;
		printf("Enter start index of substring:");
		scanf("%d",&start);+
		printf("Enter length of substring:");
		scanf("%d",&length);
		SUBSTRING(str,start,length);
		break;

		case 2:            //INDEX OPERATION ...
		char pattern[30];
		printf("Enter Pattern whose index you want to know:");
		scanf("%s",pattern);
		printf("Index: %d",INDEX(str,pattern));
		break;

		case 3:                  //CONCATENATION OPERATION ...
		char s2[50];
		printf("Enter String to ge concatenated: ");
		scanf("%s",&s2);
		CONCATENATION(str,s2);
		break;

		case 4:                 //LENGTH OPERATION ...
		printf("Length of String: %d",LENGTH(str));
		break;

		case 5:                 //INSERT OPERATION ...
		char sub[30];
		printf("Enter the String You want to insert: ");
		scanf("%s",sub);
		int l;
		printf("Location : ");
		scanf("%d",&l);
		INSERT(str,l,sub);
		printf("%s",str);
		break;

		case 6:                 //DELETE OPERATION ...
		int loc,len;
		printf("Enter starting loc from where you want to delete: ");
		scanf("%d",&loc);
		printf("Enter length you want to delete: ");
		scanf("%d",&len);
	    DELETE(str,loc,len);
	    puts(str);
		break;

		case 7:                 //DELETE OCCURANCE OF A SUBSTRING ...
		char pat[50];
		printf("Enter pattern you want to delete: ");
		scanf("%s",pat);
		DELETE_OCCUR(str,pat);
		puts(str);
		break;

		case 8:                //REPLACE SUBSTRING ...
		char s1[50],sr[50];
		printf("Enter string to be Deleted: ");
		scanf("%s",s1);
		printf("Enter string to be Replaced: ");
		scanf("%s",sr);
		REPLACE(str,s1,sr);
		puts(str);
		break;

		case 9:              //REMOVING STOP WORDS FROM STRING ...
		remove_stopWords(str);
		break;

		case 10:            //REMOVING UNWANTED WORDS ...
		remove_unWant(str);
		break;

	}
 	return 0;
}

void SUBSTRING(char *str,int x,int y)
{
	char sub[50];
	int i;
	for(i=0;i<LENGTH(str);i++)
	{
		if(i>=x && i<=x+y-1)
		{
			sub[i-x]=str[i-1];
		}
		if(i>x+y-1)
		{
			break;
		}
	}
	puts(sub);
}

int INDEX(char *str,char *pattern)
{
	int i,j;
	int l=LENGTH(pattern);
	for (i = 0, j = 0; str[i] != '\0' && pattern[j] != '\0'; i++)
    {
        if (str[i] == pattern[j])
        {
            j++;
        }
        else
        {
            j = 0;
        }
    }

    if (j == l)
    {
        return (i-j+1);
    }
    else
    {
        return 0;
    }
}

void CONCATENATION(char *str,char *s2)
{
	int j,l=LENGTH(str);
	for(j=0;s2[j]!='\0';++j,++l)
	{
		str[l]=s2[j];
	}
	printf("Concatenated String: ");
	puts(str);
}

int LENGTH(char *str)
{
	int len;
	for(len=0;str[len]!='\0';len++);
	return len;
}

void INSERT(char *str,int l,char *sub)
{
	int i,j,p=LENGTH(str),q=LENGTH(sub);
	for(i=p;i>=l-1;i--)
	{
		str[i+q]=str[i];
	}
	for(j=l-1,i=0;j<=(j+q-1),i<q;j++,i++)
	{
		str[j]=sub[i];
	}
}

char DELETE(char *str,int start,int len)
{
	int i;
	int l = LENGTH(str);
	for(i=start+len-1; i<=l; i++)
	{
		str[i-len]=str[i];
	}
}

void DELETE_OCCUR(char *str,char *pat)
{
	int k=INDEX(str,pat);
	int l=LENGTH(pat);
	while(k!=0)
	{
	    DELETE(str,k,l);
		k=INDEX(str,pat);
	}
}

void REPLACE(char *str,char *s1,char *sr)
{
	int k=INDEX(str,s1);
	DELETE(str,k,LENGTH(s1));
	INSERT(str,k,sr);
}

void remove_stopWords(char *str)
{
	char stop[6][15] = {"a ","as ","also ","the ","is ","then "};
	char pat[15];
	int In,l;
	for(int i=0;i<6;i++)
	{
		pat[i] = NULL;
		In = 0;
		l=0;
		for(int j=0;j<15;j++)
		{
			pat[j]=stop[i][j];
		}
	    DELETE_OCCUR(str,pat);
	}
	puts(str);
}

void remove_unWant(char *str)
{
	char unWant[5][15] = {"stupid ","duffer ","nonsense ","idiot ","horrible "};
	char pat[15];
	int In,l;
	for(int i=0;i<5;i++)
	{
		pat[i] = NULL;
		In = 0;
		l=0;
		for(int j=0;j<15;j++)
		{
			pat[j]=unWant[i][j];
		}
	    DELETE_OCCUR(str,pat);
	}
	puts(str);
}
