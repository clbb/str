#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char* my_strcpy(char* dst,char const* src)
{
	if(dst == NULL || src == NULL)
		return NULL;
	if(dst == src)
		return dst;
	char* pdst =dst;
	while(*src != '\0')
	{
		*pdst++ = *src++;
	}	
	*pdst = '\0';
	return pdst;	
}

void func(int a)
{
//	int ar[a]={1,2,3};
//	printf("%d\n",ar[1]);
	
}

size_t my_strlen(char const* string)
{
	if(string == NULL || *string == '\0')
		return 0;
	
	size_t count = 0;
	while(*string++ != '\0')
	{
		count++;
	//	string++;
	}
	return count;
	
}


char* my_strcat(char* dst,char const* src)
{
	if(dst == NULL || src == NULL)
		return NULL;

	char* cur = dst;	
	while(*cur!= '\0')
	{
		cur++;
	}
	while(*src != '\0')
	{
		*cur++ = *src++;
	}
	return dst;
}

int my_strcmp( char* dst, char* src)
{
	if(dst==src)
		return 0;
	while(*dst==*src)
	{
		++dst;
		++src;	
	}

	if(*dst > *src)
		return 1;
	else if(*dst < *src)
		return -1;
	else
		return 0;
}

void* my_memmove(void* dst,const void* src,size_t count)
{
	if(count <= 0 || src == NULL || dst == NULL)
		exit(1);

	char* pDst = (char*)dst;	
	char* pSrc = (char*)src;

	int n = count;
	if(pSrc < pDst && n < (pDst-pSrc))
	{
		pSrc+=count;
		pDst+=count;
		
		while(n-- > 0)
			*--pDst = *--pSrc;
	}
	else
	{
		while(n -- > 0)
			*pDst++ = *pSrc++;
	}		

	return dst;
}	
int main()
{
	int s[11] = {1};
	printf("%c\n",s[1]);
	memset(s,3,sizeof(s));
	printf("%c\n",s[1]);

//    char dst[50] = "asdfghj";
//    char _dst[50] = "asdfghj";
//	char src[20] = "eeeeeeeeeeeeeeeee";
//	char _src[20] = "eeeeeeeeeeeeeeeee";
//	my_memmove(_dst,src,13);
//	printf("%s\n",_dst); 
//	memmove(dst,NULL,13);
//	printf("%s\n",dst); 

//	char dst[] = "xixishizhu";
//	char src[] = "xixibushizhu";
//	printf("%d\n",strcmp(dst,src));

//	char dst[30] = "hello";
//	char src[] = "sss";
//	char *a = my_strcat(dst,"SSS");
//	printf("%s\n",a);

	//char _dst[] = "\0";
	//char dst[] = "include stdio";
	//size_t a = my_strlen(dst);
	//printf("%zu\n",a);

//	char dst[] = "include stdio";
//	char _dst[] = "include stdio";
//	int a[] = {0,1,2};
//	int *p = "123";
//	printf("%d\n",p[4]);
//	printf("%d\n",p[3]);
//	func(4);
}
