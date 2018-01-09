#include <stdio.h>

typedef unsigned char u8;

void set_bit(unsigned long nr, volatile void * addr)
{
	int *m = ((int *) addr) + (nr >> 5);
	printf("%d ==== %p\n",*m,m);
	*m |= 1 << (nr & 31);
}

//int strncmp(char *s1, char *s2);
void __set_bit(unsigned long bit, void *addr)
{
	int *ptr = (int *)addr;
	*ptr = 2;
	*ptr|=1<<bit;
}

void __clear_bit(unsigned long bit, void *addr)
{
  int *ptr = (int*)addr;
  *ptr &=~(1<<bit); 
}

void __change_bit(unsigned long bit, void *addr)
{
  int *ptr = (int*)addr;
  *ptr ^=(1<<bit);
}

void __check_bit(unsigned long bit, void *addr)
{
  int *ptr = (int*)addr;
  *ptr = 2;
  if((*ptr)&(1<<bit))
  {
    printf("bit is one");
  }
  else
  {
    printf("bit is zero");
  }
}

u8 get_bit_val(u8 start_bit,u8 end_bit)
{
  u8 i,data=0;
  for(i=start_bit; i<end_bit;i++)
  {
    data |= (1<<i);
  }
  return data;
}


int main()
{
  /*
	unsigned long a =0x1234567;
    unsigned short b = 0xaa55;
	char c;
    char d;
    c = (b & 0x00ff);
    d =(char)((b & 0xff00) >> 8);
    b >>=8;
    c =(char)(((b) & 0xff00));
    d =(char)((b & 0x00ff)) ;
    
    printf("\n(%d)\n",sizeof(b));
	printf("%x \t %x \n",c,(char)d);
    set_bit(10,&a);
	printf("%d ==== %p\n",a,&a);
    switch(printf("Helloworld"))
    __check_bit(0,&b);*/

  {
    u8 data,value=0x03,i;

    data = get_bit_val(0,2);
    printf("%d\n",data);
    data = value & data;
   // printf("%d\t%d\n",data,value);

    for(i=0;i<7;i++)
    {
      if(value&(1<<i))
      {
        printf("1");
      }
      printf("0");
    }
    printf("\n");
  }
}
