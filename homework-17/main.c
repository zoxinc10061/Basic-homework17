#include <stdio.h>�@

#include <stdlib.h> 

int main(int argc, char *argv[]) {

	int a[5]={0};

	int i=0, min;

	printf("-------------------------------------------------\n");  

	printf("             ��M�}�C���̤p�Ȫ��{��              \n");

	printf("-------------------------------------------------\n");   

	printf("�гs���J���ӼƭȡG\n");

	for(i=0;i<5;i++)

	{

	   printf("��%d����ơG", i+1 );

	   scanf("%d", &a[i]);

	}

	min=a[0];

	for(i=0;i<5;i++)

	{

	  if (min>a[i])	

	  {

		  min=a[i];

	  }

	}

	printf("�̤p�ȬO�G%d\n\n",min); 

	system("PAUSE");	

	return 0;

}
