   #include<stdio.h>
   #include<string.h>
   int main()
   {
     char s1[]="Tanmoy";
     char *s2=s1;
     s1[2]='x';
     printf("%s",s2);
     return 0;
   } 