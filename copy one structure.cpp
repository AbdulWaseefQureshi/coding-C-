#include<stdio.h>
struct student
{
	char name[10];
	int rno;
	char gender;
};
int main()
{
	struct student s1 ={"sreenu",123,'f'},s2;
	printf("the student details:\n");
	printf("name=%s\nrno=%d\ngender=%c",s2.name,s2.rno,s2.gender);
	return 0;
}
