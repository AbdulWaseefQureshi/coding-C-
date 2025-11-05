#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct student
{
	char name[10];
	int devc,ds,dlco,che,beee;
};
int main(int arg,char*argv[])
{
	struct student s;
	int total;
	strcpy(s.name,argv[1]);
	s.devc=atoi(argv[2]);
	s.ds=atoi(argv[3]);
	s.dlco=atoi(argv[4]);
	s.che=atoi(argv[5]);
	s.beee=atoi(argv[6]);
	total=s.devc+s.ds+s.dlco+s.che+s.beee;
	printf("name\tDEVE\tDS\tDLCO\tCHE\tBEEE\ttotal\n");
	printf("%s\t%d\t%d\t%d\t%d\t%d\t%d",s.name,s.devc,s.ds,s.dlco);
	return 0;
	
}

