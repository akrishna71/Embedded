#include <stdio.h>

void str_cpy(char *s1, char *s2)
{
  char *src = s1;
  char *des = s2;

  while(*src != '\0')
  {
    *des++ = *src++;
  }

}

int str_len(char *s)
{
  char *p = s;
  while(*p != '\0')
    p++;
  return p - s;
}

int str_cmp(char *s1, char *s2)
{
  while(*s1++ == *s2++)
    if(*s1 == '\0')
      return 0;
  return *s1 - *s2;
}

void str_cat(char *s1, char *s2)
{
  char *src = s1;
  char *des = s2;
  while(*src != '\0') src++;

  while((*src++ = *des++) != '\0')
    ;
}

void mem_cpy(char *s1, char *s2,int size)
{
  const char *src= s1;
  char *des = s2;

  while(--size)
  {
    *des++ = *src++;
  }

}

int mem_cmp(char *s1, char *s2)
{
  while(*s1++ == *s2++)
    if(*s1 == '\0')
      return 0;
  return *s1 - *s2;
}

void str_rev(char *s1)
{
  int i,length=0;
  char *p=s1;

  while(*p !='\0')
  {
    p++;
   length =  p-s1;
  }
//  printf("%d",length);
//  length = strlen(s1);

  for(i=length; i>=0;i--)
  {
    printf("%c",*(s1+i));
  }
}

enum var
{
  a = -20,
  b,
  c,
  d,
};

int main(void)
{
  /*
  char *s1 = "Ramakrishnan";
  char s2[35];
  char s3[35];
  printf("%d\n",str_len(s1));
  str_cpy(s1,s2);
  //printf("%s",s2);
  printf("%d\n",str_cmp(s1,s2));
  str_cat(s2,s1);
  printf("%s\n",s1);
  mem_cpy(s1,s3,8);
  printf("%s\n",s3);
  printf("%s\t%s\n%d\n",s1,s2,mem_cmp(s1,s2));

  int a = 0;
  int b = 5;
  a = ++b+1;
  printf("a=%d,b=%d\n",a,b);

  enum var test;
  test = a;
  printf("%d",test);
  */
  char *s1 = "Ramakrishnan";
  str_rev(s1);

}
