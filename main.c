#include <stdio.h>	/* ��w�ƧǪk Bubble Sort */
#define SIZE 10

void bubbleSort(int *  array, int size);	

int main(void)
{
   int a[10]={7,9,20,44,15,87,63,46,91,88};
   int j,size;
   
   puts("��ƱƧǫe\n");
   
    for(j=0;j<=9;j++)
    {
    	printf("%d ",a[j]);
    }
    bubbleSort( a, 10);
    
	puts("\n��ƱƧǫ�");
	for(j=0;j<=9;j++)
	{
		printf("%d ",a[j]);
	}
}

void swap(int *element1Ptr,int *element2Ptr)
{
	int hold= *element1Ptr;
	*element1Ptr=*element2Ptr;
	*element2Ptr=hold;
}

