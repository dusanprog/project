#include <stdio.c>

int my_strlen(cahr *s)
{
cahr *p=s;
while (*p)
{
++p;
return (p-s);

}

int main(void)
{
int i;
char *s[]={

"Git tutorials",
"Tutorial point"
};

for(i=0;i<2;i++){
printf("String length of %s=%d\n",s[i],my_strlen(s[i]));
return 0;

}



}


}


	